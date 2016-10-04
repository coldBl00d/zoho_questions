#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void print(int i){
	cout <<i<<"  ";
}

int main () {

	int i=1,j=6,k;
	int array[] = {1,2,3,4,5,6,7};
	sort (array,array+7,greater<int>());


	for (i =1; i<7; i+=2){
		int key = array[6];
		for (k=j-1; k>=i; k--){
			if (array[k]>key){
				array[k+1]= array[k];
			}else break;
		}
		array[k+1]=key;
	}

	for_each (array,array+7,print);

}