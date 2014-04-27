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
    int firstMissingPositive(int A[], int n) {
        int h[n+2];
        memset(h,0,sizeof h);
        int i;
        for(i = 0; i < n; i++)
            if (A[i] > 0 && A[i] <= n)
                h[A[i]] = 1;
        for(i = 1; i < 1000000; i++)
            if (h[i] == 0)
                return i;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}