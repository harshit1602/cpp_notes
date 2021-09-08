//This program gives introduction to constructors.
#include<iostream>
using namespace std;
class A 
{
int a ,b,c;
public:
A()
{
    a=0;
}
A(int d, int e) // paramaterised constructor
{
a=d;
b=e;
}
void display()
{
    cout<<"I am class"<<endl;
}
void sum()
{
c=a+b;
cout<<a+b<<endl;
}
};

int main()
{
    A a;
    A b(10,20); //parametrised constructor
    b.display();
    b.sum();
    return 0;
}