#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while (a != b)
    {
        if (a % 2 == 1 || a / 2 < b)
        {
            cout << "-1" << endl;
            a--;
        }
        else
        {
            cout << ":2" << endl;
            a /= 2;
        }
    }
    return 0;
}
