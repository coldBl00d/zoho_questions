/*  reverse a string recursively as 
	i love india 
	india love i 
*/

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstring>

#define log(x) cout << x << endl; 
using namespace std;
void reverseString (char *s, char *rev ){

	//*b ++;
	//if ((*b) >3 ) {log ("breaking") return;} 


	log ("Here")
	int length = strlen (s); //12
	int i=1;
	int j=0;
	log ("initilised variables as "<< i<< j << length)
	if (!length) return;

	for (i ; i<length && s[i] != '\0' && s[i]!=' ';i++); cout << "calculated where space is ...."<<endl; //1
		reverseString(&s[i], rev);
	char temp[i+2]; 
    for (j=0; j< i; j++){
    	log ("looping to copy till space to temp....")
    	temp[j]= s[j];
    }temp[j]=' '; temp [j+1] = '\0';
    log (temp)
    log ("Temp is copied .... "<< temp)
	strcat (rev, temp );


}

int main () {
	char rev [100]={'\0'};
	int i=0;
	char s [] = "i really hope that this works";
	cout << "enter string" << endl;
	log ("calling function");
	reverseString (s,rev);
	cout << rev<< endl;
	return 0;
}
