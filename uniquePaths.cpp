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
    int uniquePaths(int m, int n) {
        int i, j;
        int dp[105][105];
        memset(dp, 0, sizeof (dp));
        for (i = 1; i <= 100; i++) dp[1][i] = 1;
        
        for (i = 2; i <= 100; i++){
            for (j = 1; j <= 100; j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m][n];
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}