#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <bitset>

using namespace std;
#define log(x) cout << x << endl; 
bool checkRownColumn (int mat[4][4]){
    bitset <4> rowset;
    bitset <4> colset;
    bool rowOkay;
    bool colOkay;
    
    for (int i =0; i< 4;i++){
        rowset.reset();
        for (int j=0; j< 4; j++){
            rowset.set (mat[i][j]-1);
        }
        if (rowset.count () != 4){
            return false;
        }
    }
    
    for (int i =0; i< 4; i++){
        colset.reset();
        for (int j=0; j<4; j++){
            colset.set(mat[j][i]-1);
        }
        if (colset.count()!= 4){
            return false;
        }
    }
    log ("returning true")
    return true;
}

bool gridCheck (int mat [4][4]){
    bitset <4> gridset;
    for (int i=0; i<4;i+=2){
        for (int j=0; j<4; j+=2){
            gridset.reset();
            for (int k=i; k<i+2; k++){
                for (int h=j; h<j+2;j++){
                    gridset.set(mat[k][h]-1);
                }
            }
            if (gridset.count () != 4){
                return false;
            }
        }
    }
    return true;
}

int main () {
    int sudo [][4] = { {1,2,3,4},
                  {3,4,1,2},
                  {4,1,4,3},
                  {2,3,4,1}
    };
    
    cout << checkRownColumn(sudo)&&gridCheck(sudo);
}