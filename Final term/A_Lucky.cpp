#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ticket;
        cin >> ticket;

        int sumfirst=0;
        int sumsecond=0;

        for (int i = 0; i < 3; i++)
        {
            sumfirst+=ticket[i]-'0';
        }
        
        for (int i = 3; i < 6; i++)
        {
            sumsecond+=ticket[i]-'0';
        }
        
        if (sumfirst==sumsecond)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
    return 0;
}

