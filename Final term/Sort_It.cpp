#include<iostream>
using namespace std;
class Student
{
    public:
        string name;
        int cls;
        char section;
        int id;
        int math_marks;
        int eng_marks;
        int total_marks;
};
void students(Student &a,Student &b)
{
    swap(a,b);
}
bool cmp(Student &a,Student &b)
{
    int x=a.math_marks + a.eng_marks;
    int y=b.math_marks + b.eng_marks;
    if(x!=y)
    {
        return x>y;
    }
    return a.id < b.id;
}
void fun(Student a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(!cmp(a[j],a[j+1]))
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    Student a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        a[i].total_marks = a[i].math_marks + a[i].eng_marks;
    }
    fun(a,n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name <<" "<< a[i].cls <<" "<< a[i].section <<" "<< a[i].id <<" "<< a[i].math_marks <<" "<< a[i].eng_marks << endl;
    }
    return 0;
}