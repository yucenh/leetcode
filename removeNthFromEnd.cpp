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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
		ListNode *p1, *p2;
		p1 = p2 = head;
		int cnt = 0;
		if (head == NULL) {
			return head;
		}
		while (p2 != NULL) {
			cnt++;
			p2 = p2->next;
		}       
		if (cnt - n == 0) {
			p1 = head;
			head = head->next;
			delete(p1);
			return head;
		}
		int k = cnt - n - 1;
		
		while (k--) {
			p1 = p1->next;
		}
		p2 = p1->next;
		p1->next = p1->next->next;
		delete(p2);
		return head;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}