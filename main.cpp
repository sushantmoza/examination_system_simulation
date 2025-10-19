#include "Candidate.h"
#include "Examiner.h"
#include <iostream>

int main() {

    Candidate c1("CND-001", "Bob", 85);
    JuniorExaminer j1("JNR-001", "Charles");
    SeniorExaminer s1("SNR-001", "Diana");

    std::cout << "Initial state of Candidate:" << std::endl;
    c1.display();

    std::cout << "\n--- Junior review (no change) ---" << std::endl;
    j1.reviewCandidate(c1);
    c1.display();

    std::cout << "\n--- Senior review (marks will change) ---" << std::endl;
    s1.reviewCandidate(c1);
    c1.display();
    
    std::cout << "\nMain function is ending." << std::endl;
    return 0;
}