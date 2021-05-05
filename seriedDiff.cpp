#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,i;
    cout<<"Enter range";
    cin>> n;
    int a[n],b[n];
    for (i=0; i<n; i++){
        cin>>a[i];
    }
    int a0 = a[0];
    for (i=0; i<n;i++){
        int diff = a[i]-a0;
        b[i] = diff;
        a0 = a[i];
    }
    for (i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
}