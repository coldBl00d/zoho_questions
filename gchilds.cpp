#include <iostream>
#include <string>

using namespace std;

#define ROW 4
#define log(x) cout << x << endl; 

int findGrandCount (string mat[][2], string grandFather){
    
    string childs [8];
    int child_count =0;
    int gChild_count =0;
    
    for (int i =0; i < ROW; i++ ){
        if (!grandFather.compare (mat[i][1])){
            childs[child_count++] = mat [i][0];
        }
    }
    
    for (int i =0; i < child_count ; i++){
        
        for (int j =0; j < ROW ; j++){
            if (childs[i].compare (mat [j][1])==0){
                gChild_count ++;
            }
        }
    }
    
    return gChild_count;
}

int main () {
    string s[4][2] = { { "luke", "shaw"} , 
                      {"wayne", "rooney"},
                      {"rooney", "luke"},
                       {"shaw", "rooney"} }
                       ;
                       
    cout << findGrandCount (s,"shaw");
                       
                       
}

