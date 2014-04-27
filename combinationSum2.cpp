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
    void dfs(int target, vector<int> &c, vector<vector<int> > &a, vector<int> &r, int pos){
        if (target < 0) return;
        if (target == 0){
            a.push_back(r);
            return;
        }
        int previous = -1;
        for (int i = pos; i < c.size(); i++){
            if (previous == c[i]) continue;    
            previous = c[i];
            r.push_back(c[i]);
            dfs(target-c[i], c, a, r, i+1);
            r.pop_back();
        }
    }
    vector<vector<int> > combinationSum2(vector<int> &candidates, int target) {
        vector<vector<int> > ans;
		sort(candidates.begin(), candidates.end());
        vector<int> v;
        dfs(target, candidates, ans, v, 0);
        return ans;
    }

};

int main(int argc, char *argv[]) {
	
	return 0;
}