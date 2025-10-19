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

Candidate::Candidate(const Candidate& other) : User(other.userID, other.name + "-copy") {
    this->marks = 0;
    std::cout << "CANDIDATE: Custom Copy Constructor Used." << std::endl;
}

Candidate& Candidate::operator=(const Candidate& other) {
    std::cout << "CANDIDATE: Custom Assignment Operator Used." << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->marks = other.marks;
    }
    return *this;
}