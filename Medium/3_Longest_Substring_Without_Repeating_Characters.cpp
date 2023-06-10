//05-01-2023

#include<iostream>
#include <unordered_map>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> um1;
        vector<int> poss;
        for(int i = 0; i < s.size(); i++){
            auto itr = um1.find(s[i]);
            if(itr != um1.end()){
                for(auto ptr = um1.begin(); ptr != um1.end(); ptr++){
                    cout<< ptr->first<< "yes   ";
                }

                poss.push_back(um1.size());
                um1.clear();
                cout<< endl;
            }
            um1[s[i]] = i;
            
        }
        poss.push_back(um1.size());

        return *max_element(poss.begin(), poss.end());
    }
};

int main(){
    Solution s1;
    cout << s1.lengthOfLongestSubstring("abcdeff");
}