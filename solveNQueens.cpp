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
    int mapsize;
    int a[20][20];
    int cnt;
    vector<vector<string> > ans;
    void print(){
    	int i, j;
    	vector<string> vec;
    	for (i = 0; i < mapsize; i++) {
    	    string s = "";
    		for (j = 0; j < mapsize; j++) {
    			if (a[i][j] == 0) s += ".";
    			else s += 'Q';
    		}
    		vec.push_back(s);
    	}
    	ans.push_back(vec);
    }
    
    bool check(){
    	vector<pair<int,int> > v;
    	int i,j;
    	for (i = 0; i < mapsize; i++) {
    		for (j = 0; j < mapsize; j++) {
    			if (a[i][j] == 1) {
    				v.push_back(make_pair(i,j));
    			}
    		}
    	}
    	
    	for (i = 0; i < v.size(); i++) {
    		for (j = i + 1; j < v.size(); j++) {
    			if (v[i].first == v[j].first || v[i].second == v[j].second) {
    				return false;
    			}
    		}	
    	}
    	for (i = 0; i < v.size(); i++) {
    		for (j = i + 1; j < v.size(); j++) {
    			if (v[i].first + v[i].second == v[j].first + v[j].second) {
    				return false;
    			}
    			if (v[i].second - v[i].first == v[j].second - v[j].first) {
    				return false;
    			}
    		}
    	}
    	return true;
    }
    
    void Queen(int n){
    	for (int i = 0; i < mapsize; i++) {
    		a[n][i] = 1;
    		if (check()){
    			if (n == mapsize - 1) {
    				print();
    				cnt++;
    			}
    			else {
    				Queen(n+1);
    			}
    		}
    		a[n][i] = 0;
    	}
    }
    vector<vector<string> > solveNQueens(int n) {
        mapsize = n;
        memset(a, 0, sizeof a);
        ans.clear();
        cnt = 0;
        Queen(0);
        return ans;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}