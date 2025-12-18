// class & object
// polymorphism
// inheritance
// encapsulation

#include <iostream>
using namespace std;

class BankAccount
{
private:

public:
    double balance = 0;
    int accountNumber;
    string accountHolderName;

public:
    void getInfo()
    {
        cout << "Enter your account number: ";
        cin >> accountNumber;
        cout << "Enter your account holder name: ";
        cin >> accountHolderName;
    }
    double deposit(double amount)
    {
        balance += amount;
        return balance;
    }

    double withdraw(double amount)
    {
        if (amount >= balance)
        {
            cout << "Insufficient balance!!! first deposit balance.";
        }else{
            balance -= amount;
        }
        return balance;
    }

    double getBalance()
    {
        return balance;
    }

    void displayAccountInfo()
    {
        cout << "Account number is: " << accountNumber << endl;
        cout << "Account holder name is: " << accountHolderName << endl;
        cout << "Current balance is: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount
{
    public:
    double interestRate;
    double calculateInterest()
    {
        double time, interest;
        double rate;
        cout << "how many interest you want to put apply.(in percentage): ";
        cin >> rate;
        cout << "How many year you want to put on interest.: ";
        cin >> time;
        double current = balance;

        for (int i = 0; i < time; ++i)
        {
            double yearlyInterest = (current * rate) / 100;
            interest += yearlyInterest;
            current += yearlyInterest;
        }

        interest = current - balance;
    
        cout << "Final amount after " << time << " years with compounding: " << current << endl;
        return interest;
    }
};

class CheckingAccount : public BankAccount
{
    public:
    double overdraftLimit;
    CheckingAccount() {
        overdraftLimit = 10000; // Always set it here
    }
    double withdraw(double amount) {
        if ((balance - amount) < -overdraftLimit) {
            cout << "Transaction failed! Withdrawal exceeds overdraft limit." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        }
        return balance;
    }

    // check overdraft
    void checkOverdraft() {
        if (balance < 0) {
            cout << "You are in overdraft. Overdraft used: " << -balance << endl;
            cout << "Remaining overdraft limit: " << overdraftLimit + balance << endl;
        } else {
            cout << "No overdraft. Your current balance is: " << balance << endl;
        }
    }
};

class FixedDepositAccount : public BankAccount
{
    public:
    double term, interestRate, money;
    double calculateInterest() {
        cout << "Enter amount for calaculate interest on fixeddeposit account.";
        cin >> money;
        cout << "Enter term (years): ";
        cin >> term;
        cout << "Enter interest rate (%): ";
        cin >> interestRate;

        double now_balance = money;

        for (int i = 0; i < term; ++i)
        {
            double yearlyInterest = (now_balance * interestRate) / 100;
            now_balance += yearlyInterest;
        }

        double totalInterest = now_balance - money;

        cout << "Final amount in " << term << " years: " << now_balance << endl;
        return totalInterest;
    }
};

int main()
{
    BankAccount b1;
    SavingsAccount s1;
    CheckingAccount c1;
    FixedDepositAccount f1;
    int ch;
    int accountNumber;
    string accountHolderName;
    do
    {
        cout << "press 1 for create savings account." << endl;
        cout << "press 2 for create checking account." << endl;
        cout << "press 3 for create fixed deposit account." << endl;
        cout << "press 0 for exit." << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            s1.getInfo();
            cout << "Dear user!!! your savings account has been created successfully." << endl;
            do
            {
                cout << "press 1 for deposit." << endl;
                cout << "press 2 for withdraw." << endl;
                cout << "press 3 for display balance." << endl;
                cout << "press 4 for display account info." << endl;
                cout << "press 5 for calculate inbterest on balance." << endl;
                cout << "press 0 for exit." << endl;
                cin >> ch;
                switch (ch)
                {
                case 1:
                {
                    double amount;
                    cout << "Enter amount for deposit: ";
                    cin >> amount;
                    double blnc = s1.deposit(amount);
                    cout << "your balance is successfully deposit." << endl;
                    break;
                }

                case 2:
                {
                    double amount;
                    cout << "Enter amount for withdraw: ";
                    cin >> amount;
                    double blnc = s1.withdraw(amount);
                    cout << "your balance is successfully withdraw." << endl;
                    break;
                }

                case 3:
                {
                    double display = s1.getBalance();
                    cout << "Your current balance is: " << display << endl;
                    break;
                }

                case 4:
                {
                    s1.displayAccountInfo();
                    break;
                }

                case 5:
                {
                    
                    double inrst = s1.calculateInterest();
                    cout << "Your interest based on the balance and interest rate is: " << inrst << endl;
                    break;
                }

                case 0:
                {
                    cout << "Exiting from program..." << endl;
                    break;
                }

                default:
                    cout << "Thank you for using our services and bank." << endl;
                }
            } while (ch != 0);
            break;
        }

        case 2:
        {
            c1.getInfo();
            cout << "Dear user!!! your checking account has been created successfully." << endl;
            do
            {
                cout << "press 1 for deposit." << endl;
                cout << "press 2 for withdraw." << endl;
                cout << "press 3 for display balance." << endl;
                cout << "press 4 for display account info." << endl;
                cout << "press 5 for check overdraft limit." << endl;
                cout << "press 0 for exit." << endl;
                cin >> ch;
                switch (ch)
                {
                case 1:
                {
                    double amount;
                    cout << "Enter amount for deposit: ";
                    cin >> amount;
                    double blnc = c1.deposit(amount);
                    cout << "your balance is successfully deposit." << endl;
                    break;
                }

                case 2:
                {
                    double amount;
                    cout << "Enter amount for withdraw: ";
                    cin >> amount;
                    double blnc = c1.withdraw(amount);
                    cout << "your balance is successfully withdraw." << endl;
                    break;
                }

                case 3:
                {
                    double display = c1.getBalance();
                    cout << "Your current balance is: " << display << endl;
                    break;
                }

                case 4:
                {
                    c1.displayAccountInfo();
                    break;
                }

                case 5:
                {
                    
                    c1.checkOverdraft();
                    break;
                }

                case 0:
                {
                    cout << "Exiting from program..." << endl;
                    break;
                }

                default:
                    cout << "Thank you for using our services and bank." << endl;
                }
            } while (ch != 0);
            break;
        }
        
        case 3:
        {
            f1.getInfo();
            cout << "Dear user!!! your checking account has been created successfully." << endl;
            do
            {
                cout << "press 1 for deposit." << endl;
                cout << "press 2 for withdraw." << endl;
                cout << "press 3 for display balance." << endl;
                cout << "press 4 for display account info." << endl;
                cout << "press 5 for calculate interest on fixeddeposit account." << endl;
                cout << "press 0 for exit." << endl;
                cin >> ch;
                switch (ch)
                {
                case 1:
                {
                    double amount;
                    cout << "Enter amount for deposit: ";
                    cin >> amount;
                    double blnc = f1.deposit(amount);
                    cout << "your balance is successfully deposit." << endl;
                    break;
                }

                case 2:
                {
                    double amount;
                    cout << "Enter amount for withdraw: ";
                    cin >> amount;
                    double blnc = f1.withdraw(amount);
                    cout << "your balance is successfully withdraw." << endl;
                    break;
                }

                case 3:
                {
                    double display = f1.getBalance();
                    cout << "Your current balance is: " << display << endl;
                    break;
                }

                case 4:
                {
                    f1.displayAccountInfo();
                    break;
                }

                case 5:
                {
                    
                    double fd_interest = f1.calculateInterest();
                    cout << "Your interest on fixed deposit account is: " << fd_interest << endl;
                    break;
                }

                case 0:
                {
                    cout << "Exiting from program..." << endl;
                    break;
                }

                default:
                    cout << "Thank you for using our services and bank." << endl;
                }
            } while (ch != 0);
            break;
        }
        }


    } while (ch != 0);
    return 0;
}