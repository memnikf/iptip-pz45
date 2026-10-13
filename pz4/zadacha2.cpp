#include <iostream>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    bool can = k < n * m && (k % n == 0 || k % m == 0);
    if (can)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
