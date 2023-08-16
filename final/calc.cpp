#include <iostream>
#include <vector>
#include <string>

// Define a structure for weaver profiles
struct WeaverProfile {
    std::string name;
    double sett;
    double shrinkage;
};

// Function to calculate material requirements
void calculateMaterialRequirements(const WeaverProfile& profile) {
    // ... (existing code for material calculation)
}

// Function to add a custom weaver profile
void addCustomProfile(std::vector<WeaverProfile>& profiles) {
    WeaverProfile customProfile;
    std::cout << "Enter profile name: ";
    std::cin >> customProfile.name;
    std::cout << "Enter sett value: ";
    std::cin >> customProfile.sett;
    std::cout << "Enter shrinkage value: ";
    std::cin >> customProfile.shrinkage;

    profiles.push_back(customProfile);
}

int main() {
    // Create a vector to store weaver profiles
    std::vector<WeaverProfile> profiles;

    // Add sample profiles (you can extend this with user input)
    profiles.push_back({"Beginner", 10, 5});
    profiles.push_back({"Advanced", 12, 3});
    profiles.push_back({"Expert", 15, 2});

    bool continueAddingProfiles = true;
    while (continueAddingProfiles) {
        // Display available weaver profiles
        std::cout << "Available Weaver Profiles:\n";
        std::cout << "--------------------------\n";
        for (int i = 0; i < profiles.size(); ++i) {
            std::cout << i + 1 << ". " << profiles[i].name << "\n";
        }
        std::cout << "0. Add Custom Profile\n";
        std::cout << "Select a profile (0-" << profiles.size() << "): ";

        int profileChoice;
        std::cin >> profileChoice;

        if (profileChoice == 0) {
            addCustomProfile(profiles);
        } else if (profileChoice >= 1 && profileChoice <= profiles.size()) {
            const WeaverProfile& selectedProfile = profiles[profileChoice - 1];
            calculateMaterialRequirements(selectedProfile);
        } else {
            std::cout << "Invalid profile choice.\n";
        }

        std::cout << "Do you want to add another profile? (1 for Yes, 0 for No): ";
        std::cin >> continueAddingProfiles;

        // Clear the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}
