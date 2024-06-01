// simple calculator with switch statements
#include <iostream>
using namespace std;
int main()
{
    double num1,num2;
    cout<<"enter num1: ";
    cin>>num1;
    cout<<"enter num2: ";
    cin>>num2; 
    
    char op;
    cout<<"choose operator: + - * / : ";
    cin>>op;
    switch(op)
    {
    case '+':
        cout<<num1 +num2<<endl;
        break;
    case '-':
        cout<<num1 -num2<<endl;
        break;
    case '*':
        cout<<num1* num2<<endl;
        break;
    case '/':
        cout<<num1 /num2<<endl;
        break;
    default:
        cout<<"enter correct operator"<<endl;
        break; 
        
    }

    
    /*
    cout << "choose a button: ";
    char button;
    cin >> button;
 //break is used in switch so that after execution of req, others dont get executed.
    switch (button)
    {
    case 'a':
        cout << "Hello " << endl;
        break;
    case 'b':
        cout << "Hallo  " << endl;
        break;
    case 'c':
        cout << "Namaste " << endl;
        break;
    case 'd':
        cout << "Bonjour " << endl;
        break;
    case 'e':
        cout << "Ciao " << endl;
        break;
    case 'f':
        cout << "こんにちは " << endl;
        break;
    //default when no case matches
    default:
        cout<<"Please choose from abcdef.";
    }
*/

}