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
    bool isValidSudoku(vector<vector<char> > &board) {
        int i, j;

        for(i = 0; i < 9; i++){
            int hash[1000] = {0};
            for(j = 0; j < 9; j++){
                if (board[i][j] >= '0' && board[i][j] <= '9')
                hash[board[i][j]-'0']++;
            }
            for(j = 1; j <= 9; j++){
                if (hash[j]>1)
                    return false;
            }
        }
        
        for(i = 0; i < 9; i++){
            int hash[1000] = {0};
            for(j = 0; j < 9; j++){
                if (board[j][i] >= '0' && board[j][i] <= '9')
                {
					hash[board[j][i]-'0']++;
            	}
			}
            for(j = 1; j <= 9; j++){
                if (hash[j]>1)
					return false;
            }

        }    
        {
            int hash[1000] = {0};
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    if (board[i][j] >= '0' && board[i][j] <= '9')
                    hash[board[i][j]-'0']++;
                }
            }
            for(j = 1; j <= 9; j++){
                if (hash[j]>1)
                    return false;
            }
        }
        {
            int hash[1000] = {0};
            for(i = 0; i < 3; i++){
                for(j = 3; j < 6; j++){
                    if (board[i][j] >= '0' && board[i][j] <= '9')
                    hash[board[i][j]-'0']++;
                }
            }
            for(j = 1; j <= 9; j++){
                if (hash[j]>1)
                    return false;
            }
        }
        {
            int hash[1000] = {0};
            for(i = 0; i < 3; i++){
                for(j = 6; j < 9; j++){
                    if (board[i][j] >= '0' && board[i][j] <= '9')
                    hash[board[i][j]-'0']++;
                }
            }
            for(j = 1; j <= 9; j++){
                if (hash[j]>1)
                    return false;
            }
        }                

        {
            int hash[1000] = {0};
            for(i = 3; i < 6; i++){
                for(j = 0; j < 3; j++){
                    if (board[i][j] >= '0' && board[i][j] <= '9')
                    hash[board[i][j]-'0']++;
                }
            }
            for(j = 1; j <= 9; j++){
                if (hash[j]>1)
                    return false;
            }
        }
        {
            int hash[1000] = {0};
            for(i = 3; i < 6; i++){
                for(j = 3; j < 6; j++){
                    if (board[i][j] >= '0' && board[i][j] <= '9')
                    hash[board[i][j]-'0']++;
                }
            }
            for(j = 1; j <= 9; j++){
                if (hash[j]>1)
                    return false;
            }
        }
        {
            int hash[1000] = {0};
            for(i = 3; i < 6; i++){
                for(j = 6; j < 9; j++){
                    if (board[i][j] >= '0' && board[i][j] <= '9')
                    hash[board[i][j]-'0']++;
                }
            }
            for(j = 1; j <= 9; j++){
                if (hash[j]>1)
                    return false;
            }
        }            
        
        
        {
            int hash[1000] = {0};
            for(i = 6; i < 9; i++){
                for(j = 0; j < 3; j++){
                    if (board[i][j] >= '0' && board[i][j] <= '9')
                    hash[board[i][j]-'0']++;
                }
            }
            for(j = 1; j <= 9; j++){
                if (hash[j]>1)
                    return false;
            }
        }
        {
            int hash[1000] = {0};
            for(i = 6; i < 9; i++){
                for(j = 3; j < 6; j++){
                    if (board[i][j] >= '0' && board[i][j] <= '9')
                    hash[board[i][j]-'0']++;
                }
            }
            for(j = 1; j <= 9; j++){
                if (hash[j]>1)
                    return false;
            }
        }
        {
            int hash[1000] = {0};
            for(i = 6; i < 9; i++){
                for(j = 6; j < 9; j++){
                    if (board[i][j] >= '0' && board[i][j] <= '9')
                    hash[board[i][j]-'0']++;
                }
            }
            for(j = 1; j <= 9; j++){
                if (hash[j]>1)
                    return false;
            }
        }    
        
        return true;
    }
};


int main(int argc, char *argv[]) {
	
	return 0;
}