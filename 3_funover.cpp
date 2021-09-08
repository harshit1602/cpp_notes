//This program demonstrates function overloading.
#include<iostream>
using namespace std;

void area()                               //Funtion area having no parameter
{
    int e,f;
    cin>>e>>f;
    cout<<"Triangle "<<0.5*e*f<<endl; 
}


int area(int s)                          //Funtion area having one parameter as int
{
    cout<<"Square "<<endl;
    return s*s;
}

int area(int l, int b)                 //Funtion area having two parameter as int
{
    cout<<"Rectangle "<<endl;
    return l*b;
}


int area(int l, int b, int h)           //Funtion area having three parameter as int
{
cout<<"Cuboid "<<endl;
return l*b*h;
}


int main()
{
    area();                        // Invoking Funtion area having no parameter
    cout<<area(4)<<endl;           //Invoking Funtion area having one parameter and passing fixed arguments.
    cout<<area(2,3,4)<<endl;       //Invoking Funtion area having three parameter and passing fixed arguments.
    //Taking input from user and passing it to the function.
    int x,y;
    cin>>x>>y;
    cout<<area(x,y)<<endl;         //Invoking Funtion area having two parameter and passing arguments taken from the user.
    return 0;
}