#include "User.h"

User::User(const std::string& id, const std::string& name) : userID(id), name(name) {
    std::cout << "User '" << this->name << "' created." << std::endl;
}

User::~User() {
    std::cout << "User '" << this->name << "' destroyed." << std::endl;
}

void User::display() const {
    std::cout << "ID: " << userID << ", Name: " << name;
}

std::string User::getID() const {
    return userID;
}