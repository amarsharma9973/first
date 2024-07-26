#include<iostream>
using namespace std;

int add(int a,int b)
{
    int sum = a+b;
    return sum;
}

float add(int a,float b)
{
    float sum = a+b;
    return sum;
}

float add(float a,int b)
{
    float sum = a+b;
    return sum;
}

float add(float a,float b)
{
    float sum = a+b;
    return sum;
}

int main()
{
    float a,b;
    cout<<"Enter any two number"<<endl;
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}
