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
    // Maximum Subarray 
    int maxSubArray(int A[], int n) {
        int i;
        int max = A[0], sum = A[0];
        for(i = 1; i < n; i++){
            if (sum < 0) sum = A[i];
            else sum += A[i];
            if (sum > max) max = sum;
        }
        return max;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}