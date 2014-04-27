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
    string add(string num1, string num2){
		int i;
        string ret = "";
        while (num1.size() < num2.size()){
            num1 = "0" + num1;
        }
        while (num1.size() > num2.size()){
            num2 = "0" + num2;
        }

        int flag = 0;
        for(i = num1.size()-1; i >= 0; i--){
            int t = num1[i]+num2[i]-2*'0'+flag;
            if (t >= 10){
                ret = (char)(t%10+'0')+ret;
                flag = t / 10;
            }
            else{
                ret = (char)(t+'0') + ret;
                flag = 0;
            }
        }
        if (flag != 0) ret = (char)(flag + '0') + ret;
        return ret;
    }
    string trim(string s){
        string ret = "";
        int i;
        for(i = 0; i < s.size()-1; i++){
            if (s[i] != '0')
                break;
        }
        for(; i < s.size(); i++){
            ret += s[i];
        }
        return ret;
    }
    string multiply(string num1, string num2) {
        string ans = "0";
        int i, j;
        int zero = 0;
        for(i = num2.size()-1; i >= 0; i--){
            int flag = 0;
            string tmpans = "";
            for (j = num1.size()-1; j >= 0; j--){
                int t = (num1[j]-'0')*(num2[i]-'0')+flag;
                tmpans =  (char)(t%10+'0')+tmpans;
                flag = t / 10;
            }
			if (flag != 0) tmpans = (char)(flag + '0') + tmpans;
            for(j = 0; j < zero; j++){
                tmpans += "0";
            }
            zero++;
            ans = add(ans,tmpans);
        }
		return trim(ans);
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}