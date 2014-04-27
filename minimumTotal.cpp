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
    int MIN(int a, int b){
        return a<b? a:b;
    }
    int minimumTotal(vector<vector<int> > &triangle) {
        int i, j;
        for(i = triangle.size()-2; i >= 0; i--){
            for(j = 0; j < triangle[i].size(); j++){
                triangle[i][j] += MIN(triangle[i+1][j], triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}