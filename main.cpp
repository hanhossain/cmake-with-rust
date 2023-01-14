#include <iostream>
#include "users/User.h"
#include "pythagorean/pythagorean.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;
    User user = User("ironman");
    std::cout << "Username: " << user.username() << std::endl;
    double result = hypotenuse(3.0, 4.0);
    std::cout << "leg1 = 3.0, leg2 = 4.0, hypotenuse = " << result << std::endl;

    std::cout << user.username() << " is " << user.age() << " years old" << std::endl;

    return 0;
}
