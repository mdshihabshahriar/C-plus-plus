#include<iostream>
using namespace std;
int main()
{
    long long A,B,C;
    char S,Q;
    cin >> A >> S >> B >> Q >> C;
    if((S=='+' && A+B==C)||(S=='-' && A-B==C)||(S=='*' && A*B==C))
    {
        cout << "Yes" << endl;
    }
    else
    {
        if (S=='+')
        {
            cout << A+B << endl;
        }
        else if (S=='-')
        {
            cout << A-B << endl;
        }
        else if (S=='*')
        {
            cout << A*B << endl;
        }
    }
    return 0;
}