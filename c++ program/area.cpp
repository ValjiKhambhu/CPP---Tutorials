#include <iostream>

using namespace std;

void area_circle(int r,float pi=3.14)
{
    cout<<"\n arear of circle:"<<pi*r*r;
}

void area_parameter(int r,float pi=3.14)
{
    cout<<"\n area of parameter:"<<2*pi*r;
}

int main()
{
    int r;
    cout<<"\n enter a r:";
    cin>>r;
    area_circle(r);
    area_parameter(r);
    return 0;
}