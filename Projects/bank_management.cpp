// // INHERITANCE
//  Bank Management System using Class & inheritance in C++
//     1.Saving Account
//     2.Current Account
//     Account Creation
//     Deposit
//     Withdraw
//     Balance
// ---------------------------------------------------
// ---------------------------------------------------
// Program Story:
// -------------------
// Class Account
//                  Data Members:              name,   accno,   atype
//                  Member Functions:      getAccountDetails(), displayDetails()

// Class Current_Account
//                  Data Members:              c_balance
//                  Member Functions:      c_display(), c_deposit(), c_withdraw()
//                   (Note: If Balance is more 1000 then only withdrawal can be done)

// Class Saving_Account
//                  Data Members:             sav_balance
//                  Member Functions:      s_display(), s_deposit(), s_withdraw()
//                  (Note: If Balance is more 500 then only withdrawal can be done)

// Menu
//                  Enter S for saving customer and C for current a/c customer :
//                   if type is C
//                                   1) Deposit
//                                   2) Withdraw
//                                   3) Display Balance
//                                   4) Display with full Details
//                                   5) Exit
//                  if type is C
//                                   1) Deposit
//                                   2) Withdraw
//                                   3) Display Balance
//                                   4) Display with full Details
//                                   5) Exit

//                    otherwise Invalid Account Selection
//                    At the end of program leave a message "Thank You for Banking with us..

#include <iostream>
using namespace std;
class Account
{
public:
    char name[20];
    int account_number;
    char account_type[1];

    void getAccountDetails()
    {
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your account number : ";
        cin >> account_number;
    }

    void displayDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Account Number : " << account_number << endl;
    }
};
class current : public Account
{
public:
    int balance = 3219;
    int deposite, withdraw;

    void c_display()
    {
        cout << "your account balance :" << balance;
    }
    void c_deposite()
    {
        cout << "Enter amount to deposite : ";
        cin >> deposite;

        balance += deposite;
        cout << "Balance Amount is : " << balance;
    }
    void c_withdraw()
    {
        cout << "Enter amount to withdraw : ";
        cin >> withdraw;
        if (balance > 1000)
        {
            balance -= withdraw;
            cout << "Balance amount is : " << balance;
        }
        else
        {
            cout << "Insufficient balance";
        }
    }
};
class saving : public Account
{

public:
    int balance = 5000;
    int deposite, withdraw;

    void s_display()
    {
        cout << "your account balance :" << balance;
    }
    void s_deposite()
    {
        cout << "Enter amount to deposite : ";
        cin >> deposite;

        balance += deposite;
        cout << "Balance amount is : " << balance;
    }
    void s_withdraw()
    {
        cout << "Enter amount to withdraw : ";
        cin >> withdraw;
        if (balance > 500)
        {
            balance -= withdraw;
            cout << "Balance amount is : " << balance;
        }
        else
        {
            cout << "Insufficient balance";
        }
    }
    // void exit(){

    // }
};

int main()
{
    saving s;
    current c;
    char ch;
    int n;
    cout << "Enter your account type : \n";
    cout << "Enter 's' for saving account or 'c' for current account : ";
    cin >> ch;
    if (ch == 's' || ch == 'S')
    {
        s.getAccountDetails();

        s.displayDetails();

        cout << "enter 1 for display amount \n enter 2 for deposite money \n enter 3 for withdraw money \n enter 4 for exit";
        cin >> n;
        switch (n)
        {
        case 1:
            s.s_display();
            break;
        case 2:
            s.s_deposite();
            break;
        case 3:
            s.s_withdraw();
            break;

            // case 4:
            //     s.exit();
            //     break;

        default:
            cout << "You have entered wrong input";
        }
    }

    if (ch == 'c' || ch == 'C')
    {

        cout << "enter 1 for display amount \n enter 2 for deposite money \n enter 3 for withdraw money \n enter 4 for exit";
        cin >> n;
        switch (n)
        {
        case 1:
            c.c_display();
            break;
        case 2:
            c.c_deposite();
            break;
        case 3:
            c.c_withdraw();
            break;

            // case 4:
            //     s.exit();
            //     break;

        default:
            cout << "You have entered wrong input";
        }
    }
}
