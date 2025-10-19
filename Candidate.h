#pragma once
#include "User.h"

class SeniorExaminer;
class Examiner;

class Candidate : public User {    // Inheritance from User base class
private: //Private
    int marks;
public:
    Candidate(const std::string& id, const std::string& name, int initialMarks);
    Candidate(const Candidate& other);  // Copy constructor declaration
    Candidate& operator=(const Candidate& other);   // Copy assignment operator declaration
    void display() const override;
    int getMarks() const;
    void requestRecheck(const Examiner& e);   // Objects referring to other objects of related classes
    friend class SeniorExaminer;    // Friend class declaration
};