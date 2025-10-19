#include "Candidate.h"
#include "Examiner.h"
#include <iostream>
#include <vector>

int main() {

    std::vector<User*> userList;

    userList.push_back(new Candidate("CND-001", "Bob", 85));
    userList.push_back(new JuniorExaminer("JNR-001", "Charles"));
    userList.push_back(new SeniorExaminer("SNR-001", "Diana"));

    std::cout << "--- Calling virtual display() method ---" << std::endl;
    for (const auto& user : userList) {
        user->display();
    }

    std::cout << "\n--- Cleaning up memory ---" << std::endl;
    for (auto& user : userList) {
        delete user;
    }
    userList.clear();

    return 0;
}