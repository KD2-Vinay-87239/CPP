// Q3
// . Write a class to store Account information of Bank customer by using following class diagram.
// Use enum to store information of account type.
// Create an array of 5 Accounts in main() and accept their details from user.
// Write Menu driven program to deposit/withdraw
// amount from the account.
// After each transaction display updated account balance.
// Throw exceptions for invalid values.
// Also implement an exception class InsufficientFundsException.
// In withdraw if sufficient balance is not available in account or while
// deposit the entered amount is
// negative then throw this exception.
// code with chandu

#include<iostream>
using namespace std;

enum EAccountType {
    SAVING=1,
    CURRENT,
    DMAT
};

class InsufficientFundsException 
{
    string message;

public:
    InsufficientFundsException(string message) {
        this->message = message;
    }
    void display() {
        cout << message << endl;
    }
};

class Account 
{
    int accNo;
    EAccountType type;
    double balance;

public:
    Account()
    {

    } 

    
    void accept() 
    {
        cout << "Enter the Account Number: ";
        cin >> accNo;

        int choice;
        cout << "Enter the Account Type (1: Saving, 2: Current, 3: DMAT): ";
        cin >> choice;
        type = EAccountType(choice);  
        cout << "Enter the Initial Balance: ";
        cin >> balance;
    }

    void display() {
        cout << "\nAccount Number: " << accNo << endl;
        cout << "Account Type: ";
        switch (type) {
            case SAVING: cout << "Savings" << endl; break;
            case CURRENT: cout << "Current" << endl; break;
            case DMAT: cout << "DMAT" << endl; break;
        }
        cout << "Balance: " << balance << endl;
    }

   
    void deposit(double amount) {
        if (amount < 0) {
            throw InsufficientFundsException("Deposit amount cannot be negative.");
        }
        balance += amount;
        cout << "Amount Deposited Successfully!" << endl;
    }

  
    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException("Insufficient Funds in the Account.");
        }
        else if (amount < 0) {
            throw InsufficientFundsException("Amount value should be greater than zero.");
        }
        balance -= amount;
        cout << "Amount Withdrawn Successfully! " << endl;
    }

    int getAccNo() {
        return accNo;
    }
};


int findAccountByNumber(Account accounts[], int numAccounts, int accNo) {
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].getAccNo() == accNo) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    Account accounts[5];  
    int numAccounts = 0;  
    int choice;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Add an Account" << endl;
        cout << "2. Display Account Details" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Withdraw Money" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (numAccounts < 5) {
                    accounts[numAccounts].accept();
                    numAccounts++;
                } else {
                    cout << "Maximum account limit reached!" << endl;
                }
                break;
            }

            case 2: {
                int accNo;
                cout << "Enter the account number to display details: ";
                cin >> accNo;
                int index = findAccountByNumber(accounts, numAccounts, accNo);
                if (index != -1) {
                    accounts[index].display();
                } else {
                    cout << "Account not found!" << endl;
                }
                break;
            }

            case 3: {
                int accNo;
                double amt;
                cout << "Enter the account number for deposit: ";
                cin >> accNo;
                int index = findAccountByNumber(accounts, numAccounts, accNo);
                if (index != -1) {
                    try {
                        cout << "Enter the amount to deposit: ";
                        cin >> amt;
                        accounts[index].deposit(amt);
                    } catch (InsufficientFundsException e) {
                        e.display();
                    }
                } else {
                    cout << "Account not found!" << endl;
                }
                break;
            }

            case 4: {
                int accNo;
                double amt;
                cout << "Enter the account number for withdrawal: ";
                cin >> accNo;
                int index = findAccountByNumber(accounts, numAccounts, accNo);
                if (index != -1) 
                {
                    try 
                    {
                        cout << "Enter the amount to withdraw: ";
                        cin >> amt;
                        accounts[index].withdraw(amt);
                    } 
                    catch (InsufficientFundsException e) 
                    {
                        e.display();
                    }
                } 
                else 
                {
                    cout << "Account not found!" << endl;
                }
                break;
            }

            case 5:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }

    } while (choice != 5);

    return 0;
}
