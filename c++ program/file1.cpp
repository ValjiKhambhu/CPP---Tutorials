#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("cpp1.txt");
    fout<<"this is my file";

    for(int i=0;i<20;i++)
    {
        if(i%2 != 0)
        {
            fout<<"\n "<<i;
        }
    }

    fout.close();

    ifstream fin;
    fin.open("cpp1.txt");
    string line;
    while(getline(fin,line))
    {
        fin>>line;
        cout<<"\n "<<line;
    }

    fin.close();

    return 0;
}