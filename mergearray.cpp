#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

#define log(x) cout << x << endl; 

int mergeNoDup (int *a1, int *a2, int *re, int m, int n){

    sort (a1, a1+ m);
    sort (a2, a2+n);
    int i =0,j=0,k=0;

    for (i,j,k; i<m&&j<n;){
        if (a1[i]<a2[j]){
            re[k++] = a1[i++];
        }else if (a1[i]> a2[j]){
            re[k++] = a2[j++];
        }else {
            re[k++] = a1[i++]; 
            j++;
        }
    }

    while (i<m){
        re[k++]= a1[i++];
    }
    while (j<n){
        re[k++] = a2[j++];
    }

    return k;

}


void print (int i){
    cout << i<<",";
}

int main () {
    int a1[] = {1,2,3,20,5,6};
    int a2[] = {5,4,3,7,8};
    int s1 = sizeof (a1)/sizeof(int);
    int s2 = sizeof (a2)/sizeof(int);
    int result [s1+s2];
    int size = mergeNoDup (a1,a2, result, s1,s2);
    for_each (result, result+size, print );
}