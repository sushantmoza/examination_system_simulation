#pragma once
#include <iostream>
#include <string>

enum class Role { Candidate, Junior, Senior, FinalReviewer };   // Scoped enumeration

class User {

protected:  //Protected
    std::string userID;
    std::string name;
    Role role;

public: //Public
    static int userCount;   // Static member variable
    static int getUserCount();  // Static member function

    User(const std::string& id, const std::string& name, Role r);
    virtual ~User();
    virtual void display() const;   // Virtual method
    std::string getID() const;
    std::string getName() const { return name; }    // Non-virtual method

    bool operator<(const User& other) const { return this->userID < other.userID; } // Overloaded less-than operator
};