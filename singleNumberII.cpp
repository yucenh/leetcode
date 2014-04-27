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
    int singleNumber(int A[], int n) {
        int i, j;
        int ans = 0;
        for (j = 0; j < 32; j++){
            int cnt = 0;
            for(i = 0; i < n; i++){
                if (A[i] & 1) cnt++;
                A[i] >>= 1;
            }
            cnt %= 3;
            ans += cnt << j;
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}