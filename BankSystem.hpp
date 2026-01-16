// copyright [2026] <David Osei-Amoah>
#ifndef BANKSYSTEM_HPP_
#define BANKSYSTEM_HPP_
#include <vector>
#include <memory>
#include <string>
#include "Account.hpp"

class BankSystem {
 private:
    Account* current;
    std::string bankName;
    std::vector<std::unique_ptr<Account>> accounts;
    int nextId;

 public:
    explicit BankSystem(std::string bankName);

    // this creates a new account assigns an ID and stores the acocunt
    Account* createAccount(std::string& name, std::string& pin);
    bool login(int id, const std::string& pin);
    void logout();


    // gives information about the login session
    bool isLoggedIn() const;
    Account* currentAccount();
    const Account* currentAccount() const;


    Account* findById(int id);
    const Account* findById(int id) const;
    const std::string& getBankName() const;


};

#endif //BANKSYSTEM_
