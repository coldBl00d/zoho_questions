#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <climits>

using namespace std;
#define log(x) cout << x << endl; 
int getValue (char c){
	switch (c){
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
		case '0':
			return 0;
	}
}

int convert (string s){
	int length, result;
	char cur, peek;
	int i, cur_v, peek_v;

	length = s.length();
	i=-1;
	result =0;

	while (++i < length){
		cur = s.at(i);
		if (i+1 < length)
			peek = s.at(i+1);
		else peek = '0';

		cur_v = getValue (cur);
		peek_v = getValue (peek);


		if (peek_v > cur_v){
			result += (peek_v-cur_v);
			i++;
		}else {
			result += cur_v;
		}

	}

	return result;

}

int main () {
	string s ("MCMIV");
	cout << convert (s);
}
