#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;
int main () {

	char key[20];
	char s[3][20]={ {"akhil"},{"hell"},{"a"} };
	
	int i=0; int j=0;
	for ( i=1; i<3; i++){
		strcpy(key,s[i]);
		for ( j=i-1;j>=0;j--){
			if (strlen(s[j])>strlen(key)){
				strcpy(s[j+1], s[j]);
			}else break;
		}
		strcpy(s[j+1],key);
	}


	for (int i =0; i< 3;i++){
		cout << s[i]<<"   ";
	}


}