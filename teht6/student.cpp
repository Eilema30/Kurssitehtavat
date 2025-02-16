#include "student.h"

Student::Student(string N, int A) {}

void Student::printStudentInfo()
{
cout << "Name: " << Name << ", Age: " << Age << endl;
}

int Student::getAge() const
{
    return Age;
}

void Student::setAge(int A)
{
    Age = A;
}

string Student::getName() const
{
    return Name;
}

void Student::setName(const string &N)
{
    Name = N;
}
