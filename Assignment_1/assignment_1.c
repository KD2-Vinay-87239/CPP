#include<stdio.h>
#include<conio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date* ptrDate)
{
    printf("Enter the date in dd mm yyyy: ");
    scanf("%d %d %d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("%d/%d/%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    scanf("%d %d %d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}


int main()
{
    int choice;

    printf("\n 1.Initialize date :\n 2.Print date : \n 3. Accept the date : \n 4.Exit \n");
    printf("\n Enter your choice : ");
    
    switch(choice)
    {
    case 1:
            printf("\nInitialize the date : %p",initDate());
            break;

    case 2:
            printf("\nPrint date : %p",printDateOnConsole());
            break;

    case 3:
            printf("\nAccept the input : %p",acceptDateFromConsole());
            break;       

    default:
            printf("\nInvaid Input !!");

    }
    printf("\nEnd of the program..");
}
