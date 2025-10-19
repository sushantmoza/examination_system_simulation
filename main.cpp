#include "User.h"
#include <iostream>

int main() {

    User u1("USR-001", "Alice");
    
    std::cout << "Displaying user info:" << std::endl;
    u1.display();
    std::cout << std::endl;

    std::cout << "\nMain function is ending." << std::endl;
    return 0;
}