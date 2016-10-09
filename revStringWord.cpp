#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

#define log(x) cout << x << endl; 
int j =0;
void reverseString (string s, int start){

	//log ("Entering "<< j<<"th time with start "<< start);
	int length = s.length();
	int i = start;
	int len =0;

	if (start >= length)
		return;
	
	while (s[i]!= ' ' && s[i]!= '\0'){
		//log (i<<"  "<<len)
		len++;
		i++;
		
	}
	j++;
	reverseString (s, i+1);
	
	cout << s.substr (start,len);
	cout << " ";

}

int main () {

	string s = "hello its me im in california dreaming about how we used to be";
	reverseString(s,0);

}