#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};



class Solution {
public:
    ListNode* sum = new ListNode();
    ListNode* p = new ListNode();
    int fisrtTimeQ = -1;
    vector<int> countLL(ListNode* tempL){
        vector<int> arr;
        while (tempL != NULL){
            arr.push_back(tempL->val);
            tempL = tempL->next;
        }
        return arr;
    }

    void addEnd(int val){
        if(fisrtTimeQ == -1){
            sum->val = val;
            sum->next = NULL;
            p = sum;
            fisrtTimeQ++; 
            cout<< "+++addedttt" << p->val<< "+++";
        } else {
            ListNode* temp = new ListNode();
            temp->val = val;
            temp->next = NULL;
            p->next = temp;
            p = p->next;
            cout<< "+++added" << p->val<<"+++";
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> ll1, ll2;
        int i = 0, j = 0, add = 0, ra = 0;
        ll1 = countLL(l1);
        ll2 = countLL(l2);

        //reverse(ll1.begin(), ll1.end());
        //reverse(ll2.begin(), ll2.end());

        while(i != -1 || j != -1){
            if(i == -1){
                add = ll2[j]+ ra;
                addEnd(add%10);
                ra = add/10;
                j++;
            } else if(j == -1) {
                add = ll1[i]+ ra;
                addEnd(add%10);
                ra = add/10;
                i++;
            } else {
                add = ll1[i] + ll2[j] + ra;
                addEnd(add%10);
                ra = add/10;
                i++;
                j++;
            }
            cout<< "add: " << add << "  ra: " << ra<< endl;
            cout<< endl;
            
            if(i == ll1.size()) {
                cout<< "yup got it";
                i = -1;
            }
            if(j == ll2.size()) {
                cout<< "yup got it";
                j = -1; 
            }
        }
        if(ra != 0){
            addEnd(ra);
        } 
        return sum;
    }
};

/* class Solution {
public:
    unsigned long long convertI(ListNode* tempL){
        unsigned long long tempL1 = 0, tempMul = 1;
        ListNode* p = new ListNode();
        p = tempL;
        while (p != NULL){
            if(p->val != 0){
                tempL1 = tempL1 + (p->val*tempMul);
            }
            tempMul *= 10;
            cout<< tempMul << endl;
            p = p->next;
        }
        return tempL1;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        unsigned long long tempL1, tempL2, tempSum;
        int  val;
        
        tempL1 = convertI(l1);
        tempL2 = convertI(l2);


        tempSum = tempL1 + tempL2;
        if(tempSum == 0){
            val = 0;
        } else {
            val = -1;
        }
        ListNode* sum = new ListNode(val);
        ListNode* p = new ListNode();

        while(tempSum != 0){
            int tempI = tempSum % 10;
            tempSum /= 10;

            cout<< "wooah";

            if(sum->val == -1){
                sum->val = tempI;
                sum->next = NULL;
                p = sum;
                cout<< "  based: " << p->val;
            } else {
                ListNode* temp = new ListNode();
                temp->val = tempI;
                temp->next = NULL;
                p->next = temp;
                
                p = p->next;
                cout<< "  then: " << p->val;
            }
        }

        return sum;
    }
}; */

/* class Solution {
public:
    int convertI(ListNode* tempL){
        int tempL1 = 0, tempMul = 1;
        ListNode* p = new ListNode();
        p = tempL;
        while (p != NULL){
            tempL1 = tempL1 + (p->val*tempMul);
            tempMul *= 10;
            p = p->next;
        }
        return tempL1;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int tempL1, tempL2, tempSum;
        
        tempL1 = convertI(l1);
        tempL2 = convertI(l2);


        tempSum = tempL1 + tempL2;
        ListNode* sum = new ListNode();
        ListNode* p = new ListNode();

        while(tempSum != 0){
            int tempI = tempSum % 10;
            tempSum /= 10;

            if(sum->val == NULL){
                sum->val = tempI;
                sum->next = NULL;
                p = sum;
            } else {
                ListNode* temp = new ListNode();
                temp->val = tempI;
                temp->next = NULL;
                p->next = temp;
                
                p = p->next;
            }
        }

        return sum;
    }
}; */
