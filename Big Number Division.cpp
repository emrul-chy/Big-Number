// Author: Emrul Chowdhury

#include <bits/stdc++.h>
#define LL long long int
using namespace std;

string strdiv(string s, LL n)
{
    LL i, flg = 0, sum = 0, t;
    string ans;
    for(i=0; i<s.size(); i++)
    {
        sum = sum * 10 + (s[i]-'0');
        t = sum / n;
        if(t == 0 && flg == 0)
        {
            continue;
        }
        else
        {
            ans += (t + '0');
            flg = 1;
            sum = (sum % n);
        }
    }
    if(flg == 0)
        ans = "0";
    return ans;
}

int main()
{
    string s;
    LL n;
    cin >> s >> n;
    cout << strdiv(s, n) << endl;
    return 0;
}
