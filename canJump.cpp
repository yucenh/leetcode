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
    bool canJump(int A[], int n) {
        int i, j;
		int canreach = 0;
		for (i = 0; i < n; i++) {
			if (canreach >= i) {
				canreach = max(canreach, i + A[i]);
			}
		}
		return canreach >= n - 1;
    }
};

int main(int argc, char *argv[]) {
	int a[50] = {2,3,1,1,4};	
 	cout << canJump(a,5);

	return 0;
}