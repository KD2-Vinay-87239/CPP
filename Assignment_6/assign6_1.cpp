#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void setDay(int day)
    {
        this->day = day;
    }

    void setMonth(int month)
    {
        this->month = month;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    void acceptDate()
    {
        cout << " day, month and year - ";
        cin >> day >> month >> year;
    }

    void displayDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Person
{
    string name;
    string address;
    Date birthDate;

public:
    Person()
    {
        this->name = "";
        this->address = "";
    }

    Person(string name, string address, int day, int month, int year) : birthDate(day, month, year)
    {
        this->name = name;
        this->address = address;
        // this->birthDate.setDay(day);
        // this->birthDate.setMonth(month);
        // this->birthDate.setYear(year);
    }

    void acceptData()
    {
        cout << "\nEnter Name of person : ";
        cin >> name;

        cout << "\nEnter address : ";
        getchar();
        getline(cin, address);
        cout << "Enter Date of Birth : ";
        birthDate.acceptDate();
    }

    void displayData()
    {
        cout << "\nName :-> " << name << endl;
        cout << "\nAddress :=> " << address << endl;
        cout << "\nDate of Birth is ==> " << endl;
        birthDate.displayDate();
    }
};

class Employee : public Person
{
    const int id;
    double sal;
    string dept;
    static int count;
    Date joiningDate;

public:
    Employee() : id(++count)
    {
        this->sal = 0;
        this->dept = "";
    }
    Employee(double sal, string dept, int day, int month, int year) : joiningDate(day, month, year), id(++count)
    {
        // Person::acceptData;

        this->sal = sal;
        this->dept = dept;
    }

    void acceptData()
    {
        cout << "Enter salary: " << endl;
        cin >> sal;
        cout << "Enter department: " << endl;
        cin >> dept;
        cout << "Enter Joining date :";
        joiningDate.acceptDate();
    }
    void displayData()
    {
        cout << "salary is: " << sal << endl;
        cout << "department is: " << dept << endl;
        cout << "Date Of joining is :";
        joiningDate.displayDate();
    }
};

int Employee::count = 0;

int main()
{

    Person *P = new Employee;
    P->acceptData();
    Employee *ptr = (Employee*)P;
    ptr->acceptData();
    P->displayData();
    ptr->displayData();

    return 0;
}
