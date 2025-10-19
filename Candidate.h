#pragma once

#include "User.h"

class Candidate : public User {
private:
    int marks;

public:
    Candidate(const std::string& id, const std::string& name, int initialMarks);

    void display() const override;

    int getMarks() const;
};