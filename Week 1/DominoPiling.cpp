#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2] && s[i] == 'x')
            c++;
    }
    cout << c << endl;
 
    return 0;
}
