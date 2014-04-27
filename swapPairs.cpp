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
    ListNode *swapPairs(ListNode *head) {
        ListNode *p1, *p2, *q;
        p1 = p2 = q = head;
        if (q == NULL){
            return head;
        }
        if (q->next == NULL){
            return head;
        }
        q = q->next;
        p1 = q;
        head = q;
        p2->next = q->next;
        q->next = p2;

        while(p2->next != NULL){
    		ListNode *tmphead = p2;
	        p2 = p2->next;
            p1 = p1->next->next;
            q = q->next->next;
	

            if (q->next == NULL) break;
            else{
                q = q->next;
                p1 = q;
				tmphead->next  = q;
                p2->next = q->next;
                q->next = p2;
            }
        }
        return head;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}