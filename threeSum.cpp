#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> arr, int t) {
  // cout << r << endl;
  sort(arr.begin(), arr.end());
  vector<vector<int>> res{};
  for (int i = 0; i < arr.size() - 2; i++) {
    int r = arr.size() - 1;
    int l = i + 1;
    while (l < r) {
      int cur_sum = arr[i] + arr[l] + arr[r];
      if (cur_sum == t) {
        res.push_back({arr[i], arr[l], arr[r]});
        // cout << arr[i] << arr[l] << arr[r] << endl;
        l++;
        r--;
      }
      else if (cur_sum < t) {
        l++;
      }
      else {
        r--;
      }
    }
  }
  return res;
}

int main() {
  
  vector<int> arr{11,2,3,4,5,6,7,8,9};
  int target = 15;
  auto res = threeSum(arr, target);

  for (auto c: res) {
    for (auto i: c) {
      cout << i << " ";
    }
    cout << endl;
  }

}
