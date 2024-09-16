#include <iostream>
using namespace std;

class Student
{
    string name;
    char gender;
    int marks[3];
    const int roll;
    static int rollNumber;

public:
    Student() : roll(++rollNumber)
    {
        name = "";
        gender = 'M';
        for (int i = 0; i < 3; i++)
        {
            marks[i] = 0;
        }
    }

    int getID()
    {
        return roll;
    }

    void acceptData()
    {
        cout << "Enter name of student : ";
        cin >> name;

        cout << "Enter Gender M/F : ";
        cin >> gender;

        cout << "Enter marks for three sub : ";
        for (int i = 0; i < 3; i++)
        {
            cout << "Subject - " << (i + 1) << " : ";
            cin >> marks[i];
        }
    }

    double calPercentage()
    {
        int totalMarks = 0;

        for (int i = 0; i < 3; i++)
        {
            totalMarks = totalMarks + marks[i];
        }
        return totalMarks / 3.0;
    }

    void displayData()
    {
        cout << "Name is : " << name << endl;
        cout << "Roll Number : " << roll;
        cout << "Gender is : " << gender << endl;
        cout << "Percentage = " << calPercentage() << "%" << endl;
    }
};
int Student::rollNumber = 0;

int search(int num, Student **ary)
{
    for (int i = 0; i < 3; i++)
    {
        if (num == ary[i]->getID())
            return i;
    }
    return -1;
}

int main()
{
    Student *arr[3]; // Array of pointers to Student objects
    int choice, count = 0;
    for (int i = 0; i < 3; i++)
    {
        arr[i] = new Student();
    }

    do
    {
        cout << "\nMenu:\n";
        cout << "0. Exit\n";
        cout << "1. Add student\n";
        cout << "2. Print student details\n";
        cout << "3. Search student\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count < 5)
            {
                // arr[count] = new Student();
                arr[count]->acceptData();
                count++;
            }
            else
            {
                cout << "Maximum students reached!\n";
            }
            break;
        case 2:
            for (int i = 0; i < count; ++i)
            {
                cout << "\nStudent " << (i + 1) << " details:\n";
                arr[i]->displayData();
            }
            break;
        case 3:
            int searchRoll;
            cout << "Enter roll number to search: ";
            cin >> searchRoll;
            

            cout << search(searchRoll, arr);
            break;
        case 4:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    for (int i = 0; i < count; ++i)
    {
        delete arr[i];
        arr[i] = NULL;
    }

    return 0;
}