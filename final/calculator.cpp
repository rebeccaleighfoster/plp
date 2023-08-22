#include "calculator.h"
#include <iostream>

void getProjectDetails(Project& project) {
    std::cout << "Enter weave structure: ";
    getline(std::cin, project.weaveStructure);
    
    std::cout << "Enter sett value: ";
    std::string settStr;
    getline(std::cin, settStr);
    project.sett = std::stod(settStr);
    
    std::cout << "Enter width (in inches): ";
    std::string widthStr;
    getline(std::cin, widthStr);
    project.width = std::stod(widthStr);
    
    std::cout << "Enter length (in inches): ";
    std::string lengthStr;
    getline(std::cin, lengthStr);
    project.length = std::stod(lengthStr);
    
    std::cout << "Enter shrinkage value (%): ";
    std::string shrinkageStr;
    getline(std::cin, shrinkageStr);
    project.shrinkage = std::stod(shrinkageStr);
    
    std::cout << "Enter material type: ";
    getline(std::cin, project.materialType);
    
    std::cout << "Enter colors: ";
    getline(std::cin, project.colors);
}

void calculateMaterialRequirements(const Project& project) {
    // Calculate material requirements based on project details
    double warpLength = project.length * (1 + project.shrinkage / 100.0);
    double totalLength = warpLength * project.sett;
    double totalWidth = project.width;
    double totalYardage = (totalLength * totalWidth) / 36.0;

    std::cout << "Material Requirements for " << project.name << ":\n";
    std::cout << "----------------------------------------\n";
    std::cout << "Weave Structure: " << project.weaveStructure << "\n";
    std::cout << "Sett: " << project.sett << " epi\n";
    std::cout << "Width: " << project.width << " inches\n";
    std::cout << "Length: " << totalLength << " inches\n";
    std::cout << "Shrinkage: " << project.shrinkage << "%\n";
    std::cout << "Material Type: " << project.materialType << "\n";
    std::cout << "Colors: " << project.colors << "\n";
    std::cout << "Description: " << project.description << "\n";
    std::cout << "Total Yardage: " << totalYardage << " yards\n";
    std::cout << "----------------------------------------\n";
}
