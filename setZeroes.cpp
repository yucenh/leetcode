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
    void setZeroes(vector<vector<int> > &matrix) {
        vector<int> x, y;
        int i, j, k;
        for(i = 0; i < matrix.size(); i++){
            for(j = 0; j < matrix[i].size(); j++){
                if (matrix[i][j] == 0){
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }
        
        for(i = 0; i < x.size(); i++){
            for(j = 0; j < matrix[x[i]].size(); j++){
                matrix[x[i]][j] = 0;
            }
        }

        for(i = 0; i < y.size(); i++){
            for(j = 0; j < matrix.size(); j++){
                matrix[j][y[i]] = 0;
            }
        }
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}