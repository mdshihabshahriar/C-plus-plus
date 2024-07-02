#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
        int id;
        string name;
        char section;
        int totalMarks;
};
void fun(Student a[])
{
    int highestMarks=-1;
    int highestID=-1;
    for (int i = 0; i < 3; i++)
    {
        if (a[i].totalMarks>highestMarks || (a[i].totalMarks == highestMarks && a[i].id < highestID))
        {
            highestMarks=a[i].totalMarks;
            highestID=a[i].id;
        }
        
    }
    cout << highestID <<" "<< a[highestID-1].name <<" "<< a[highestID-1].section<<" "<< highestMarks << endl;
}
int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        Student a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i].id >> a[i].name >> a[i].section >> a[i].totalMarks;
        }
        fun(a);
    }
    return 0;
}