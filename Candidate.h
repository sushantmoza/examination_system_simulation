#pragma once
#include "User.h"

class SeniorExaminer;
class Examiner;

class Candidate : public User {
private:
    int marks;
public:
    Candidate(const std::string& id, const std::string& name, int initialMarks);
    Candidate(const Candidate& other);
    Candidate& operator=(const Candidate& other);
    void display() const override;
    int getMarks() const;
    void requestRecheck(const Examiner& e);
    friend class SeniorExaminer; 
};