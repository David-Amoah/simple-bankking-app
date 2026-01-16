// copyright [2026] <David Osei-Amoah>

#include "BankSystem.hpp"

BankSystem::BankSystem(std::string bankName) {
    this->bankName = bankName;
}

Account* BankSystem::createAccount(std::string& name, std::string& pin) {
    Account newAccount(1,name,pin);
    return &newAccount;
}

bool BankSystem::login(int id, const std::string &pin) {

}

void BankSystem::logout() {

}

bool BankSystem::isLoggedIn() const {

}

Account* BankSystem::currentAccount() {

}

const Account *BankSystem::currentAccount() const {

}

Account* BankSystem::findById(int id) {

}

const Account *BankSystem::findById(int id) const {

}
const std::string &BankSystem::getBankName() const {

}