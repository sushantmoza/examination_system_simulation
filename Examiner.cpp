#include "Examiner.h"
#include <iostream>

Examiner::Examiner(const std::string& id, const std::string& name, Role r) : User(id, name, r) {}

JuniorExaminer::JuniorExaminer(const std::string& id, const std::string& name)
    : Examiner(id, name, Role::Junior) {}

void JuniorExaminer::reviewCandidate(Candidate& c) const {
    std::cout << "Junior " << this->name << " reviews " << c.getName()
              << ". Marks: " << c.getMarks() << " (Read-only)." << std::endl;
}

SeniorExaminer::SeniorExaminer(const std::string& id, const std::string& name)
    : Examiner(id, name, Role::Senior) {}

void SeniorExaminer::reviewCandidate(Candidate& c) const {
    std::cout << "Senior " << this->name << " reviews " << c.getName() << "." << std::endl;
    std::cout << "  > Marks changed from " << c.getMarks();
    c.marks = 95;
    std::cout << " to " << c.getMarks() << "." << std::endl;
}