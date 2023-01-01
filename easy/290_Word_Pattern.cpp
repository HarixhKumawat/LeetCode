//01-01-2023

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int wordsIndex = 0;
        vector<string> words;
        string word;
        unordered_map<char, string> mapp;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == ' '){
                words.push_back(word);
                cout<< word << endl;
                word.clear();
                continue;
            }
            
            word += s[i];
        }
        words.push_back(word);
        cout << word << endl;

        if(words.size() != pattern.size()){
            cout<< "pattern and words are not in same amount";
            return 0;
        }
        for (int i = 0; i < pattern.size(); i++) {
            if(mapp.find(pattern[i]) == mapp.end()){
                for(auto itr: mapp){
                    if(words[i] == itr.second){
                        cout<< "tries to take over already existing value "<< pattern[i] << " != " << words[i] << endl; 
                        return 0;
                    } else {
                        continue;
                    }
                }
                cout<< pattern[i] << " " << words[i] << endl;
                mapp[pattern[i]] = words[i];
            } else {
                if(mapp.find(pattern[i])->second == words[i]){
                    cout<< pattern[i] << " " << words[i] << endl;
                    continue;
                } else {
                    cout<< "did not match "<< pattern[i] << " != " << words[i] << endl; 
                    return 0;
                }
            }
        }
        if(mapp.find('a') != mapp.end()){
            string ap = mapp.find('a')->second; 
            cout<< ap;
        }
        
        return 1;
    }
};

int main(){
    Solution s1;
    bool b1;
    b1 = s1.wordPattern("abba", "dog dog dog");
    cout<< endl;
    cout<< "The answer is: " << b1;
}