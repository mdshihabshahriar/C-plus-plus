#include <iostream>
#include <string>
using namespace std;

bool fun(string& s) 
{
    int found = s.find(" Jessica ");
    return (found != -1);
}

int main() 
{
    string s;
    getline(cin, s); 
    s += ' ';

    if (fun(s)) 
    {
        cout << "YES" << endl;
    } else 
    {
        cout << "NO" << endl;
    }
    return 0;
}
