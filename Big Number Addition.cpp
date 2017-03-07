// Author: Emrul Chowdhury

#include <bits/stdc++.h>
using namespace std;

string stradd(string s1, string s2)
{
    int i;
    string a;
    if(s2.size() < s1.size())
    {
        swap(s1, s2);
    }
    int flg = 0;

    int j, s=0, c=0, l=s1.size(), ll = s2.size();

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    for(j=l; j<ll; j++)
    {
        s1 += "0";
    }
    for(j=0; j<ll; j++)
    {
        s = (s1[j]-'0') + (s2[j] - '0')+c;
        c = s / 10;
        a += (s % 10) + '0';
    }

    if(c > 0)
    {
        a += c % 10 + '0';
    }

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    reverse(a.begin(), a.end());
    return a;
}

int main()
{
    string a, b;

    cin >> a >> b;

    /* String Addition */
    cout << stradd(a, b) << endl;
    return 0;
}
