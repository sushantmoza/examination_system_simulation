#pragma once
#include <iostream>
#include <string>

enum class Role { Candidate, Junior, Senior, FinalReviewer };

class User {

protected:
    std::string userID;
    std::string name;
    Role role;

public:
    static int userCount;
    static int getUserCount();

    User(const std::string& id, const std::string& name, Role r);
    virtual ~User();
    virtual void display() const;
    std::string getID() const;
    std::string getName() const { return name; }

    bool operator<(const User& other) const { return this->userID < other.userID; }
};