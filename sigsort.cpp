#include <iostream>
#include <algorithm>
#include <cctype>
#include <stack>

using namespace std;

#define log(x) cout << x << endl; 

bool compare (int i, int j ) {

	stack <int> si;
	stack <int> sj;
	int temp;
	
	if (i==0){
		si.push(i);
	}

	if (j==0){
		sj.push(0);
	}

	while (i){
		temp = i%10;
		i /=10;
		si.push (temp);

	}

	while (j){
		temp = j%10;
		j /=10;
		sj.push (temp);

	}

	while (!(si.empty()) && !(sj.empty())){
		if (si.top() < sj.top()){
			return true;
		}else if ((si.top() > sj.top())){
			return false;
		}else {
			si.pop();
			sj.pop();
		}
	}

	if (si.empty() && sj.empty()){
		return true;
	}else if (sj.empty()){
		return false;
	}else  {
		return true;
	}

}

void print (int i) {
	cout << i << "," ;
	return;
}
int main () {

	int array [] = { 100 ,1 , 11 , 2, 0 , 3};
	sort (array, array+6, compare);
	for_each (array, array+6, print);


}