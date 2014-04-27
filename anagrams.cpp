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
    vector<string> anagrams(vector<string> &strs) {
        vector<string> dup;
        if (strs.size() ==  0 || strs.size() == 1) return dup;
        map<string, int> M;
        
        map<string, int> :: iterator it;
        int i, j;
        for(i = 0; i < strs.size(); i++) {
            string t = strs[i];
            sort(t.begin(),t.end());
            dup.push_back(t);
            M[dup[i]]++;
        }
        vector<string> s;
        vector<string> ret;
        for(it = M.begin(); it != M.end(); it++){
            if (it->second == 1){
                continue;
            }
            else{
                s.push_back(it->first);
            }
        }
        for(j = 0; j < s.size(); j++){
            for(i = 0; i < strs.size(); i++){
                if (dup[i] == s[j]){
                    ret.push_back(strs[i]);
                }
            }
        }
        return ret;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}