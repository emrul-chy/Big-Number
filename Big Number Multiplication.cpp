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

string strmul(string s1, string s2)
{
    string m, a;

    int i, l, ll, j, c, s=0;

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    if(s1.size() > s2.size())
    {
        swap(s1, s2);
    }

    l = s1.size();
    ll = s2.size();

    j=0;
    m = "", a = "";
    for(i=0; i<ll; i++)
    {
        c = 0;

        m="";
        for(j=0; j<l; j++)
        {
            s = (s1[j]-'0') * (s2[i] - '0') + c;
            c = s / 10;
            m += (s % 10) + '0';
        }

        if(c > 0)
        {
            m += c % 10 + '0';
        }

        int k;
        reverse(m.begin(), m.end());
        for(k=j; k<j+i; k++)
        {
            m += "0";
        }
        reverse(m.begin(), m.end());

        if(i == 0)
        {
            a=m;
        }

        if(i != 0)
        {
            c = 0;
            reverse(a.begin(), a.end());
            reverse(m.begin(), m.end());
            a = stradd(a, m);
            reverse(a.begin(), a.end());
        }
    }

    int flg = 0;
    for(i=0; i<a.size(); i++)
    {
        if(a[i] != '0')
        {
            flg = 1;
            break;
        }
    }
    if(flg == 0)
    {
        a = "0";
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

    /* String Multiplication */
    cout << strmul(a, b) << endl;

    /* String Addition */
    cout << stradd(a, b) << endl;
    return 0;
}
