#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>

struct Project {
    std::string name;
    std::string weaveStructure;
    double sett;
    double width;
    double length;
    double shrinkage;
    std::string materialType;
    std::string colors;
    std::string description;
};

void getProjectDetails(Project& project);

#endif
