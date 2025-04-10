#include "User.h"
#include <string>
#include <iostream>

User::User(std::string NameArg, std::string AccountNameArg, std::string PasswordArg, int PointArg)
{
    this->Name = NameArg;
    this->AccountName = AccountNameArg;
    this->Password = PasswordArg;
    this->Point = PointArg;
}

std::string User::name() const {
    return this->Name;
}
void User::setName(const std::string &name) {
    this->Name = name;
}

std::string User::accountName() const {
    return this->AccountName;
}
void User::setAccountName(const std::string &accountName) {
    this->AccountName = accountName;

}

std::string User::password() const {
    return this->Password;
}
void User::setPassword(const std::string &password) {
    this->Password = password;
}

int User::point() const {
    return this->Point;
}
void User::setPoint(int point) {
    this->Point = point;
}

void User::printUserInfo() {
    std::string userName = name();
    std::string userAccountName = accountName();
    std::string userPassword = password();
    int userPoint = point();

    std::cout << "User's information" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "User name: " << userName << std::endl;
    std::cout << "User account name: " << userAccountName << std::endl;
    std::cout << "User password: " << userPassword << std::endl;
    std::cout << "User point: " << userPoint << std::endl;
    std::cout << "----------------------------------" << std::endl;
};


User::~User()
{
}
