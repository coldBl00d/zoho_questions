#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

void reverse (char *start, char * end){

	char temp;
	while (start <= end){
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
	//cout << "Completed first time"<<endl;
	return;
}

void reverse_word (char *s){
	char *start=s;
	char *end=s;

	while (*start){
		if (*end == ' '){
			reverse (start, end-1);
			start = end+1;
		}
		else if (*end == '\0' ) {
			reverse (start, end-1);
			start = end+1;
		}
		end ++;
	}
}

int main () {
	char c[] = "i like this program very much";
	cout <<c<<endl;
	int len = strlen (c);
	reverse_word (c);
	cout << c<<endl;
	reverse(c, c+len-1);

	
	cout << c <<endl;
}
