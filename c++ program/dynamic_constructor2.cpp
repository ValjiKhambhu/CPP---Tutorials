#include <iostream>
#include <string.h>
using namespace std;

class student
{
    char *name;
    int length;

    public:

    student(char *m)
    {
        length=strlen(m);
        name = new char[length+1];
        strcpy(name,m);
    }

    void display()
    {
        cout<<"\n student name:"<<name;
    }
};

int main()
{
    char *name;
    name=new char(10);
    strcpy(name,"hello");
    student s1(name);
    s1.display();
    return 0;
}