#include "Candidate.h"
#include <iostream>

int main() {

    Candidate c1("CND-001", "Bob", 85);

    std::cout << "Displaying candidate info:" << std::endl;
    c1.display();
    
    // c1.marks = 90; 

    std::cout << "\nMain function is ending." << std::endl;
    return 0;
}