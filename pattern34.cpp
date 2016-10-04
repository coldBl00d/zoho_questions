#include <iostream>

using namespace std;
#define log(x) cout << x << endl; 

int array[200];

void genNumber (int digits, int *numSet, int loc, int *buffer, int* count){

	if (loc == digits){
		*buffer = *buffer /10;
		array[*count] = *buffer;
		(*count)++;
		return;
	}

	else {
			for (int i=0; i<2;i++){
				*buffer += numSet[i];
				int temp = *buffer;
				*buffer = (*buffer) *10;
				genNumber(digits, numSet, loc+1, buffer, count );
				*buffer = temp - numSet[i];
			}		
	}
}



int main () {


	int ar[2]={3,4};
	int buffer=0;
	int loc =0;
	int digits =1;
	int count =0;
	int n =100;

	for (int i=1; count < n; i++){
		genNumber (i, ar, loc, &buffer,&count);
	}

	cout << array[n-1];

}