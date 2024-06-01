// switch instead of multiple if else statements
#include <iostream>
using namespace std;
int main()
{
    cout << "choose a button: ";
    char button;
    cin >> button;

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
        cout<<"Please choose from abcdef."
    }
}