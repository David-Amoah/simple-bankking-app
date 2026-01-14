// copyright [2026] <David Osei-Amoah>
#ifndef BANKSYSTEM_HPP_
#define BANKSYSTEM_HPP_
#include <vector>
#include <memory>
#include <string>
#include "Account.hpp"

class BankSystem {
 private:
    std::vector<std::unique_ptr<Account>> accounts;
    //bool login;
    int nextId;

 public:
    BankSystem(std::string bankName);

    Account* createAccount(std::string name, std::string pin);

    bool login(int id, const std::string& pin);

};

#endif //BANKSYSTEM_
