#include <bits/stdc++.h>

using namespace std;

int swapNum(int* x, int* y){
    int temp = *x;
    cout<<temp;
    *x = *y;
    *y = temp;
}


int main(){
    int a=4, b=5;    
    cout<<"swapping   "<<swapNum(&a,&b);
    return 0;
}