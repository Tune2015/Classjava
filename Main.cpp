#include "BankAccount.h"

// Constructor
BankAccount::BankAccount(string newName, double chBalance, double sBalance) {
    customerName = newName;
    checkingBalance = chBalance;
    savingsBalance = sBalance;
}

// Setters and Getters
void BankAccount::SetName(string newName) {
    customerName = newName;
}

string BankAccount::GetName() {
    return customerName;
}

void BankAccount::SetChecking(double balance) {
    checkingBalance = balance;
}

double BankAccount::GetChecking() {
    return checkingBalance;
}

void BankAccount::SetSavings(double balance) {
    savingsBalance = balance;
}

double BankAccount::GetSavings() {
    return savingsBalance;
}

// Deposit Functions
void BankAccount::DepositChecking(double amt) {
    if (amt > 0) {
        checkingBalance += amt;
    }
}

void BankAccount::DepositSavings(double amt) {
    if (amt > 0) {
        savingsBalance += amt;
    }
}

// Withdraw Functions
void BankAccount::WithdrawChecking(double amt) {
    if (amt > 0) {
        checkingBalance -= amt;
    }
}

void BankAccount::WithdrawSavings(double amt) {
    if (amt > 0) {
        savingsBalance -= amt;
    }
}

// Transfer Function
void BankAccount::TransferToSavings(double amt) {
    if (amt > 0) {
        checkingBalance -= amt;
        savingsBalance += amt;
    }
}