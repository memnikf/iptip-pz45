#include <iostream>
#include <string>

using namespace std;

int main()
{
    string th[] = {"", "M", "MM", "MMM"};
    string h[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string t[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string u[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int x;
    cin >> x;
    cout << th[x / 1000] + h[x / 100 % 10] + t[x / 10 % 10] + u[x % 10] << endl;
    return 0;
}
