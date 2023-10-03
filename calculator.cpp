#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    float num1, num2, result;
    char oper;

    cout<<"\t******CALCULATOR*******"<<endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> oper;


     cout<<endl<<"\t******CALCULATING*******"<<endl;
     cout<<endl<<"press any key to continue"<<endl;
     getch();
    if (oper == '+')
        {
        result = num1 + num2;
        }

     else if (oper == '-')
        {
        result = num1 - num2;
        }
     else if (oper == '*')
        {
        result = num1 * num2;
        }
     else if (oper == '/')
        {
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
            {
            cout << "Error: Division by zero!" << endl;
            return 0;
            }
         }
     else
        {
        cout << "Invalid operator." << endl;
        return 0;
        }


    cout <<endl<< "Result: " << result << endl;

    return 0;
}

