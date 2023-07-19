#include "Student.hpp"

Student::Student(const std::string& name, const std::string& birthdate, const std::string& major, double GPA)
    : Person(name, birthdate), major(major), GPA(GPA) {}

void Student::setMajor(const std::string& major) {
    this->major = major;
}

std::string Student::getMajor() const {
    return major;
}

void Student::setGPA(double GPA) {
    this->GPA = GPA;
}

double Student::getGPA() const {
    return GPA;
}

std::string Student::convertGPAToLetter() const {
    if (GPA >= 3.7) {
        return "A";
    } else if (GPA >= 3.3) {
        return "A-";
    } else if (GPA >= 3.0) {
        return "B+";
    } else if (GPA >= 2.7) {
        return "B";
    } else if (GPA >= 2.3) {
        return "B-";
    } else if (GPA >= 2.0) {
        return "C+";
    } else if (GPA >= 1.7) {
        return "C";
    } else if (GPA >= 1.3) {
        return "C-";
    } else if (GPA >= 1.0) {
        return "D+";
    } else if (GPA >= 0.7) {
        return "D";
    } else {
        return "F";
    }
}

std::string Student::toString() const {
    return Person::toString() + ": " + major + ", " + std::to_string(GPA);
}
