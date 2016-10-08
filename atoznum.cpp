#include <iostream>
#include <algorithm>
#include <cctype>
#include <stack>

using namespace std;

#define log(x) cout << x << endl; 

char A[26] =  {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

void convertNum (int i){
	int temp = i;
	stack <char> s;
	int v;
	while (temp){
		v = temp % 26;
		temp /= 26;
		if (v-1 < 0){
			v= 26;
		}
		s.push(A[v-1]);
	}

	while (!s.empty()){
		cout << s.top();
		s.pop();
	}
	return;
}

int main (){
	int i =1000;
	convertNum(i);
}