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
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        vector<int> snake;
        if (matrix.size() == 0) return snake;
        int lx = 0, ly = 0, rx = matrix.size(), ry = matrix[0].size();
        int i, j, n = rx * ry, cnt = 0;
		

        while(1){
            for(i = ly; i < ry; i++){
                snake.push_back(matrix[lx][i]);
                cnt++;
            }
            lx++;

            if(cnt == n) break;
            for(i = lx; i < rx; i++){
                snake.push_back(matrix[i][ry-1]);
                cnt++;
            }
            ry--;
            if(cnt == n) break;
            
            for(i = ry-1; i >= ly; i--){
                snake.push_back(matrix[rx-1][i]);
                cnt++;
            }
            rx--;
            if(cnt == n) break;
            
            for(i = rx-1; i >= lx; i--){
                snake.push_back(matrix[i][ly]);
                cnt++;
            }
            ly++;
            
            if(cnt == n) break;
        }
        return snake;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}