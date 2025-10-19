#include "Report.h"
#include <iostream>

FinalReviewer::FinalReviewer(const std::string& id, const std::string& name)
    : SeniorExaminer(id, name) {
    this->role = Role::FinalReviewer;
}

void FinalReviewer::reviewCandidate(Candidate& c) const {
    std::cout << "Final Reviewer " << this->name << " conducts final review." << std::endl;
    SeniorExaminer::reviewCandidate(c);
    logAction();
}