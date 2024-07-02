#include<iostream>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    // Student(int r,int c,double g)
    // {
    //     roll=r;
    //     cls=c;
    //     gpa=g;
    // } 
    // ekvabe korlei hoy....

    Student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};

int main()
{
    Student Rahim(23,9,4.92);
    Student Karim(47,9,4.83);

    cout << Rahim.roll <<" "<< Rahim.cls <<" "<< Rahim.gpa <<endl;
    cout << Karim.roll <<" "<< Karim.cls <<" "<< Karim.gpa <<endl;
    return 0;
}



