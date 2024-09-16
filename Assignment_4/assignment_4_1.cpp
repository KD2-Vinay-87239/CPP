#include <iostream>
using namespace std;

class Time
{

    int hrs;
    int mins;
    int sec;

public:
    Time()
    {
        hrs = 0;
        mins = 0;
        sec = 0;
    }

    Time(int h, int m, int s)
    {
        this->hrs = h;
        this->mins = m;
        this->sec = s;
    }

    // mutators
    void setHour(int h)
    {
        hrs = h;
    }

    // inspectors
    int getHour()
    {
        return hrs;
    }

    // mutators
    void setMinute(int m)
    {
        mins = m;
    }

    // inspectors
    int getMinute()
    {
        return mins;
    }

    // mutators
    void setSeconds(int s)
    {
        sec = s;
    }

    // inspectors
    int getSeconds()
    {
        return sec;
    }

    void printTime()
    {

        cout << "Time ->" << hrs << " : " << mins << " : " << sec << " : " << endl;
    }

    void acceptTime()
    {

        cout << "Enter the time : " << endl;
        cin >> hrs >> mins >> sec;
    }
};

int main()
{
    Time **tarr = new Time *[5];

    for (int i = 0; i < 5; i++)
    {
        tarr[i] = new Time();
    }

    for (int i = 0; i < 5; i++)
    {
        tarr[i]->acceptTime();
        tarr[i]->printTime();
    }

    for (int i = 0; i < 5; i++)
    {
        delete tarr[i];
        tarr[i] = NULL;
    }

    return 0;
}