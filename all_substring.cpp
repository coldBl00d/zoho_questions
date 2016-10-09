/*all substrings of a string*/


#include <iostream>
#include <algorithm>

using namespace std;

#define log(x) cout << x << endl; 

char s[] = "akhil";
int size = 5;

void printSubstring (int sub_size){

	int i=0;
	int curSize =0;
	for (int i=0; i< size - sub_size+1; i++){
		curSize =0;
		for (int j=i; j< size && curSize < sub_size ; j++, curSize++){
			cout << s[j];
		}
		cout << endl;
	}
}

int main () {
	for (int i=1; i <= size ; i++){
		printSubstring (i);
	}
}
