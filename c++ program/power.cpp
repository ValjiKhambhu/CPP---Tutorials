#include <iostream>
#include <math.h>

using namespace std;

void power(int p,float a=2.7689)
{
    cout<<"\n power of a:"<<pow(a,p);
}

int main()
{
    int p;
    cout<<"\n enter a p value:";
    cin>>p;
    power(p);
    return 0;
}