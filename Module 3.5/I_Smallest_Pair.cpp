#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    int minResult=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int result=a[i]+a[j]+j-i;
            minResult=min(minResult,result);
        }
        
    }
    cout << minResult << endl;
    }
    return 0;
}


