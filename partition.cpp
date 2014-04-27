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
    ListNode *partition(ListNode *head, int x) {
        ListNode *p, *ptr, *res;
        res = ptr = NULL;
        p = head;
        while(p != NULL){
            if (p->val < x){
                if (res == NULL){
                    res = new ListNode(p->val);
                    ptr = res;
                }
                else{
                    res->next = new ListNode(p->val);
                    res = res->next;
                }
            }
            p = p->next;
        }
        p = head;
        while(p != NULL){
            if (p->val >= x){
                if (res == NULL){
                    res = new ListNode(p->val);
                    ptr = res;
                }
                else{
                    res->next = new ListNode(p->val);
                    res = res->next;
                }
            }
            p = p->next;
        }
        return ptr;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}