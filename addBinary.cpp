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
    string addBinary(string a, string b) {
        string res = "";
        int al = a.size(), bl = b.size();
        if (al > bl){
            while(a.size() != b.size()){
                b = "0"+b;
            }
        }
        else if (bl > al){
            while(a.size() != b.size()){
                a = "0" + a;
            }
        }
        int flag = 0, i, l = a.size();
        for(i = a.size() - 1; i >= 0; i--){
		    int t = a[i] - '0' + b[i] - '0' + flag;
            if(t >= 2 ){
                if (t == 2) res =  "0" + res;
                if (t == 3) res =  "1" + res;
                flag = 1;
            }
            else{
                if (t == 1) res = "1" + res;
                if (t == 0) res = "0" + res;
                flag = 0;
            }
        }
        if (flag == 1) res = "1" + res;
        return res;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}