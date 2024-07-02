#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    string s = "Shihab";
    string s1 = "MD Shahriar";
    copy(s1.begin()+3,s1.begin(),back_inserter(s));
    cout << s ;
    return 0;
}
