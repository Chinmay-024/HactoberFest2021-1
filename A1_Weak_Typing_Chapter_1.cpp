#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
const int N = 1e5 + 7;
const int MOD = 1e9 + 7;
//cout << fixed << setprecision(10);
//sorting
/* int n = sizeof(arr) / sizeof(arr[0]);
     sort(arr, arr + n);*/
//__gcd(m, n)
int main()
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int qi = 0; qi < t; qi++)
    {
        int n;
        string s;
        cin >> n >> s;
        char ch = 'X';
        int i;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'X' || s[i] == 'O')
            {
                ch = s[i];
                break;
            }
        }
        i++;
        int count = 0;
        for (; i < n; i++)
        {
            if (ch == 'X')
            {
                if (s[i] == 'O')
                {
                    ch = 'O';
                    count++;
                }
            }
            if (ch == 'O')
            {
                if (s[i] == 'X')
                {
                    ch = 'X';
                    count++;
                }
            }
        }
        cout << "Case #" << qi + 1 << ": " << count << "\n";
    }
    return 0;
}