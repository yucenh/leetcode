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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int len1 = 0, len2 = 0;
        ListNode *x, *p, *q, *z;
        p = l1;
        do{
            len1++;
            p = p->next;
        }while(p!=NULL);
        p = l2;
        do{
            len2++;
            p = p->next;
        }while(p!=NULL);

        if (len1 > len2){
            z = x = p = l1;
            q = l2;
        }
        else{
            z =  x = p = l2;
            q = l1;
        }

        int flag = 0;
        do{
            p->val = flag + p->val + q->val;
            flag = p->val/10;
            p->val = p->val % 10;
            if (p->next != NULL) z = z->next;
            p = p->next;
            q = q->next;
        }while(q != NULL);

        while (flag != 0){
            if (p != NULL){
                p->val = p->val + flag;
                flag = p->val / 10;
                p->val = p->val % 10;
                if (p->next != NULL) z = z->next;
                p = p->next;
            }
            else{
                ListNode *y = new ListNode(flag);
                z->next = y;
                break;
            }
        }
        return x;
    }
};
int main(int argc, char *argv[]) {
	
	return 0;
}