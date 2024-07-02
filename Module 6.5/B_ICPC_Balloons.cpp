#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
         int solved[26]={0};
         int totalballons = 0; 
         for (int i = 0; i < n; i++)
         {
            int prob = s[i]-'A';
         
         if (solved[prob]==0)
         {
            totalballons+=2;
            solved[prob]=1;
         }
         else
         {
            totalballons+=1;
         }
         }
         cout << totalballons << endl;
    }
    return 0;
}