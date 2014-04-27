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
    bool bins(vector<int> v, int target){
        int l = 0, r = v.size()-1, m;
        while(l <= r){
            m = (l+r) / 2;
            if (v[m] > target){
                r = m - 1;
            }
            else if (v[m] < target){
                l = m + 1;
            }
            else return true;
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        for(int i = 0; i < matrix.size(); i++){
            vector<int> v = matrix[i];
            if (bins(v,target)) return true;
        }    
        return false;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}