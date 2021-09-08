//This program demonstrates the concept of array of objects.
#include<iostream>
using namespace std;
class A
{
    char first_name[30];
    public:
    void getfname()
    {
        cin>>first_name;
    }
    void output()
    {
    cout<<first_name<<endl;
    }
};
int main()
{
    A x[10];                   //creating array of objects.
    for(int i=0;i<10;i++)
    {
        x[i].getfname();        //taking multiple inputs using array of objects.   
     }
    for(int j=0; j<10;j++)
    {
        x[j].output();           //multiple output using array of objects.
    }
    return 0;
}