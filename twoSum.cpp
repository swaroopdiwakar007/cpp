#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> twoSum(vector<int> arr, int t) {
  unordered_set<int> s;
  vector<int> res;
  for (int i = 0; i < arr.size(); i++) {
    if(s.find(t - arr[i]) != s.end()) {
      res.push_back(t - arr[i]);
      res.push_back(arr[i]);
      return res;
    }
    s.insert(arr[i]);
  }
}

int main() {
  vector<int> arr = {1,2,3,4,5,6};
  vector<int> res = twoSum(arr, 6);
  cout<<res[0]<<" "<<res[1];
}
