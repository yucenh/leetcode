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
    // How to implement O(1) memory ?
    void rotate(vector<vector<int> > &matrix) {
        vector<vector<int> > tmpm;
        int x = matrix.size(), y = matrix[0].size(), i, j;
        for(i = 0; i < y; i++){
            vector<int> v;
            for(j = x-1; j >= 0; j--){
                v.push_back(matrix[j][i]);
            }
            tmpm.push_back(v);
        }
        matrix = tmpm;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}