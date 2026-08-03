#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        
        string s;
        cin >> s;

        // for (int i = 0; i < s.size(); i++)
        // {
        //     if (s[i] == '0')
        //     {
        //         s.erase(i, 1);
        //         break;
        //     }
        // }

        // for (int i = 0; i < s.size(); i++)
        // {
        //     if (s[i] == '1')
        //     {
        //         s.erase(i, 1);
        //         break;
        //     }

        // }

        auto pos = s.find('0');

        if (pos != string::npos)
            s.erase(pos, 1);

        pos = s.find('1');

        if (pos != string::npos)
            s.erase(pos, 1);

        cout << s << "\n";
    }
    return 0;
}