#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int numOfCol = 0;

        for(int col = 0; col < strs[0].size(); col++) {
            for(int row = 1; row < strs.size(); row++) {
                if(!( strs[row][col] >= strs[row-1][col]) ) {
                    numOfCol++;
                    break;
                }
            }
        }

        return numOfCol;
    }
};

int main()
{
    Solution s1;
    vector<string> strs =  {"cba","daf","ghi"};
    cout<< s1.minDeletionSize(strs);
    return 0;
}


/*int minDeletionSize(vector<string>& strs) {
        int numOfCol = 0;
        char lastChar;


        for(int col = 0; col < strs[0].size(); col++) {
            lastChar = strs[0][col];
            for(int row = 1; row < strs.size(); row++) {
                if(!( strs[row][col] >= lastChar) ) {
                    cout<<"caught it: '" << lastChar << "'"; ;
                    numOfCol++;
                    break;
                }
                lastChar = strs[row][col];
            }
        }

        return numOfCol;
    }*/