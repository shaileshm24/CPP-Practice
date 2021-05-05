#include <iostream>

using namespace std;

int main(){
    int a;
    float b;
    char d= 'd';
    double e;
    long double f;
    bool g;

    cout<<"Size of int   "<<a<<endl;
    cout<<"Size of float   "<<sizeof(b)<<endl;
    cout<<"Size of char   "<<sizeof(d)<<endl<<d<<endl;
    cout<<"Size of double   "<<sizeof(e)<<endl;
    cout<<"Size of long double   "<<sizeof(f)<<endl;
    cout<<"Size of bool   "<<sizeof(g)<<endl;

    return 0;
}