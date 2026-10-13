#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p[1000];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    int cnt = 0;
    bool found = true;
    while (found)
    {
        found = false;
        for (int i = 0; i + 1 < n; i++)
        {
            if (p[i] == p[i + 1])
            {
                int j = i;
                while (j < n && p[j] == p[i])
                    j++;
                int len = j - i;
                for (int q = j; q < n; q++)
                    p[q - len] = p[q];
                n -= len;
                cnt += len;
                found = true;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
