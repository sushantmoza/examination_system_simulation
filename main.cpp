#include "User.h"
#include "Candidate.h"
#include "Examiner.h"
#include "Report.h"
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

void processRawUserData(void* data) {
    std::cout << "\n Explicit Cast Demo: Processing raw data..." << std::endl;
    User* user = static_cast<User*>(data);  // Explicit cast from void* to User*
    std::cout << "  > Data processed for user: ";
    user->display();
    std::cout << std::endl;
}

int main() {
    std::vector<std::unique_ptr<User>> registry;    // Using STL vector with smart pointers

    registry.push_back(std::make_unique<Candidate>("CND-102", "Grace", 88));
    registry.push_back(std::make_unique<FinalReviewer>("FIN-001", "Heidi"));
    registry.push_back(std::make_unique<Candidate>("CND-101", "Ivan", 95));
    
    std::cout << "\n Total users created: " << User::getUserCount() << std::endl;

    std::cout << "\n Self-Referencing Demo:" << std::endl;
    Candidate* ivan = static_cast<Candidate*>(registry[2].get());
    Examiner* heidi = static_cast<Examiner*>(registry[1].get());
    ivan->requestRecheck(*heidi);

    processRawUserData(registry[0].get());

    std::cout << "\n Sorting Demo: Registry before sort..." << std::endl;
    for(const auto& user : registry) { user->display(); }

    std::sort(registry.begin(), registry.end(), [](const auto& a, const auto& b) {
        return *a < *b;
    });     // Using STL sort algorithm

    std::cout << "\nRegistry after sorting by ID:" << std::endl;
    for(const auto& user : registry) { user->display(); }

    std::cout << "\n--- Main is ending. Destructors will be called automatically. ---\n" << std::endl;
    return 0;
}