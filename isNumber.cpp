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

    char ret[1000];
    void trim(char *s){
		int i, st, ed;
		for (i = 0; i < strlen(s); i++) {
			if (s[i] != ' ') {
				st = i;
				break;
			}
		}
		for (i = strlen(s) - 1; i >= 0; i--) {
			if (s[i] != ' ') {
				ed = i;
				break;
			}
		}
		int j = 0;
		if (s[st] == '-' || s[st] == '+') st++;
		for (i = st; i <= ed; i++) {
			s[j++] = s[i];
		}
		s[j] = '\0';
    }

    bool isNumber(const char *s) {
		strcpy(ret, s);
        trim(ret);
        // . > 1   e > 1 otherc > 0  return false;
        int i, dot = 0, e = 0, otherc = 0, num = 0, sign = 0;
        for(i = 0; i < strlen(ret); i++){
            if (ret[i] == '.') dot++;
            else if (ret[i] == 'e') e++;
            else if (ret[i] == '+' || ret[i] == '-') sign++;
	 		else if (ret[i] < '0' || ret[i] > '9') otherc++;
			else num++;
        }

        if (dot > 1 || e > 1 || otherc > 0 || sign > 1 || num == 0) return false;
		if (sign == 1 && e == 0) return false;
		if ((ret[strlen(ret)-1] < '0' || ret[strlen(ret)-1] > '9') && ret[strlen(ret)-1] != '.') return false;
		if (dot == 1){
            int dotpos, epos;
            for(i = 0; i < strlen(ret); i++){
                if (ret[i] == '.') {
                    dotpos = i;
                    break;
                }
                else if (ret[i] < '0' || ret[i] > '9') return false;
            }
			if (e == 0)  return true;
			i++;
			
            for(; i < strlen(ret); i++){
                if (ret[i] == 'e'){
                    epos = i;
                    break;
                }
                else if (ret[i] < '0' || ret[i] > '9') return false;
            }		
			if (dotpos == 0) {
				if (epos != 1 && epos < strlen(ret) - 1) return true;
				else return false;
			}
			else {
				if (epos == strlen(ret) - 2 && epos != 0) {
					if (ret[epos+1] == '+' || ret[epos+1] == '-') return false;
					else return true;
				}
				else {
					if (epos > 0 && epos < strlen(ret) - 1) return true;
					else return false;
				}
			}
        }
		else if (e == 1){
			int epos;
			for (i = 0; i < strlen(ret); i++) {
				if (ret[i] == 'e') {
					epos = i;
					break;
				}
			}
			if( (ret[epos-1] < '0' || ret[epos-1] >'9') && ret[epos-1] != '.') {
				return false;
			}
			if (epos == strlen(ret) - 2 && epos != 0 ) {
				if (ret[epos+1] == '+' || ret[epos+1] == '-') return false;
				else return true;
			}
			else {
				if (epos > 0 && epos < strlen(ret) - 1) return true;
				else return false;
			}
		}
        return true;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}