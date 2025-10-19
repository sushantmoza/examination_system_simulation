#include "Candidate.h"
#include <iostream>

void analyzeByValue(Candidate c) {
    std::cout << "--- Inside analyzeByValue ---" << std::endl;
    c.display();
}

void analyzeByReference(const Candidate& c) {
    std::cout << "--- Inside analyzeByReference ---" << std::endl;
    c.display();
}

int main() {
    Candidate original("CND-ORIGINAL", "Eve", 92);

    std::cout << "\n--- Demonstrating Pass-by-Value (makes a copy) ---" << std::endl;
    analyzeByValue(original);

    std::cout << "\n--- Demonstrating Pass-by-Reference (uses original) ---" << std::endl;
    analyzeByReference(original);

    std::cout << "\n--- Demonstrating Operators ---" << std::endl;
    Candidate copy = original;
    copy.display();
    
    Candidate assigned("CND-ASSIGN", "Frank", 50);
    assigned = original;
    assigned.display();
    
    return 0;
}