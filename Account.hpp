// copyright [2026] <David Osei-Amoah>
#ifndef ACCOUNT_HPP_
#define ACCOUNT_HPP_

#include <iostream>
#include <string>

class Account {
 public:
    Account(int id, const std::string& name, const std::string& pin);

    bool checkPin(const std::string& pin) const;

    double getBalance() const;

    int getId() const;

    std::string getName() const;

    bool deposit(double money);
    bool withdraw(double money);

 private:
    int id;

    // pin is a string and not an int because leading 0s would get lost
    std::string pin;

    double balance;
    std::string name;
};


#endif  // ACCOUNT_HPP_
