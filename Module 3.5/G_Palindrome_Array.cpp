#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int palindrome=1;
    for (int i = 0 ,j=n-1; i < j; i++,--j)
    {
        if (a[i] != a[j])
        {
            palindrome=0;
            break;
        }
    }
    
    if (palindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}