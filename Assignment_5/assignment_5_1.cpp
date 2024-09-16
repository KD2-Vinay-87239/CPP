#include<iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;


public:
    Date()
    {
        this->day=0;
        this->month=0;
        this->year=0;

    }

    Date(int d,int m,int y)
    {
        this->day=d;
        this->month=m;
        this->year=y;
    }

    void setDay(int d)
    {
        this->day=d;
    }


    void setMonth(int m)
    {
        this->month=m;
    }

    void setYear(int y)
    {
        this->year=y;
    }


    void accept()
    {
        cout<<"Enter day,month and year : "<<endl;
        cin>>day>>month>>year;
    }

    void display()
    {
        cout<<day<<" / "<<month<<" / "<<year<<endl;
    }
};

class Person
{
    string name;
    string addr;
    Date birthdate;

public:
    Person()
    {
        string name=" ";
        string addr= " ";
    }

    Person(string name,string addr,int day,int month,int year):birthdate(day,month,year)
    {
        this->name=name;
        this->addr=addr;
        this->birthdate.setDay(day);
        this->birthdate.setMonth(month);
        this->birthdate.setYear(year);

    }

    void acceptData()
    {
        cout << "\nEnter Name of person : ";
        cin >> name;

        cout << "\nEnter address : ";
        getchar();
        getline(cin, addr);
        // setAddress(address);
        cout << "Enter Date of Birth : ";
        birthdate.accept();
    }


     void displayData()
    {
        cout << "\nName :-> " << name << endl;
        cout << "\nAddress :=> " << addr << endl;
        // cout << "\nAddress :=> " << getAddress() << endl;
        cout << "\nDate of Birth is => " << endl;
        birthdate.display();
    }
};

int main()
{
   Person P;

    P.acceptData();

    P.displayData();

    return 0;
}