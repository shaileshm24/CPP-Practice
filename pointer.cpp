#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    //if want ot store address of variable in another variable then this variable should be pointer variable
    int *b = &a; // or you can write it as int* b
    int **c = &b;
    cout << b << endl;   //this will print address of 'a' location
    cout << *b << endl;  //this will print value stored at address i.e. value of a
    cout << c << endl;   //this will print address of 'b'
    cout << *c << endl;  //this will print value stored a b location i.e. address of 'a' location
    cout << **c << endl; //this will print value stored at address of 'b' location

    int*** d = &c;
    cout<<endl<<"value of d"<<endl;
    cout<<d<<endl;
    cout<<*d<<endl;
    cout<<**d<<endl;
    cout<<***d<<endl;
    

    return 0;
}