/*Matrxi pattern*/





#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

#define log(x) cout << x << endl; 
int ringNumber (int i, int j, int m, int n){
	
	int row = m;
	int col = n;
	int min;
	int min2;

	if ( i<j ) min = i;
	else min = j;

	int new_i = row - i;
	int new_j = col -j;

	if (new_j < new_i) min2= new_j;
	else min2 = new_i;

	if (min> min2) return min2;
	return min;

}


void pattern (int m, int n){

	int ring=0;
	int i =0; int j =0;
	for (i; i<m;i++){
		for (j=0; j<n;j++){
			ring = ringNumber(i,j,m-1,n-1);
			//log ("Ring number of "<<i<<","<<j<<":  "<<ring)
			if (ring %2){
				cout << "O ";
			}else {
				cout << "X ";
			}
		}
		cout << endl;

	}

}

int main () {

	int m=10;
	int n=10;

	pattern (m,n);

}