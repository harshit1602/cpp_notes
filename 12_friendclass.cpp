//This program demonstrates concept of friend class
#include<iostream>
using namespace std;
class B;
class A
{
int x;
public:
A()
{
    x=75;
}
friend class B;     // friend class declared -> friend_keyword class_keyword class_Name
};
class B
{
public:
void showA(A t)     // parameter object of A to acess A members
{
    cout<<t.x;
}
};
int main()
{
    A t;
    B y;
    y.showA(t);       //accessing from B since the function is a member of B and passing object of A as parameter to access the members of A
    return 0;
}