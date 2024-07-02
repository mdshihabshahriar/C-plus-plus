#include<iostream>
#include<sstream>
using namespace std;
string reversewrd(string& s)
{
    stringstream ss(s);
    string word,result;
    while(ss>>word)
    {
        reverse(word.begin(),word.end());
        result += word + " ";
    }
    if(!result.empty())
    {
        result.pop_back();
    }
    return result;
}
int main()
{
    string s;
    getline(cin,s);
    string result=reversewrd(s);
    cout << result << endl;
    return 0;
}
