#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>


using namespace std;

#define log(x) cout << x << endl; 

int getCount (int i ) {

	int n =10;
	int power;
	double max, min, count;
	power = 1;
	while (true){
		max = pow (10,power);
		min = pow (10, power-1);

		if ( i > max ){
			count += (max - min ) * power;
		}else if ( i <max){
			count += (i-min+1)*power;
			break;
		}else if (i==max){
			count += (max-min)*power;
			count+= power;
		}

		power ++;
	}
	return count;

}

int main () {
	int i =2;
	cout << getCount (i);
}
