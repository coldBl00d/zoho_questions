#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

#define log(x) cout << x << endl; 


void generatePerm (int size, char *string, char* buffer, int index ){

	int i =0, length = strlen (string);
	char c, *NOT_FOUND = buffer + index;

	//log (strlen (buffer))
	if (index == size){
		//cout << "returning for size :"<< size<<endl;
		cout << buffer<<endl;
		//clearBuf (buffer, size);
		return;
	}

	else {

		for (int j =0; j< length; j++ ){
			c = string[j];
			if (find(buffer, buffer + index, c) == NOT_FOUND){
				//cout <<c<<" was not found hense adding"<<endl;
				buffer [index]= c;
				generatePerm (size, string, buffer, index +1 );
			}else {
				//cout << c<< "was found "<<endl;
			}
		}

	}

}

void generatePerm (char *s){
	int length = strlen (s);
	char *c = NULL;
	int PUT_CHAR_HERE = 0;

	for (int i =1; i <= length ;i++){
		c = new char [i+1];
		c[i]='\0';
		generatePerm (i,s,c,PUT_CHAR_HERE);
	}
}

int main () {
	char a[] ="abc";
	generatePerm (a);
	return 0;
}#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

#define log(x) cout << x << endl; 


void generatePerm (int size, char *string, char* buffer, int index ){

	int i =0, length = strlen (string);
	char c, *NOT_FOUND = buffer + index;

	//log (strlen (buffer))
	if (index == size){
		//cout << "returning for size :"<< size<<endl;
		cout << buffer<<endl;
		//clearBuf (buffer, size);
		return;
	}

	else {

		for (int j =0; j< length; j++ ){
			c = string[j];
			if (find(buffer, buffer + index, c) == NOT_FOUND){
				//cout <<c<<" was not found hense adding"<<endl;
				buffer [index]= c;
				generatePerm (size, string, buffer, index +1 );
			}else {
				//cout << c<< "was found "<<endl;
			}
		}

	}

}

void generatePerm (char *s){
	int length = strlen (s);
	char *c = NULL;
	int PUT_CHAR_HERE = 0;

	for (int i =1; i <= length ;i++){
		c = new char [i+1];
		c[i]='\0';
		generatePerm (i,s,c,PUT_CHAR_HERE);
	}
}

int main () {
	char a[] ="abc";
	generatePerm (a);
	return 0;
}
