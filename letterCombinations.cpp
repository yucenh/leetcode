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
    string input;
    string dic[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> v;
    
    void dfs(string s, int k){
        if (k == input.size() ){
            v.push_back(s);
            return;
        }
        int i;
        int t = k + 1;
        for (i = 0; i < dic[input[k]-'0'].size(); i++){
            dfs(s + dic[input[k]-'0'][i], t);
        }
    }

    vector<string> letterCombinations(string digits) {
        input = digits;
        v.clear();
        dfs("",0);
        return v;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}