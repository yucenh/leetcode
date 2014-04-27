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
	int res[20000];
    void solve(int A[], int n, int id) {
        int i, j, current = 0, left = 0, right = 0;
        // find first non-zero pos
        for(i = 0; i < n; i++)  if (A[i] != 0) break;
        left = i;
        while(i < n){
			//cout << left << endl;
            int f = 0;
            for(; i < n; i++){
                // find pos bigger than left
                if (A[i] >= A[left]){
                    if (i > left + 1){
                        f = 1;
                        right = i;
						 break;
                    }
                    else{
                        left = i;
                    }
                }   
            }
            if (f){
                for(j = left+1; j < right; j++){
					if (id == 1) res[j] = max(res[j], min(A[left],A[right]) - A[j]);
                	else res[n-j-1] = max(res[n-j-1], min(A[left],A[right]) - A[j]);
				}
            }
			left = right;
        }
    }

	int trap(int A[], int n){
		memset(res, 0, sizeof res);
		int B[n+1], j = 0;
		for (int i = n-1; i >= 0; i--) B[j++] = A[i];
		int ans = 0;
		solve(A, n, 1);
		solve(B, n, 0);
		for (int i = 0; i < n; i++) {
		//	cout << i << ": " <<  res[i] << endl;
			ans += res[i];
		}
		return ans;	
	}
};

int main(int argc, char *argv[]) {
	
	return 0;
}