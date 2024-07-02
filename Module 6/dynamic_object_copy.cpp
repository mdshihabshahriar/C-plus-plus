#include<iostream>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }  
};
int main()
{
    Person* rakib=new Person("Rakib Hasan",24);
    Person* sakib=new Person("Sakib Hasan",25);
    
    //rakib=sakib;
    //rakib->name=sakib->name;
    //rakib->age=sakib->age;
    *rakib=*sakib;
    delete sakib;
    cout << rakib->name <<" "<< rakib->age << endl;
    return 0;
}