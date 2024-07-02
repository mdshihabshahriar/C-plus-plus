#include<iostream>
using namespace std;
namespace Rakib
{
    int age=25;
    void hello()
    {
        cout << "Rakib er namespaces"<< endl;
    }
}   
    namespace Sakib
    {
        int age=30;
        void hello()
        {
            cout << "Sakib er namespaces"<< endl; 
        }
    }

using namespace Rakib;
int main()
{
    cout << age << endl;
    hello();
    Sakib::hello();
    return 0;
}