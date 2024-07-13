#include <iostream>

using namespace std;

void swap(int & a,int & b)
{
    cout<<"\na:"<<a;
    cout<<" b:"<<b;

    int temp=a;
    a=b;
    b=temp;
    cout<<"\na:"<<a;
    cout<<" b:"<<b;
}

void e(int & c)
{
    cout<<"\nc:"<<c;
    c*2;
   
}
int main()
{
    int a=10,b=20,c=50;
    swap(a,b);

    //int c=500;
    e(c);
    cout<<"\n c:"<<c;
    return 0;
}