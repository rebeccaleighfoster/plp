#include <iostream>
#include <vector>
#include <string>
#include "project_manager.h"
#include "calculator.h"  // Include the calculator header

void project_manager() {
    std::vector<Project> projects;

    bool continueAddingProjects = true;
    while (continueAddingProjects) {
        Project project;

        // Use the existing code for getting project details
        getProjectDetails(project);

        // Allow the user to name the project and write a description
        std::cout << "Enter a name for the project: ";
        getline(std::cin, project.name);

        std::cout << "Enter a description for the project: ";
        getline(std::cin, project.description);

        // Call the calculateMaterialRequirements function
        calculateMaterialRequirements(project);

        projects.push_back(project);
        std::cout << "Project added successfully!\n";

        std::cout << "Do you want to add another project? (1 for Yes, 0 for No): ";
        int continueAddingProjectsInt;
        std::string continueAddingProjectsStr;
        getline(std::cin, continueAddingProjectsStr);
        continueAddingProjectsInt = std::stoi(continueAddingProjectsStr);
        continueAddingProjects = (continueAddingProjectsInt == 1);
    }

    // Display the list of projects and descriptions
    std::cout << "List of Your Projects:\n";
    for (const auto& project : projects) {
        std::cout << "- Project: " << project.name << "\n";
        std::cout << "  Weave Structure: " << project.weaveStructure << "\n";
        std::cout << "  Sett: " << project.sett << " epi\n";
        std::cout << "  Width: " << project.width << " inches\n";
        std::cout << "  Length: " << project.length << " inches\n";
        std::cout << "  Shrinkage: " << project.shrinkage << "%\n";
        std::cout << "  Material Type: " << project.materialType << "\n";
        std::cout << "  Colors: " << project.colors << "\n";
        std::cout << "  Description: " << project.description << "\n";
        std::cout << "  Total Yardage: " << project.totalYardage << " yards\n"; // Print the calculated total yardage
        std::cout << "----------------------------------------\n";
    }
}
