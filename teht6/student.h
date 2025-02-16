#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
public:
    Student(string N, int A);




    void printStudentInfo();


    int getAge() const;
    void setAge(int A);

    string getName() const;
    void setName(const string &N);

private:
    string Name;
    int Age;
};

#endif // STUDENT_H
