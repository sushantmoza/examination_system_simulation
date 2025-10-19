#pragma once

#include "User.h"
#include "Candidate.h"

class Examiner : public User {
public:
    Examiner(const std::string& id, const std::string& name);

    virtual void reviewCandidate(const Candidate& c) const = 0;
};

class JuniorExaminer : public Examiner {
public:
    JuniorExaminer(const std::string& id, const std::string& name);

    void reviewCandidate(const Candidate& c) const override;
};