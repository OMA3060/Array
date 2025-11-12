#include <iostream>
using namespace std;
class Stack
{
private:
    int top;
    int size;
    int *stack;

public:
    Stack(int size)
    {
        this->size = size;
        stack = new int[size];
        top = -1;
    }
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "the Array Is Full";
        }
        else
        {
            stack[++top] = value;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "the Array Is Empty";
        }
        else
        {
            int temp = stack[top];
            top--;
        }
    }
    void peek()
    {
        if (top == -1)
        {
            cout << "the Array IS Empty";
        }
        else
        {
            cout << stack[top];
        }
    }
    void display()
    {
        if (top == -1)
        {
            cout << "the Array Is Empty";
        }
        else
        {

            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << " ";
            }
        }
    }
    ~Stack()
    {
        delete[] stack;
    }
};
int main()
{
    int length, size, choice;
    cout << "Enter The Size Of THe Array : ";
    cin >> size;
    Stack ob1(size);

    do
    {
        cout << "\t\t\tWelcome To My Stack Program";
        cout << "1) Add An Element \n";
        cout << "2) delete The Last Input \n";
        cout << "3) print The first element \n";
        cout << "4) print the entire array  \n\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            if (length == 0)
            {
                cout << "the Array Is Full";
            }
            else
            {
                int value;
                cout << "Enter The value:  ";
                cin >> value;
                ob1.push(value);
                length++;
            }
        }
        case 2:
        {
            if (length == 0)
            {
                cout << "the Array Is Full";
            }
            else
            {
                ob1.pop();
                length--;
            }
        }
        case 3:
        {
            if (length == 0)
            {
                cout << "the Array Is Full";
            }
            else
            {
                ob1.peek();
            }
        }
        case 4:
        {
            if (length == 0)
            {
                cout << "the Array Is Full";
            }
            else
            {
                int value;
                cout << "Enter The Vlaue:  ";
                cin >> value;
                ob1.push(value);
                length++;
            }
        }
        }

    } while (length != size);
}