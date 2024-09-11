// Students menu driven program

#include <iostream>
using namespace std;

class student

{
    public:
    int roll;
    string name;
    int mrks;

   

    void printStudent()
    {
        
        cout << "Student Details : " << endl;
        cout << "Roll no. :- " << roll << endl;
        cout << "Name :- " << name << endl;
        cout << "Marks :- " << mrks << endl;
    }
 void init_Student()
    {
        roll = 6;
        name = " ram";
        mrks = 30;
        //cout << "Enter the student details :" << endl;
        //cin >> roll >> name >> mrks;
    }

    void acceptStudent()
    {
        //student s2;
        cout << "Enter details of students : " << endl;
        cin >> roll >> name >> mrks;
    }
};


int demo()
{
    int choice;
    cout << "\n0. Exit :" << endl;
    cout << "1.Initialize Details :" << endl;
    cout << "2.Accept Details :" << endl;
    cout << "3. Print Details : " << endl;
    cout << "Enter your choice : " << endl;
    cin >> choice;
    return choice;
}

int main()
{
    student s2;
    int choice;

    while ((choice = demo()) != 0)
    {
        switch (choice)
        {
        case 1:
           s2.init_Student();
            break;

        case 2:
            s2.acceptStudent();
            break;

        case 3:
            s2.printStudent();
            break;    
        
        default:
            cout << "Exit..!!";
            break;
        }
    }

    return 0;
}