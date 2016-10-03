#include <iostream>
#include <string>

using namespace std;

void reverse (char *string, int s, int l) {
    char temp;
    
    temp = string[s];
    string[s]=string[l];
    string[l]= temp;
    reverse(string, s+1, l-1);
    
    return;
}

int main () {
    char name[] = {'a','k','h','i','l','a','\0'};
    reverse(name,0,5);
    cout<<"After everything: "<< name<<endl;
    return 1;
}