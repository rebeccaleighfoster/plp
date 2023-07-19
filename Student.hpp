#ifndef STUDENT_H
#define STUDENT_H

#include "Person.hpp"

class Student : public Person {
private:
    std::string major;
    double GPA;

public:
    Student(const std::string& name, const std::string& birthdate, const std::string& major, double GPA);
    void setMajor(const std::string& major);
    std::string getMajor() const;
    void setGPA(double GPA);
    double getGPA() const;
    std::string convertGPAToLetter() const;
    std::string toString() const;
};

#endif // STUDENT_H
