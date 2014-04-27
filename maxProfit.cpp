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
    int maxProfit(vector<int> &prices) {
        int i, a[100000];
        for(i = 1; i < prices.size(); i++){
            a[i] = prices[i] - prices[i-1];
        }
        int len = prices.size();
        // Maximum subarray problem
        int max = 0, tmpmax = 0;
        for(i = 1; i < len; i++){
            if (tmpmax < 0){
                tmpmax = a[i];
            }
            else tmpmax += a[i];
            if (tmpmax > max)
                max = tmpmax;
        }
        return max;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}