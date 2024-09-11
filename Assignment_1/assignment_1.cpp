#include<iostream>

using namespace std;

struct Date
{
    int day;
    int month;
    int year;


void initDate(struct Date* ptrDate)
{
    cout<<"Enter the date in dd mm yyyy: ";
    cin>>"%d %d %d",&ptrDate->day,&ptrDate->month,&ptrDate->year;
}

void printDateOnConsole(struct Date* ptrDate)
{
    cout<<"%d/%d/%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    cin>>"%d %d %d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}

};

int main()
{
    int choice;

    cout<<"\n 1.Initialize date :\n 2.Print date : \n 3. Accept the date : \n 4.Exit \n";
    cout<<"\n Enter your choice : ";
    
    switch(choice)
    {
    case 1:
            cout<<"\nInitialize the date : %p",initDate());
            break;

    case 2:
            cout<<"\nPrint date : %p",printDateOnConsole());
            break;

    case 3:
            cout<<"\nAccept the input : %p",acceptDateFromConsole());
            break;       

    default:
            cout<<"\nInvaid Input !!");

    }
    cout<<"\nEnd of the program..");
}
