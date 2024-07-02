#include<iostream>
#include<algorithm>
using namespace std;
int fun(int a[],int n)
{
    int maximum = *max_element(a,a+n);
    return maximum;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maximum = fun(a,n);
    cout << maximum << endl;
    return 0;
}

