//This program demonstrates friend function of multiple classes
//Compare private variables of different classes.
#include<iostream>
using namespace std;
class B;
class C;
class A
{
    int a;
    public:
    void geta()
    {
        a=60;
    }
    friend void compare(A x, B y, C z);
    
};

class B
{
    int b;
    public:
        void getb()
    {
        b=50;
    }
    friend void compare(A x, B y, C z);
};

class C
{
    int c;
    public:
     void getc()
    {
        c=45;
    }
    friend void compare(A x, B y, C z);
};

void compare(A x, B y, C z)
{
int max;
max = x.a;
if(y.b > max)
{
    max=y.b;
}
if(z.c > max)
{
    max=z.c;
}
cout<<"The max value is "<<max;
}

int main()
{
    A x;
    B y;
    C z;
    x.geta();
    y.getb();
    z.getc();
    compare(x, y ,z);
return 0;
}