#include <iostream>

using namespace std;

void symbol1(char symbol,int num=3)
{
    int i;
    for(i=0;i<num;i++)
    {
        cout<<symbol<<" ";
    }
}

int main()
{
    char symbol;
    int num;

    cout<<"\n enter a symbol:";
    cin>>symbol;
    cout<<"\n enter a how many times repeat:";
    cin>>num;

    symbol1(symbol,num);
    cout<<"\n\n default:\n";
    symbol1(symbol);

    return 0;
}