//
// Created by Han Hossain on 1/12/23.
//

#ifndef CMAKE_WITH_RUST_USER_H
#define CMAKE_WITH_RUST_USER_H

#include<string>

class User {
public:
    User(std::string username);
    std::string username() const;

private:
    std::string _username;
};


#endif //CMAKE_WITH_RUST_USER_H
