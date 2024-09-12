#include <iostream>
using namespace std;
class Box
{

    int length;
    int width;
    int height;

public:
    Box()
    {

        length = 10;
        width = 20;
        height = 30;
    }
    Box(int a)
    {

        length = a;
        width = a;
        height = a;
    }
    Box(int a, int b, int c)
    {

        length = a;
        width = b;
        height = c;
    }
    int CalculateVolume()
    {
        int v;
        v = length * width * height;

        return v;
    }

    void display()
    {
        cout << "Box  = " << CalculateVolume() << "  :" << endl;
    }
};
int menu()
{
    int choice;
    cout << "0. EXIT " << endl;
    cout << "1. with no parameters" << endl;
    cout << "2. with single parameter " << endl;
    cout << "3. with multiple parameters " << endl;
    cout << " Enter Your Choice " << endl;
    cin >> choice;
    return choice;
}
int main()
{

    int choice;
    int a, b, c;

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
        {
            Box v1;
            v1.CalculateVolume();
            v1.display();
        }
        break;
        case 2:
        {
            cout << "enter single parameter..." << endl;
            cin >> a;
            Box v1(a);
            v1.CalculateVolume();
            v1.display();
        }
        break;

        case 3:
        {
            cout << "enter maultipale parameter..." << endl;
            cin >> a >> b >> c;
            Box v1(a, b, c);
            v1.CalculateVolume();
            v1.display();
        }
        break;
        default:
            cout << "Wrong Choice..." << endl;
            break;
        }
    }
}
