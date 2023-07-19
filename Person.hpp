#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    std::string name;
    std::string birthdate;

public:
    Person(const std::string& name, const std::string& birthdate);
    void setName(const std::string& name);
    std::string getName() const;
    void setBirthdate(const std::string& birthdate);
    std::string getBirthdate() const;
    int calculateAge() const;
    std::string toString() const;
};

#endif // PERSON_H
