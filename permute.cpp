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
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > ret;
        sort(num.begin(),num.end());
        do{
            vector<int> v;
            for(int i = 0; i < num.size(); i++){
                v.push_back(num[i]);
            }
            ret.push_back(v);
        }while(next_permutation(num.begin(),num.end()));
        return ret;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}