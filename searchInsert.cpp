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
    int searchInsert(int A[], int n, int target) {
        int i;
        if (target <= A[i]) return 0;
        for(i = 1; i < n; i++){
            if (target > A[i-1] && target <= A[i])
                return i;
        }
        return n;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}