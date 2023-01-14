//
// Created by Han Hossain on 1/12/23.
//

#include "User.h"

User::User(std::string username) : _username(username) {
}

std::string User::username() const {
    return _username;
}

int User::age() const {
    return 42;
}