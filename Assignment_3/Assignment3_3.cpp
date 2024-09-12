#include<iostream>
using namespace std;
class  Address {

    string building;
    string street;
    string city;
    int pin;


    public:
    Address()
    {
        building="Sunbeam  ";
        street="shavivarpeth   ";
          city="karad   ";
          pin=415110;
    }
    void setBuilding(){
        cout<<"enter the building name"<<endl;
        cin>>building;

    }
      void setStreet(){
        cout<<"enter the street name"<<endl;
        cin>>street;

    }
      void setcity(){
        cout<<"enter the city name"<<endl;
        cin>>city;

    }
      void setpin(){
        cout<<"enter the pin number"<<endl;
        cin>>pin;

    }
    void getBuilding(){
        cout<<"buliding name is : "<<building<<"  "<<endl;
    }
    void getStreet(){
        cout<<"street name is : "<<street<<"  "<<endl;
    }
    void getcity(){
        cout<<"buliding name is : "<<city<<"  "<<endl;
    }
    void getpin(){
        cout<<"buliding name is : "<<pin<<"  "<<endl;
    }
    void accept(){
         cout<<"enter the building name"<<endl;
        cin>>building;

         cout<<"enter the street name"<<endl;
        cin>>street;

         cout<<"enter the city name"<<endl;
        cin>>city;


        cout<<"enter the pin number"<<endl;
        cin>>pin;

    }

    void display(){
    
    cout<<"building name is :"<<building<<"  "<<"street name is :"<<street<<"  "<<"city name is :"<<city<<"  "<<"pincode is :"<<pin<<"  "<<endl;

    }


};

int menu()
{
    int choice;
     cout<<"0. EXIT "<<endl ;
     cout<< "1. set building name "<<endl;
     cout<<"2. set street name  "<<endl;
     cout<< "3. set city name "<<endl;
     cout<< "4. set pin number "<<endl;
     cout<< "5. accept all values "<<endl;
     cout<< "6. get building name  "<<endl;
     cout<< "7. get street name  "<<endl;
     cout<< "8. get city name  "<<endl;
     cout<< "9. get pin number  "<<endl;
     cout<< "10. get all address "<<endl;



    cin>>choice;
    return choice;
}
int main()
   {
       int choice;
     Address a1;
    
     while ((choice=menu())!=0)
     {
       switch (choice)
       {
       case 1:
           a1.setBuilding() ;
         break;
         case 2:
          a1.setStreet();
          break;
          case 3:
          a1.setcity();
          break;
          case 4:
          a1.setpin();
              break;
         case 5:
         a1.accept();
         break;
         case 6:
         a1.getBuilding();
         break;
         case 7:
         a1.getStreet();
         break;
         case 8:
         a1.getcity();
        break;
        case 9:
        a1.getpin();
        break;
        case 10:
        a1.display();
        break;
       default:
            cout<<"Wrong Choice..."<<endl;
         break;
       }
     }
     
     
     
   }

