//This program demonstrates the use of scope resolution operator
// :: This operator is called scope resolution operator
#include<iostream>
using namespace std;
int a=20; //global variable
int main()
{
    int a=10;
    cout<<"global "<<::a<<endl;
    cout<<"local "<<a;
    return 0;

}

//Scope resolution operator is used to access global variable having same name as local variable.