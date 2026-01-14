
#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

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
    std::string pin;  //pin is a string and not an int because leading 0s would get lost
    double balance;
    std::string name;
};


#endif 
