//This program demonstrates how function are used in c++.
#include<iostream>
using namespace std;
//function declaration
int add(); 
void subtract(int c, int d);
void sub(float c, int d);
//function definition
int add()                            //default parameter
{
    int a,b,sum;
    cin>>a>>b;
    sum=a+b;
    return sum;
}

void subtract(int c , int d)     //paramters of the function
{
cout<<"difference= "<<c-d<<endl;
}

void sub(float c=20 , int d=10)  
{
cout<<"difference= "<<c-d<<endl;
}

int main()
{
    //Calling a function returning value.
    int f;
    f=add();                     // The function add returns a int type value so we store it in a variable while calling the function. 
    cout<<f<<endl;               // Output the value using cout.
    cout<<"fun= "<<add()<<endl;  // We can also directly print the value without storing it in a variable.
    //Calling a function returning no value
    subtract(20,10);             //calling the function subtract.
    sub();                       //Calling the function sub.
    return 0;
}