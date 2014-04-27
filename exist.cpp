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
    int f = 0;
    string w;
    vector<vector<char> > b;
    int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
	bool vis[1005][1005];
    void dfs(int x, int y, int id){
        if (id == w.size() - 1){
            if ( b[x][y] == w[id] ) f = 1;
            return;
        }
        int i, j;
        for (i = 0; i < 4; i++){
//			cout << "x: " << x + dir[i][0] << " y: " << y + dir[i][1] << endl;
			if (x + dir[i][0] >= 0 && x + dir[i][0] < b.size() && y + dir[i][1] >= 0 && y + dir[i][1] < b[0].size()){
	            if (b[x + dir[i][0]][y + dir[i][1]] == w[id+1] && vis[x + dir[i][0]][y + dir[i][1]] == 0){
//					cout << "x: " << x + dir[i][0] << " y: " << y + dir[i][1] << endl;
//	            	cout << "w: " << w[id+1] << " " << endl;
					vis[x + dir[i][0]][y + dir[i][1]] = 1;
				    dfs(x + dir[i][0], y + dir[i][1], id+1);
					if (f) return;
					vis[x + dir[i][0]][y + dir[i][1]] = 0;
				}
			}
        }
		return;
    }

    bool exist(vector<vector<char> > &board, string word) {
        int i, j;
        b = board;
        w = word;
        f = 0;
		
        for(i = 0; i < board.size(); i++){
            for(j = 0; j < board[i].size(); j++){
                if (word[0] == board[i][j]){
					memset(vis, 0, sizeof vis);
					vis[i][j] = 1;
                    dfs(i,j,0);
					if (f)  return f;
                }
            }
        }
        return f;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}