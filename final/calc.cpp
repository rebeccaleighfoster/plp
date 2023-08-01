#include <iostream>

// Function to calculate material requirements
void calculateMaterialRequirements() {
    double fabricLength, fabricWidth, sett, shrinkage;

    // Get user input
    std::cout << "Enter fabric length in inches: ";
    std::cin >> fabricLength;

    std::cout << "Enter fabric width in inches: ";
    std::cin >> fabricWidth;

    std::cout << "Enter sett (threads per inch): ";
    std::cin >> sett;

    std::cout << "Enter shrinkage percentage: ";
    std::cin >> shrinkage;

    // Calculate warp length and number of threads
    double warpLength = fabricLength + (fabricLength * (shrinkage / 100));
    double numberOfThreads = fabricWidth * sett;

    // Calculate required yardage
    double requiredYardage = (warpLength * numberOfThreads) / 36;

    // Output the results
    std::cout << "Material Requirements:\n";
    std::cout << "-----------------------\n";
    std::cout << "Warp Length: " << warpLength << " inches\n";
    std::cout << "Number of Threads: " << numberOfThreads << "\n";
    std::cout << "Required Yardage: " << requiredYardage << " yards\n";
}

int main() {
    calculateMaterialRequirements();

    return 0;
}
