#include <iostream>

using namespace std;
string username = "nonjabulo";
string pin = "5432";
string user;
string password;
    int deposit;
    int withdraw;
    int balance;
    int reportStolenCard;
    int transferMoney;
    float balance1 = 29765.43;
    float withdraw1 = 45676.90;
    double nb = 5000.89;
    int sum = deposit+ nb;
    int accountNumber;
    int accountNo;
    int choice;


int main()
{
  cout<<"WELCOME TO NONJABULO'S BANK"<<endl;
    while(true){
    cout<<"Enter username "<<endl;
    cin>>user;
    cout<<"Enter Account number: "<<endl;
    cin>>accountNumber;
    cout<<"Enter password "<<endl;
    cin>>password;
   if(user== username && password== pin)
    {
        cout<<"login successful "<<endl;

    }
    else if(user!= username && password!= pin)
            cout<<"wrong details"<<endl;
            break;

    }
  cout<<"Welcome to our banking menu: "<<endl;
    cout<<"Enter 1 to Deposit"<<endl;
    cout<<"Enter 2 to Withdraw"<<endl;
    cout<<"Enter 3 to Check Balance"<<endl;
    cout<<"Enter 4 to Report Stolen Card"<<endl;
    cout<<"Enter 5 to Transfer Money"<<endl;
    cin>>choice;
    switch(choice)

    {
    case 1:
        cout<<"Enter username: ";
        cin>>user;
        cout<<"Enter password: ";
        cin>>password;
        cout<<"How much would you like to deposit ";
        cin>>deposit;
        cout<<"you have successfully deposited R"<<deposit<<"into your bank account"<<endl;

    case 2:
         cout<<"Enter username: ";
        cin>>user;
        cout<<"Enter password: ";
        cin>>password;
        cout<<"How much would you like to withdraw ";
        cin>>withdraw;
        cout<<"your withdrawal of R"<<withdraw<<"was successfully  your new balance is R 377798 "<<endl;

    case 3:
        cout<<"Enter username: ";
        cin>>user;
        cout<<"Enter password: ";
        cin>>password;
        cout<<"check your balance ";
        cin>>balance;
        cout<<"you have R"<<balance;

    case 4:
         cout<<"Enter username: ";
        cin>>user;
        cout<<"Enter password: ";
        cin>>password;
        cout<<"would you like the report the stolen card ";
        cin>>reportStolenCard;
        cout<<"the stolen card has been successfully reported"<<endl;

    case 5:
      cout<<"Enter username: ";
        cin>>user;
        cout<<"Enter password: ";
        cin>>password;
        cout<<"Enter account number you would like to transfer money to";
        cin>>accountNo;
        cout<<"you have successfully transfered money to"<<accountNumber;
    default:
        cout<<"out of bound";

   }

    return 0;
}
