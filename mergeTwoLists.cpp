#include <iostream>
#include <stack>
#include <queue>
#include <bitset>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <functional>
#include <utility>
#include <sstream>
#include <iomanip>
#include <ctime>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *p, *ans = NULL;
        while(l1 != NULL && l2 != NULL){
            if (l1->val > l2->val){
                if (ans == NULL) ans = new ListNode(l2->val), p = ans;
                else{
                    ans->next = new ListNode(l2->val);
                    ans = ans->next;
                }
                l2 = l2->next;
            }
            else{
                if (ans == NULL) ans = new ListNode(l1->val), p = ans;
                else{
                    ans->next = new ListNode(l1->val);
                    ans = ans->next;
                }
                l1 = l1->next;
            }
        }
		
        while(l1 != NULL){
            if (ans == NULL) ans = new ListNode(l1->val), p = ans;
            else{
                ans->next = new ListNode(l1->val);
                ans = ans->next;
            }
            l1 = l1->next;
        }
        while(l2 != NULL){
            if (ans == NULL) ans = new ListNode(l2->val), p = ans;
            else{
                ans->next = new ListNode(l2->val);
                ans = ans->next;
            }
            l2 = l2->next;            
        }
        return p;
    }

};

int main(int argc, char *argv[]) {
	
	return 0;
}