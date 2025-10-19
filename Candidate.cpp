#include "Candidate.h"
#include "Examiner.h"
#include <iostream>

Candidate::Candidate(const std::string& id, const std::string& name, int initialMarks)
    : User(id, name, Role::Candidate), marks(initialMarks) {}

Candidate::Candidate(const Candidate& other) : User(other.userID, other.name + "-copy", Role::Candidate) {
    this->marks = 0;
    std::cout << "CANDIDATE: Custom Copy Constructor Used." << std::endl;
}

Candidate& Candidate::operator=(const Candidate& other) {
    if (this != &other) {
        this->name = other.name;
        this->marks = other.marks;
    }
    return *this;
}

void Candidate::display() const {
    User::display();
    std::cout << ", Role: Candidate, Marks: " << marks << std::endl;
}

int Candidate::getMarks() const {
    return marks;
}

void Candidate::requestRecheck(const Examiner& e) {
    std::cout << "Candidate " << this->name << " requests feedback from " << e.getName() << "." << std::endl;
    e.reviewCandidate(*this);
}