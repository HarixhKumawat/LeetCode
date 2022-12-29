//29-12-2022

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {

        unordered_map<int, int> mapp;
        for (int i = 0; i < nums.size(); i++) {
            mapp[nums[i]] = i;
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(mapp.find(target - nums[i]) != mapp.end()) {
                if(i == mapp.find(target - nums[i])->second) continue;
                return {i, mapp.find(target - nums[i])->second};
            }
        }
        return {-1, -1};
    }
};

int main(){
    Solution s1;
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> sumof = s1.twoSum(nums, target);
    for(int i: sumof) {
        cout<< i;
    }
}