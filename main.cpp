#include <iostream>
#include "User.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    User user = User("ironman");
    std::cout << "Username: " << user.username() << std::endl;

    return 0;
}
