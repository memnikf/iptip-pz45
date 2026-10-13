#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    char op;
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        if (b == 0)
            cout << "Error" << endl;
        else if (a % b == 0)
            cout << a / b << endl;
        else
            cout << (double)a / b << endl;
        break;
    }
    return 0;
}
