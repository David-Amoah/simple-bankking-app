
#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>
#include <string>

class Account {
 public:
    Account();

    bool checkPin(std::string pin);

    double getBalance();

    void deposit(double money);
    
    bool withdraw(double money);

 private:
    int id;
    std::string pin;  //pin is a string and not an int because leading 0s would get lost
    double balance;
    std::string name;
};


#endif 
