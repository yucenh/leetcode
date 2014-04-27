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
        for (int i = pos; i < c.size(); i++){
            r.push_back(c[i]);
            dfs(target-c[i], c, a, r, i);
            r.pop_back();
        }
    }
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        vector<vector<int> > ans;
		sort(candidates.begin(), candidates.end());
        vector<int> v;
        dfs(target, candidates, ans, v, 0);
        return ans;
    }

};

int main(int argc, char *argv[]) {
	int a[29] = {21,33,35,34,25,40,41,36,39,28,37,27,23,42,44,49,38,48,24,22,29,30,20,47,45,32,26,46,43};
	vector<int> v;
	for (int i = 0; i < 29; i++) {
		v.push_back(a[i]);
	}
	int n = 62;
	
	vector<vector<int> > ans = combinationSum(v,n);
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j] << " " ;
		}
		cout << endl;
	}
	return 0;
}