
#include <iostream>
#include <algorithm>

using namespace std;

#define log(x) cout << x << endl; 

void printMax (int *array, int size, int window_size){

	int cur_max;

	for (int i =0; i < size - window_size+1; i++){
		cur_max = array[i];

		for (int j =i, k=0; j<size && k< window_size ; j++,k++){
			if (cur_max< array[j]){
				cur_max = array[j];
			}
		}
		cout << cur_max <<",";
	}

}

int main () {

	int array[] = {3,2,7,6,5,1,2,3,4};
	int size = sizeof (array)/ sizeof (int);
	printMax(array, size, 3);


}