#include <iostream>
#include <algorithm>
#include <cctype>
#include <stack>
#include <string>
#include <ctime>

using namespace std;

#define log(x) cout << x << endl; 

int groupMax;

bool isMultiple (int *array, int m){
	int sum =0;
	for (int i =0; i< m ; i++)
		sum += array[i];

	return !(sum % groupMax );
}

void print (int a)
{
	cout << a<< " ";
}
void printGroups (int *array, int a_size, int *buffer, int b_size, int *used_array ,int u_size, int index, int startFrom){
	//log (index)
	if (b_size == groupMax){

		if (isMultiple (buffer,b_size)){
			for_each (buffer, buffer+b_size, print);
			cout <<endl;
		}
			return;
	}

	if (b_size > 1 ){
		if (isMultiple(buffer, b_size)){
			for_each (buffer, buffer+b_size, print);
			cout << endl;
		}
	}


	for (int i=startFrom; i < a_size ; i++){
		//log ("working...")
		sort (used_array, used_array+u_size);
		if (find (used_array, used_array+u_size, array[i]) == used_array+u_size){
			//log ("Not Found << "<< array [i])
			buffer [index] = array[i];
			used_array[u_size]=array[i];
			printGroups (array, a_size, buffer, b_size+1, used_array, u_size+1, index+1,i+1);
		}


	}

} 

int main () {

	groupMax = 6;
	int array [] = {1,2,3,4,5,6};
	int a_size = 6;
	int buffer [groupMax];
	int index =0;
	int used_array [6];
	int u_size =0;
	printGroups (array, a_size, buffer, 0, used_array, 0, 0,0);


}