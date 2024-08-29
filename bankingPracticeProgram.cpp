#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main()
{

    double balance = 123;
    int choice = 0;

    do
    {
        std::cout << "----- Banking Practice Program -----\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit(balance);
            showBalance(balance);

            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);

            break;
        case 4:
            std::cout << "Thank you for visiting!\n";
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
    std::cout << " " << std::endl;
};
double deposit(double balance)
{

    double depositAmount = 0;
    std::cout << "Enter the amount to deposit: ";
    std::cin >> depositAmount;

    if (depositAmount > 0)
    {
        return depositAmount;
    }
    else
    {
        std::cout << "That's not a valid amount!\n";
        return 0;
    }
};
double withdraw(double balance)
{

    double withdrawAmount = 0;
    std::cout << "Enter the amount to widthraw: ";
    std::cin >> withdrawAmount;

    if (withdrawAmount > balance)
    {
        std::cout << "Insufficient balance!\n";
        return 0;
    }
    else if (withdrawAmount < 0)
    {
        std::cout << "That's not a valid amount!\n";
        return 0;
    }
    else
    {
        return withdrawAmount;
    }
};