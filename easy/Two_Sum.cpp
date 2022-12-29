//29-12-2022

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        cout<< "accessed the fuction";
        for(int i = 0; i < nums.size(); i++){
            int temp = nums[i];

            for (int j = i+1; j < nums.size(); j++) {
                cout<< "One moer..." <<  temp << " " << nums[j] << endl;
                if (temp + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};

int main(){
    Solution s1;
    vector<int> nums = {3,3};
    int target = 6;
    vector<int> sumof = s1.twoSum(nums, target);
    for(int i: sumof) {
        cout<< i;
    }
}