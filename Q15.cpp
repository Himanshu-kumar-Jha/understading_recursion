#include<iostream>
using namespace std;
#include<vector>

void generatePermutations(vector<int>& nums, vector<int>& current, vector<vector<int>>& ans, vector<bool>& check) {
    if (current.size() == nums.size()) {
        ans.push_back(current);
        return;
    }
    for (int i = 0; i < nums.size(); i++) {
        // pick
        if (!check[i]) {
            current.push_back(nums[i]);
            check[i] = true;
            generatePermutations(nums, current, ans, check);
            check[i] = false;
            current.pop_back(); // backtrack
        }
    }
}
int main(){
    vector<int> nums = {1, 2, 3};
    vector<int> current;
    vector<vector<int>> ans;
    vector<bool> check(nums.size(), false);
    generatePermutations(nums, current, ans, check);
    for (auto v : ans) {
        for (auto i : v) {
            cout << i << " ";
        }
        cout << endl;
    }


    return 0;
}