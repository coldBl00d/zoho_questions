#include <iostream>
#include <algorithm>
#include <cstring>
#include <cctype>

using namespace std;

#define log(x) cout << x << endl; 

void reverse (char *s){
	int len = strlen (s);
	char *beg = s;
	char *end = s+len-1;
	char temp;


	while (beg < end){

		if (isalnum (*beg)&&isalnum(*end)){
			temp = *beg;
			*beg++ = *end;
			*end-- = temp;
		}

		if (!isalnum(*beg))
			beg++;

		if (!isalnum(*end))
			end--;



	}

}

int main () {
	char s[] ="A man, in the boat says : I see 1-2-3 in the sky";
	cout<<s<<endl;
	reverse (s);
	cout <<s<<endl;
}
