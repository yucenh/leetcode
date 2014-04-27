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
    int bins(int v[], int beg, int end, int target){
        int l = beg, r = end, m;
        while(l <= r){
            m = (l+r) / 2;	
            if (v[m] > target) r = m - 1;
            else if (v[m] < target) l = m + 1;
            else return m;
        }
        return -1;
    }

    vector<int> searchRange(int A[], int n, int target) {
        vector<int> ans;

        if(bins(A, 0, n-1, target) == -1) {
            ans.push_back(-1);
            ans.push_back(-1);
			return ans;        
		}
        
        int l = 0, r = n-1, m, left, right;
        while(bins(A, l, r, target) != -1){
            r = bins(A, l, r, target)-1;
            left = r + 1;
        }
        
        l = 0, r = n-1;
        while(bins(A, l, r, target) != -1){
            l = bins(A, l, r, target)+1;
            right = l - 1;
        }
        
        ans.push_back(left);
        ans.push_back(right);
        
        return ans;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}