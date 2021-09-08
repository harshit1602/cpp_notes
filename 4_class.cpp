//This program is the introduction to class
#include<iostream>
using namespace std;
class A // keyword_class className {//definition};
{
int a=10 ,b=20,c;               //private by default
public:                        // public access specifier
void display()
{
    cout<<"I am class"<<endl;
}
void sum()                  //Member function 
{
c=a+b;
cout<<a+b;
}
};

int main()
{
    // Creating object of class
    A a;         
    //Acessing the class members using the created object
    a.display(); // object class_member_access_operator function _name ();
    a.sum();
    return 0;
}