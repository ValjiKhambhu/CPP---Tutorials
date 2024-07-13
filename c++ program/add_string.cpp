#include <iostream>
#include <string.h>

using namespace std;

class join
{
    char input[50];
public:
    void getdata()
    {
        cout<<"\n enter a input:";
        cin>>input;
    }

    join add(join a,join b)
    {
        strcat(a.input,b.input);
        return a;
    }

    void display()
    {
        cout<<"\n input: "<<input;
    }
};

int main()
{
    join a,b,c;

    a.getdata();
    b.getdata();

    c=c.add(a,b);

    a.display();
    b.display();
    c.display();

    return 0;
}