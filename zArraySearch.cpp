#include <iostream>
#include <string>

using namespace std;
#define LOOK_RIGHT 0
#define LOOK_BOTTOM 1
#define ROW 5
#define COL 5

/*m: matrix to be searched
  (s_x, s_y) starts the searching from where
  lookFor: look for this string
  where: LOOK_RIGHT or LOOK_BOTTOM for the match
*/
#define log(x) cout << x << endl; 
typedef struct orderd_pair {
    int xx;
    int yy;
}opair;

opair lookIfMatch(char m[][5], int s_x, int s_y, string lookFor, int where){
    
    int x = s_x;
    int y = s_y;
    int i=1;
    opair result;
    result.xx =-1;
    result.yy =-1;
    
    if (where == LOOK_RIGHT){
        y++;//first letter is a match so starting from next
        
        for (y; y<COL&&i<lookFor.length(); y++){
            if (lookFor.at (i)!= m[x][y]){
                break;
            }
            i++;
        }
        
        
    }else if (where == LOOK_BOTTOM){
        x++;
        for (x; x<ROW&&i<lookFor.length(); x++){
            if (lookFor.at(i)!= m[x][y]){
               break;
            }
            i++;
        }
    }
   
    
    if (i==lookFor.length())
    {
        
        result.xx = x;
        result.yy = y;
    
    }
    return result;
   
}

void search (char m[][COL],string key){
    for (int i=0; i < ROW; i++){
        for (int j=0; j< COL; j++){
            if (key.at(0)==m[i][j]){
                opair result = lookIfMatch (m,i,j,key,LOOK_RIGHT);
                if (result.xx != -1){
                    cout << "Start "<<i<<","<<j<<"\nEnd ("<<result.xx<<","<<result.yy<<")";
                    return;
                }else {
                   
                    result = lookIfMatch (m,i,j,key,LOOK_BOTTOM);
                    if (result.xx != -1){
                        cout << "Start "<<i<<","<<j<<"\nEnd ("<<result.xx<<","<<result.yy<<")";
                        return;
                    }
                }
            }
        }
    }
    cout <<"Not found ... "<<endl;
    return;
}

int main () {
 char m[ROW][COL] = {    {'W',   'E',	'L',	'C'	,   'O' },
                        {'M',	'E',	'T',	'O',	'Z'},
                        {'O',	'H',	'O',	'C',	'O'},
                        {'R',	'P',	'O',	'R',	'A'},
                        {'T',	'I',	'O',	'N'}  };
                        
                        
 string lookFor ("back");
 search (m,lookFor);
                        
}