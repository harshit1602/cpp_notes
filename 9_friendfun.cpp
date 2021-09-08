//This program demonstrates friend function
#include<iostream>
using namespace std;
class A 
{
int a=20 ,b=10,c;
public: 
void display()
{
    cout<<"I am class"<<endl;
}
void sum()
{
c=a+b;        
cout<<"Sum is: "<<a+b<<endl;
}
friend void subtract(A x);    //declaring the function as friend -> friend_keyword return type function_name (passing a object of class).
};

void subtract(A x)
{
    x.c=x.a-x.b;             //accessing the members of class using the parameter object and dot_operator
    cout<<"Friend diff : "<<x.c;
}
int main()
{
    A a;
    a.display(); 
    a.sum();
    subtract(a);           //calling the function and passing the object created in main as parameter.
    return 0;
}