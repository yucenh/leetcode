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
    int numTrees(int n) {
        int dp[50];
        memset(dp, 0, sizeof dp);
        dp[0] = dp[1] = 1;
        dp[2] = 2;
        int i, j;
        for(i = 3; i < 50; i++){
            for(j = 0; j <= i-1; j++){
                dp[i] += dp[j] * dp[i-j-1];
            }
        }
        return dp[n];
    }
};

int main(int argc, char *argv[]) {
	cout << numTrees(3);	
	return 0;
}