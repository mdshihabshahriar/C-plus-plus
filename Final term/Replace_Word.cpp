#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    while (n--) 
    {
        string s, a;
        cin >> s >> a;

        int wrd = s.find(a);

        while (wrd != -1 && wrd != s.length()) 
        {
            s.replace(wrd, a.length(), "#");
            wrd = s.find(a, wrd + 1);
        }
        cout << s << endl;
    }
    return 0;
}
