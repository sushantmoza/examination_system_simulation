#include "Candidate.h"
#include "Examiner.h"
#include <iostream>
#include <vector>
#include <memory>

int main() {

    std::vector<std::unique_ptr<User>> userRegistry;

    userRegistry.push_back(std::make_unique<Candidate>("CND-001", "Bob", 85));
    userRegistry.push_back(std::make_unique<JuniorExaminer>("JNR-001", "Charles"));
    
    std::cout << "--- Displaying users from smart pointers ---" << std::endl;
    for (const auto& userPtr : userRegistry) {
        userPtr->display();
    }
    
    std::cout << "\n--- Main is ending, memory will be cleaned up automatically ---" << std::endl;
    return 0;
}