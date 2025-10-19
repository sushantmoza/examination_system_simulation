#pragma once

#include <iostream>
#include <string>

class User {
protected:
    std::string userID;
    std::string name;

public:
    User(const std::string& id, const std::string& name);

    virtual ~User();

    virtual void display() const;
    
    std::string getID() const;
};