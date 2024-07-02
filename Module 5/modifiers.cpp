#include<iostream>
using namespace std;
int main()
{
    //string a="Hello";
    //string b="World";
    //string b="A";
    //a+=b;
    //a.append(b); 
    //cout << a << endl;
    //cout << b << endl;
    //a="HelloA"; -> works
    //a=a+b; -> works  
    //a[5]='A'; -> didn't work
    // a.push_back('A'); //works
    // a.pop_back();
    // cout << a << endl;

    //a="Gelo";
    //a.assign("Gelo");
    //cout << a << endl;

    string a="HelloWorld";
    //a.erase(4,1);
    //a.replace(4,1,"g");
    //a.replace(5,0,"Shihab");
    a.insert(5,"Shihab");
    cout << a << endl;

    return 0;
}