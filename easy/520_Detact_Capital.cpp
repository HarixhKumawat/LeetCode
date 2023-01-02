//02-01-2023

#include <iostream>
#include <string>
#include <regex>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        regex _ra ("[a-z]*");
        regex _Ra ("[A-Z]{1}[a-z]*");
        regex _RA ("[A-Z]{1}[A-Z]*");
        
        if(regex_match(word, _ra) || regex_match(word, _Ra) || regex_match(word, _RA)){
            return true;
        } else {
            return false;
        }

    }
};

int main()
{
    Solution s1;
    cout<< s1.detectCapitalUse("USA");
    return 0;
}

/*
    bool detectCapitalUse(string word) {
        bool f1;
        regex _ra ("[a-z]*");
        regex _RA ("[A-Z]*");
        if( regex_match ( word.substr(0,1), _RA ) ){
            cout<< "fisrt is capital";
            f1 = true;
        }  else {
            cout<< "fisrt is small case";
           f1 = false;
        }
        cout<< endl;
        word.erase(word.begin());
        
        if(f1){
            if ( regex_match ( word.begin(), word.end(), _ra ) ) {
                cout<< "one case" << endl;
                return true;
            } else if ( regex_match ( word.begin(), word.end(), _RA ) ) {
                cout<< "two case" << endl;
                return true;
            } else {
                cout<< "three case" << endl;
                return false;
            }
        } else {
            if ( regex_match ( word.begin(), word.end(), _ra ) ) {
                cout<< "four case" << endl;
                return true;
            } else {
                cout<< "five case" << endl;
                return false;
            }
        }

    }
*/