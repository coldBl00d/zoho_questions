
#include <iostream>
#include <algorithm>

using namespace std;

#define log(x) cout << x << endl; 

char s[] = "akhi";
int size = 4;

void printCombo (char *buffer, int b_size, int loc ){

	if (b_size == size){

		buffer[size]= '\0';
		cout << buffer<< endl;
		return ;
	}

	for (int i =0; i < size ; i++ ){

		const char* NOT_FOUND = buffer+b_size;
		char c = s[i];
		if (find (buffer, buffer+b_size, c) == NOT_FOUND){
			//log (buffer);
			buffer[loc]= s[i];
			printCombo (buffer, b_size+1, loc+1);
		}

	}



} 

int main () {
	char buf[size]={'-'};
	buf[size]='\0';
	sort(s,s+size);
	printCombo (buf,0,0);
}