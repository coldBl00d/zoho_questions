#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;


#define log(x) cout << x << endl; 


struct unit {
        int digit;
        int weight;
    };

bool isEvem (int n){
    return !(n%2);
}

bool isDiv(int n){
    return !((n%4)&& (n%6));
}

bool isSqrt (int n){
    double f = sqrt (n);
    return (f*f) == n;
}

void calculate_weight (unit *t){
    if (isEvem (t->digit))
        t->weight+=3;
    if (isSqrt (t->digit))
        t->weight+=5;
    if (isDiv (t->digit))
        t->weight +=4;
    return;
}

bool comp (struct unit &a, struct unit &b){
    return a.weight>b.weight;
}

int main () {
    
    
    struct unit uArray[5];
    
    cout << "Enter 5 numbers : ";
    
    for (int i =0; i < 5; i++) {
        struct unit temp;
        cin >> temp.digit;
        temp.weight =0;
        calculate_weight (&temp);
        uArray[i] = temp;
    }
    
    sort (uArray, uArray+5, comp);
    for (int i =0; i < 5; i++){
        cout << "<"<<uArray[i].digit <<","<<uArray[i].weight<<">  ";
        
    }
    
}