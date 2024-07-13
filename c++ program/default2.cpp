#include <iostream>

using namespace std;

void string1(char str[50],int num=3)
{
    int i;
    for(i=0;i<num;i++)
    {
        cout<<str<<endl;
    }
}

int main()
{
    char str[50];
    int num;

    cout<<"\n enter a string:";
    cin>>str;

    cout<<"\n enter a how many times you are repeat:";
    cin>>num;

    string1(str,num);

    cout<<"\n default:\n";
    string1(str);

    return 0;
}