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
        int n1;
        string s1;
        cin >> n1 >> s1;
        string s="";
        for(int i=0;i<n1;i++)
        {
            if(s1[i]=='.')
            {
                s=s+s;
            }
            else
            {
                s=s+s1[i];
            }
        }
        ll n=s.size();
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
        int l=1;
        for (; i < n; i++)
        {l++;
            if (ch == 'X')
            {
                if (s[i] == 'O')
                {
                    ch = 'O';
                    count=(count%MOD+(i-l+2%MOD)*(n-i)%MOD)%MOD;
                    l=1;
                }
                else if(s[i]=='X')
                l=1;
            }
            if (ch == 'O')
            {
                if (s[i] == 'X')
                {
                    ch = 'X';
                    count=(count%MOD+(i-l+2%MOD)*(n-i)%MOD)%MOD;
                    l=1;
                }
                else if(s[i]=='O')
                l=1;
            }
        }
        cout << "Case #" << qi + 1 << ": " << count%MOD << "\n";
    }
    return 0;
}