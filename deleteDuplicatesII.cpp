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
    ListNode *deleteDuplicates(ListNode *head) {
    	ListNode *p, *q;
    	ListNode *res = NULL, *add = NULL;
    	p = head;
    	q = head;
    	if (head == NULL) {
    		return head;
    	}
    	if (q->next == NULL) {
    		return head;
    	}
    	else {
    		q = q->next;
    	}
    	int cnt = 1;
    
    	while (q != NULL) {
    		if (p->val == q->val) {
    			cnt++;
    			q = q->next;
    		}
    		else {
    			if (cnt == 1) {
    				if (add == NULL) {
    					add = new ListNode(p->val);
    					res = add;
    				}
    				else {
    					add->next = new ListNode(p->val);
    					add = add->next;
    				}
    			}
    			else {
    				cnt = 1;
    			}
    			p = q;
    			q = q->next;
    			if (q == NULL) {
    				if (add == NULL) {
    					add = new ListNode(p->val);
    					res = add;
    				}
    				else {
    					add->next = new ListNode(p->val);
    					add = add->next;
    				}			
    			}
    		}
    	}
    	return res;
    }
};


int main(int argc, char *argv[]) {
	
	return 0;
}