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
    int bins(int *a, int l, int r, int target){
        if(l <= r) {
			int m = (l+r) / 2;
			if (a[m] == target) return m;
	        else if (a[m] < target) return bins(a, m+1, r, target);
	        else return bins(a, l, m-1, target);
        }
		else return -1;
    }

    int search(int A[], int n, int target) {
		if (n < 10) {
			for (int i = 0; i < n; i++) {
				if (A[i] == target) {
					return i;
				}
			}
			return -1;
		}
        int l = 1, r = n-1, m = 0, m2 = 0;
        while(l < r){
            m = (l + r) / 2;
			if (m2 == m) break;
			m2 = m;
            if (A[m] < A[0] && A[m] < A[m-1]) break;
			else if (A[m] < A[0] && A[m] > A[m-1]) r = m ;
            else if (A[m] > A[0]) l = m ;
        }

		int seppos = m;
		int ans = -1;
		ans = bins(A, 0, seppos-1, target);
		if (ans == -1) ans = bins(A, seppos, n-1, target);
 		return ans;  
	}
};

int main(int argc, char *argv[]) {
	
	return 0;
}