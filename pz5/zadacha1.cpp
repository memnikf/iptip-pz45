#include <iostream>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    int n;
    for (n = 1; x < y; n++)
        x = x * 1.1;
    cout << n << endl;
    return 0;
}
