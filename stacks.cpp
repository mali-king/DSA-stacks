#include <iostream>

using namespace std;

class Stack
{
    private : 
    int top;
    int myArray[5];

    public:

    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            myArray[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++; //top becomes 0
            myArray[top] = val;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        else
        {
            int popValue = myArray[top];
            myArray[top] = 0;
            top -- ;
            return popValue;
        }
    }

    int count()
    {
        return (top + 1);
    }

    int peak(int pos)
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            return myArray[pos];
        }
    }

    void change(int pos, int val)
    {
        myArray[pos] = val;
        cout << "Value changed at location " << pos << endl;
    }

    void display()
    {
        cout << "All values in the stack are: " << endl;
        for (int i = 4; i >= 0; i--)
        {
            cout << myArray[i] << " ";
        }
    }
};

int main()
{
    Stack s1;
    int option, position, value;

    do
    {
        cout << "STACK MANIPULATION MENU " << endl;
        cout << "============================================" << endl;

        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. peek" << endl;
        cout << "6. count()"<< endl;
        cout << "7. change()" << endl;
        cout << "8. display()" << endl;
        cout << "9. clear screen" << endl;

        cout << "============================================" << endl;

        cout << "What operation would you like to perform? Select option number or Enter 0 to exit the program." << endl;
        cin >> option;

        
        switch(option)
        {
            case 0:
            break;

            
            case 1: 
            cout << "Enter push value: ";
            cin >> value;
            s1.push(value);
            break;

            case 2: 
            cout << "Pop funcation called - popped value: " << s1.pop() << endl;
            break;

            case 3:
            if (s1.isEmpty())
            {
                cout << "Stack is empty " << endl;
            }
            else
            {
                cout << "Stack is not empty " << endl;
            }
            break;

            case 4: 
            if (s1.isFull())
            {
                cout << "Stack is full " << endl;
            }
            else
            {
                cout << "Stack is not fall " << endl;
            }
            break;

            case 5:
            cout << "Enter position of item to peek: " << endl;
            cin >> position;
            cout << "Peek function called -Position is " << position << "is " << s1.peak(position) << endl;
            break;

            case 6:
            cout << "Count funtion called: Number of items in the stack are: " << s1.count() << endl;

            case 7:
            cout << "Change Function called - " << endl;
            cout << "Enter the postion of item you want to change: ";
            cin >> position;
            cout << endl;
            cout << "Enter the value of item you want to change: ";
            cin >> value;
            s1.change(position, value);
            break;

            case 8 :
            cout << "Display Function called -" << endl;
            s1.display();
            break;

            case 9:
            system("cls");
            break;

            default:
            cout << "Enter a proper option number" << endl;

        }

    }while (option != 0);


    return 0;
}