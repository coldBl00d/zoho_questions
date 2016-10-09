#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

#define log(x) cout << x << endl; 

void pushZeros (int *array, int size){
	int count =0;

	for (int i =0; i< size -count; i++){
		if (array[i]==0){
			for (int j =i+1; j < size -count ; j++){
				array[j-1] = array[j];
			}
			i--;
			array[size-1-count]= 0;
			count++;
		}
	}
}

void print (int i){
	cout << i<<" ";
}

int main () {
	int array[] = {1,9,8,4,0,0,2,7,0,6,0};
	int size = sizeof (array)/ sizeof (int);
	for_each (array,array+size, print);
	cout<<endl;
	pushZeros (array, size);
	for_each (array,array+size,print);
}