
#include <iostream>
#include <algorithm>

using namespace std;

#define log(x) cout << x << endl; 

void print_mismatch (char *array1, char *array2, int m, int n){
	int i =0, j=0;
	for (i=0, j=0; i<m && j<n ; i++, j++){
		if (array1[i]!= array2[j]){
			cout << array1[i]<<array2[j]<<",";
		}
	}

	while ( i< m){
		cout << array1[i++]<<",";

	}
	while (j<n){
		cout << array2[j++]<<",";
	}


	return;

}

int main () {
	char array1[] ={ 'a','b','c','d','e','f','g','h','i'};
	char array2 [] = {'a','b','d','e','e','g','h','i','i'};

	int m = sizeof (array1)/ sizeof (char);
	int n = sizeof (array2)/ sizeof (char);

	print_mismatch(array1,array2,m,n);
}