#include "Person.hpp"
#include <iostream>
#include <sstream>
#include <ctime>

Person::Person(const std::string& name, const std::string& birthdate)
    : name(name), birthdate(birthdate) {}

void Person::setName(const std::string& name) {
    this->name = name;
}

std::string Person::getName() const {
    return name;
}

void Person::setBirthdate(const std::string& birthdate) {
    this->birthdate = birthdate;
}

std::string Person::getBirthdate() const {
    return birthdate;
}

int Person::calculateAge() const {
    std::tm tm_birthdate = {};
    std::istringstream ss(birthdate);
    ss >> std::get_time(&tm_birthdate, "%Y-%m-%d");
    std::time_t t_birthdate = std::mktime(&tm_birthdate);

    std::time_t now = std::time(nullptr);
    std::tm* tm_now = std::localtime(&now);
    std::time_t t_now = std::mktime(tm_now);

    int age = static_cast<int>(std::difftime(t_now, t_birthdate) / (60 * 60 * 24 * 365));
    return age;
}

std::string Person::toString() const {
    return name + " (" + birthdate + ")";
}

