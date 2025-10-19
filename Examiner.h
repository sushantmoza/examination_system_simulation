#pragma once
#include "User.h"
#include "Candidate.h"

class Examiner : public User {   // Inheritance from User
public:
    Examiner(const std::string& id, const std::string& name, Role r);
    virtual void reviewCandidate(Candidate& c) const = 0;   // Pure virtual method making Examiner abstract
};

class JuniorExaminer : public Examiner {    // Inheritance from Examiner
public:
    JuniorExaminer(const std::string& id, const std::string& name);
    void reviewCandidate(Candidate& c) const override;
};

class SeniorExaminer : public Examiner {       // Inheritance from Examiner
public:
    SeniorExaminer(const std::string& id, const std::string& name);
    void reviewCandidate(Candidate& c) const override;
}; 