#pragma once
#include "Examiner.h"

class Report {
public:
    void logAction() const { std::cout << "   (Action logged in official report.)" << std::endl; }
};

class FinalReviewer : public SeniorExaminer, public Report {    // Multiple inheritance
public:
    FinalReviewer(const std::string& id, const std::string& name);
    void reviewCandidate(Candidate& c) const override;
};