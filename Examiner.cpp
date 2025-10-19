#include "Examiner.h"
#include <iostream>

Examiner::Examiner(const std::string& id, const std::string& name) : User(id, name) {}

JuniorExaminer::JuniorExaminer(const std::string& id, const std::string& name)
    : Examiner(id, name) {}

void JuniorExaminer::reviewCandidate(Candidate& c) const {
    std::cout << "Junior Examiner " << this->name << " reviews " << c.getID()
              << ". Marks seen: " << c.getMarks() << " (Read-only)." << std::endl;
}

// --- Senior Examiner Implementation ---
SeniorExaminer::SeniorExaminer(const std::string& id, const std::string& name)
    : Examiner(id, name) {}

void SeniorExaminer::reviewCandidate(Candidate& c) const {
    std::cout << "Senior Examiner " << this->name << " reviews " << c.getID() << "." << std::endl;
    
    std::cout << "  > Marks changed from " << c.marks;
    c.marks = 95; // Modify the private data
    std::cout << " to " << c.marks << "." << std::endl;
}