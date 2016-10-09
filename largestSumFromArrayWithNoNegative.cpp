#include <iostream>
#include <algorithm>
#include <climits>


using namespace std;

struct pair_p {
	int maxi;
	int maxj;
};
pair_p setArray (int array[][20], int size, int *num){

	int max= INT_MIN;
	struct pair_p p;
	for (int i =0; i < size; i++ ){
		for (int j =0 ; j< size ; j++){

			if (num [i] <0) break;
			else if (j<i) continue;
			else if (j==i) array[i][j] = num[i];
			else if (j>i) {
				if (num[j]<0)
					break;
				else {
					array[i][j]= array[i][j-1]+num[j];
					if (max<array[i][j]){
						max = array[i][j];
						//cout << "MAX::"<<max <<"--"<<"NewMax ::"<<array[i][j]<<endl;
						p.maxi=i;
						p.maxj=j;
					}
				}
			}

		}
	}

	return p;

}


int main () {
	int num [] = {-2,7,5,-1,3,2,9,-7};
	int size = sizeof (num)/sizeof(int);
	int dp_array [size][20]={};

	struct pair_p p = setArray(dp_array, size, num );

	int maxi=0;
	int maxj=0;
	int max = INT_MIN;

	// for (int i =0 ; i<size ; i++ ){
	// 	for (int j =0; j< size; j++){
	// 		cout << dp_array[i][j]<<" ";
	// 		// if (dp_array[i][j]>max){
	// 		// 	max = dp_array[i][j];
	// 		// 	maxi = i;
	// 		// 	maxj = j;
	// 		// }
	// 	}
	// 	cout << endl;
	// }
	//cout << "("<<p.maxi<<","<<p.maxj<<")"<<endl;
	for (int i = p.maxi ; i <= p.maxj; i++){
		cout << num [i]<<"  ";
	}

}
