#include <iostream>
// #include <stack>
using namespace std;

class Stack
{

public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (!isFull())
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop()
    {
        if (!isEmpty())
        {
            top--;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top - 1 == size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void print()
    {
        while (top != -1)
        {
            cout << peek() << endl;
            top--;
        }
    }
};

int main()
{

    Stack *st = new Stack(5);

    st->push(22);
    st->push(43);
    st->push(44);
    st->push(22);
    st->push(43);
    st->push(44);

    cout << st->peek() << endl;

    st->pop();

    cout << st->peek() << endl;

    st->pop();

    cout << st->peek() << endl;

    st->pop();

    cout << st->peek() << endl;

    delete st;
    st = NULL;

    return 0;
}