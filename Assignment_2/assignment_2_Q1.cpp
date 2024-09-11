#include <iostream>
using namespace std;



class Date
{
public:
    int day;
    int month;
    int yr;

    bool isLeapYear()
    {
        return (yr % 4 == 0 || (yr % 400 == 0 || yr % 100 == 0));
    }
    void initDate()
    {
        day = 01;
        month = 01;
        yr = 1900;
    }

    void printDateOnConsole()
    {
        cout << "Date : " << day <<" / "<< month <<" / "<< yr << endl;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter day,month and time :" << endl;
        cin >> day >> month >> yr;
    }
};

int demo()
{
    int choice;
    cout << "\n0. Exit :" << endl;
    cout << "1.Initialize Date :" << endl;
    cout << "2.Accept Date :" << endl;
    cout << "3. Print Date : " << endl;
    cout << "4.Leap year or not: " << endl;
    cout << "Enter your choice : " << endl;
    cin >> choice;
    return choice;
}

int main()
{
    Date d1;
    int choice;

    while ((choice = demo()) != 0)
    {
        switch (choice)
        {
        case 1:
            d1.initDate();
            break;

        case 2:
            d1.acceptDateFromConsole();
            break;

        case 3:
            d1.printDateOnConsole();
            break;

        case 4:
            if (d1.isLeapYear() == 1)
            {
                cout<<d1.yr<<" is a leap year..!";
            }
            else
            {
                cout<<d1.yr<<" is not a leap year..!";

            }
            break;

        default:
            cout << "Exit..!!";
            break;
        }
    }

    return 0;
}
