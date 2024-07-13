#include <iostream>

using namespace std;

class rating
{
    int ch;
    public:

    rating()
    {
        int rating1;
        static int total1;
        static int total2,counter;
        cout<<"\n1.javatpoint \n2.w3school\n";
        cout<<"\n enter your choice :";
        cin>>ch;

        if(ch==1)
        {
            cout<<"\n enter your rating point in website 1 javatpoint:";
            cin>>rating1;
            total1+=rating1;
            counter++;
        }
        else if(ch==2)
        {
            cout<<"\n enter your rating point in website 2 w3school:";
            cin>>rating1;
            total2+=rating1;
            counter++;
        }

        if(counter>3)
        {
            if(total1>total2)
            {
                cout<<"\n highest rating point of website 1 javatpoint:"<<total1;
            }
            else if(total1==total2)
            {
                cout<<"\n highest rating point is same for both website:"<<total1;
            }
            else{
                cout<<"\n highest rating point of website 2 w3school:"<<total2;
            }
        }
    }
};

int main()
{
    rating r[5];
    return 0;
}