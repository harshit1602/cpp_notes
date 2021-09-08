//This program demonstrates how array of objects is used in friend class and parameters are used.
#include<iostream>
using namespace std;
class B;
class C;
class A
{
    char first_name[30];
    public:
    void getfname()
    {
        cin>>first_name;
    }
    friend class C;
};
class B
{
    char last_name[30];
    public:
    void getlname()
    {
        cin>>last_name;
    }
    friend class C;
};
class C
{
   public:
    void show(A x[10], B y[10])
   {
        for(int k=0;k<10;k++)
   {
      cout<<x[k].first_name<<" "<<y[k].last_name<<endl; 
   }
  }
};
int main()
{
    A x[10];
    B y[10];
    C t;
    for(int i=0;i<10;i++)
    {
        x[i].getfname(); 
    }
    for(int j=0;j<10;j++)
    {
        y[j].getlname();
    }
    t.show(x,y);
    return 0;
}