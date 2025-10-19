#include "User.h"

int User::userCount = 0;

User::User(const std::string& id, const std::string& name, Role r) : userID(id), name(name), role(r) {
    userCount++;
    std::cout << "User '" << this->name << "' created. (Total: " << userCount << ")" << std::endl;
}

User::~User() {
    userCount--;
    std::cout << "User '" << this->name << "' destroyed. (Total: " << userCount << ")" << std::endl;
}

void User::display() const {
    std::cout << "ID: " << userID << ", Name: " << name;
}

int User::getUserCount() {
    return userCount;
}