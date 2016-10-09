#include <iostream>
#include <algorithm>
#include <cstring>


using namespace std;

#define log(x) cout << x << endl;

int ROW = 4;
int COL = 4;
char array[4][4]= { { 'a','z','o','l'} ,  {'n','x','h','o'} , {'v','y','i','v'}, {'o','r','s','e'} };
bool found = false;

/*void find_word (char *word, int index, int i, int j ){
	int length = strlen (word);
	
	if (i >= ROW || j >= COL){
		return;
	}
			log ("current array ["<<i<<"]["<<j<<"]"<< array[i][j] <<" - word char "<< word[index]<< " \n Index :"<<index <<" - length :"<<length)
	
	if (index == length){
		cout << word << "-" << "found"<<endl;
		found = true;
		return;
	}

	if (array[i][j]==word[index]){
		find_word(word, index+1, i,j+1);
		find_word (word, index+1,i+1,j);
	}else {
		return;
	}




	return;


}*/

bool find_word (char *word, int index , int i, int j){
	int length = strlen (word);
	if (i>= ROW || j >= COL){
		if (index == length)
			return true;
		else return false ;
	}

	if (index == length){
		return true;
	}

	if (array[i][j]== word[index]){
		return 
			find_word(word, index +1, i+1, j) || find_word (word, index+1, i, j+1);
	}else {
		return false;
	}
}

void find_init_match (char *s){
	char first_char = s[0];
	bool found = false;

	for (int i =0; i< ROW&& !found; i++){
		for (int j=0 ; j<COL && !found; j++ ){
			if (array[i][j]==first_char){
				//log (array[i][j])
				found = find_word (s,0,i,j);
			}
		}
	}
	if (!found){
		cout << s<<"- Not found "<<endl;
	}else {
		cout << s<<" - FOund "<<endl;
	}
	return;
}

int main () {
	
	char dict [7][20] = { "van","zoho","love","are","is","hive","ve"};
	for (int i =0; i < 7; i++){
		find_init_match (dict[i]);
	}

	//find_init_match("hive");
	//cout <<find_word("", 0, 0,1)<<endl;

}