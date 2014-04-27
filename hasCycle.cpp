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
    bool hasCycle(ListNode *head) {
        ListNode *p1, *p2;
        p1 = head;
        p2 = head;
        while(p1 != NULL && p2 != NULL){
            p1 = p1->next;
            p2 = p2->next;
            if (p2 != NULL){
                p2 = p2->next;
            }
            else{
                return false;
            }
            if (p1 == p2) return true;
        }
        return false;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}