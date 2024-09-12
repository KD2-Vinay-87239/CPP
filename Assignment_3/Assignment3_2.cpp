#include<iostream>
using namespace std;
class  Tollbooth {
    int totalnocar;
    double totAmtMoney;
    int totalnonpayingcar;

    public :

    Tollbooth(){
        totalnocar=0;
        totAmtMoney=0;
        totalnonpayingcar=0;
    }
    void PayingCar(){
        totalnocar+=1;
        totAmtMoney+=0.5;
    }
    void nopaycar(){
        totalnonpayingcar+=1;
        totalnocar=totalnocar+totalnonpayingcar;
    }
    void PrintOnConsole(){

        cout<<"total number of car's....="<<totalnocar<<endl;
        cout<<"total number of nonpayingcar's....="<<totalnonpayingcar<<endl;
        cout<<"total AMT is....="<<totAmtMoney<<endl;
    }


};

int menu()
{
    int choice;
    cout<<"0. EXIT "<<endl ;
     cout<<"press 1 to paying car"<<endl ;
     cout<< "press 2 for nonpaying car"<<endl;
     cout<<" press 3 to see total number of cars and total Amt "<<endl;
     cout<< " Enter Your Choice "<<endl;
    cin>>choice;
    return choice;
}
int main()
   {
       int choice;
     Tollbooth t1;
    
     while ((choice=menu())!=0)
     {
       switch (choice)
       {
       case 1:
         t1.PayingCar();
         break;
         case 2:
          t1.nopaycar();
          break;
          case 3:
          t1.PrintOnConsole();
          break;
       default:
            cout<<"Wrong Choice..."<<endl;
         break;
       }
     }
     
     
     
   }

