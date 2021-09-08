//This program demonstrates copy constructor
#include<iostream>
using namespace std;
class A 
{
int a ,b;
public: 
A(int d, int e)      //parameterised constructor
{
a=d;
b=e;
cout<<"I am constructor"<<endl;
}
A (A &obj)         //copy constructor
{
    a=obj.a;
    b=obj.b;
    cout<<"I am copy constructor"<<endl;
}
void display()
{
    cout<<"Values are: "<<a<<" "<<b<<endl;
}
};

int main()
{
    A a(10,20); 
    A b(a);        //calling copy constructor
    A c=a;        //another way of calling copy constructor
    a.display();
    b.display();
    c.display(); 
    return 0;
}