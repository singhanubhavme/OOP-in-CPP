#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rollNo;
    long long int phoneNumber;
    string address;
};
int main()
{
    Student std1, std2;
    std1.name = "Sam";
    std1.rollNo = 1;
    std1.phoneNumber = 9999999999;
    std1.address = "Somewhere on the earth";
    std2.name = "John";
    std2.rollNo = 2;
    std2.phoneNumber = 8888888888;
    std2.address = "Also Somewhere on the earth";
    cout << "Student 1 : " << endl;
    cout << "Name -> " << std1.name << endl;
    cout << "Roll No -> " << std1.rollNo << endl;
    cout << "Phone Number -> " << std1.phoneNumber << endl;
    cout << "Address -> " << std1.address << endl;
    cout << "Student 2 : " << endl;
    cout << "Name -> " << std2.name << endl;
    cout << "Roll No -> " << std2.rollNo << endl;
    cout << "Phone Number -> " << std2.phoneNumber << endl;
    cout << "Address -> " << std2.address << endl;
    return 0;
}