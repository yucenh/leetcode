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
    ListNode *deleteDuplicates(ListNode *head){
    	ListNode *p1, *p2;
    	p1 = head;
    	p2 = head;
    	if (head == NULL) {
    		return head;
    	}
    	if (p2->next == NULL) {
    		return head;
    	}
    	else {
    		p2 = p2->next;
    	}
    	while (p1 != NULL && p2 != NULL) {
    	//	cout << p1->val << " " << p2->val << endl;
    		if (p1->val == p2->val) {
    			p1->next = p2->next;
    			ListNode *tmp = p2;
    			p2 = p2->next;
    			delete(tmp);
    		}
    		else {
    			p1 = p1->next;
    			p2 = p2->next;
    		}
    	}
    	return head;
    }
};


int main(int argc, char *argv[]) {
	
	return 0;
}