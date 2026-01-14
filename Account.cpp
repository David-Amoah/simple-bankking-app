// copyright [2026] <David Osei-Amoah>
#include <stdexcept>
#include "Account.hpp"

Account::Account(int id, const std::string& name, const std::string& pin) {
    this->id = id;
    this->pin = pin;
    this ->name = name;
    this ->balance = 0.0;
}

bool Account::checkPin(const std::string &pin) const {
    return this->pin == pin;
}

double Account::getBalance() const {
    return this->balance;
}

bool Account::deposit(double money) {
    if (money <= 0) {
        return false;
    }
    balance += money;
    return true;
}

int Account::getId() const {
    return this->id;
}

std::string Account::getName() const {
    return this->name;
}

bool Account::withdraw(double money) {
    if (money <= 0) {
        return false;
    }
    if (money > balance) {
        return false;
    }

    balance -= money;
    return true;
}
