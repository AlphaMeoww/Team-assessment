#include<iostream>
#include<algorithm>

using namespace std;

const long long max1 = 1e6;
int quan[25], m[25], f[max1];
int n, money;

int main()
{
    cin >> money >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m[i] >> quan[i];
        quan[i] *= m[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = money; j >= m[i]; j--)
        {
            f[j] = max(f[j], f[j - m[i]] + quan[i]);
        }
    }
    cout << f[money] << endl;
    return 0;
}
