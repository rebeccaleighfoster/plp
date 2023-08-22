#ifndef COMMON_FUNCTIONS_H
#define COMMON_FUNCTIONS_H

#include <string>
#include <vector>

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
