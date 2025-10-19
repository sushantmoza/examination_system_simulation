#include "Examiner.h"
#include <iostream>

Examiner::Examiner(const std::string& id, const std::string& name) : User(id, name) {}

JuniorExaminer::JuniorExaminer(const std::string& id, const std::string& name)
    : Examiner(id, name) {}

void JuniorExaminer::reviewCandidate(const Candidate& c) const {
    std::cout << "Junior Examiner " << this->name << " reviews " << c.getID()
              << ". Marks seen: " << c.getMarks() << " (Read-only)." << std::endl;
}