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
    ListNode *rotateRight(ListNode *head, int k){
    	int cnt = 0;
    	ListNode *p = head;
    	if (head == NULL || k == 0) {
    		return head;
    	}
    	while (p != NULL) {
    		cnt++;
    		p = p->next;
    	}
    	if (cnt <= k) {
    		return head;
    	}
    
    	p = head;
    	int t = 0;
    	while (p != NULL) {
    		t++;
    		if ( t == cnt - k) {
    			break;
    		}
    		p = p->next;
    	}
    	
    	ListNode *res, *q;
    	res = p->next;
    	q = p->next;
    	p->next = NULL;
    	while(1){
    		if (q->next != NULL) {
    			q = q->next;
    		}
    		else {
    			q->next = head;
    			break;
    		}
    	}
    	return res;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}