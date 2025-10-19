#include "Candidate.h"
#include "Examiner.h"
#include <iostream>

int main() {
    
    Candidate c1("CND-001", "Bob", 85);
    JuniorExaminer j1("JNR-001", "Charles");

    j1.reviewCandidate(c1);

    std::cout << "\nMain function is ending." << std::endl;
    return 0;
}