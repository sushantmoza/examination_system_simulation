#include "Candidate.h"
#include <iostream>

Candidate::Candidate(const std::string& id, const std::string& name, int initialMarks)
    : User(id, name), marks(initialMarks) {}

void Candidate::display() const {
    User::display();
    std::cout << ", Marks: " << marks << std::endl;
}

int Candidate::getMarks() const {
    return marks;
}