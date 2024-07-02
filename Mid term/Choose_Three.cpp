#include<iostream>
using namespace std;
string fun(int N,int S,int a[])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            for (int k = j+1; k < N; k++)
            {
                if (a[i]+a[j]+a[k] ==S)
                {
                    return "YES";
                }
                
            }
            
        }
        
    }
    return "NO";
}
int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int N,S;
        cin >> N >> S;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        cout << fun(N,S,a) << endl;
    }
    return 0;
}