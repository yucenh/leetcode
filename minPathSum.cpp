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
    int minPathSum(vector<vector<int> > &grid) {
        int i, j;
        for (i = 0; i < grid.size(); i++){
            for (j = 0; j < grid[0].size(); j++){
                if (i == 0 && j == 0) grid[i][j] = grid[i][j];
                else if (i > 0 && j > 0) grid[i][j] += min(grid[i-1][j],grid[i][j-1]);
                else if (i > 0 && j == 0) grid[i][j] += grid[i-1][j];
                else grid[i][j] += grid[i][j-1];
            }
        }

        return grid[grid.size()-1][grid[0].size()-1];
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}