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

class Solution {
public:
    int removeDuplicatesII(int A[], int n) {
        if (n == 0 ) return 0;
        int cnt = 1;
        int now = A[0];
        int i, j = 0;
		
		for (i = 1; i < n; i++) {
			if (now == A[i]) {
				cnt++;
			}
			else {
				if (cnt >= 2) {
					A[j] = A[i-1];
					A[j+1] = A[i-1];
					j += 2;
				}	
				else {
					A[j] = A[i-1];
					j += 1;
				}
				now = A[i];
				cnt = 1;
			}
		}
		
		if (cnt >= 2) {
			A[j] = A[i-1];
			A[j+1] = A[i-1];
			j += 2;
		}
		else {
			A[j] = A[i-1];
			j += 1;	
		}
        return j;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}