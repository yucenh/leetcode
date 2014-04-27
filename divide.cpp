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
    int divide(int dividend, int divisor) {
        long long ans = 0 , res = 0;
        long long f = 0;
        if (dividend == 0) return 0;
        if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0))
            divisor = -divisor, f = 1;
        int i, j;
        for(i = 0; i <= 31; i++){
            for(j = 32; j > 0; j++){
                long long t1 = (divisor<<j), t2 = (divisor<<(j-1));
                if (dividend > t1+res && dividend <= t2+res){
                    res +=t2;
                    break;
                }
            }
            ans += (1<<(j-1));
        }    
        
        if (f) ans = -ans;
        return ans;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}