// •• E1.4Write a program that prints the balance of an account after the first, second, and third year. The account has an initial balance of $1,000 and earns 5 percent interest per year.

#include <iostream>

using namespace std;

int main()
{
    float balance = 1000;
    float ipy = 0.05; // interest per year
    
    cout << "initial balance is: " << balance << endl;
    cout << "interest per year is: " << ipy << endl;
    
    balance = balance * ipy + balance;
    
    cout << "after 1 year the new balance is: " << balance << endl;
    
    balance = balance * ipy + balance;
    
    cout << "after 2 years the new balance is: " << balance << endl;
    
    balance = balance * ipy + balance;
    
    cout << "after 3 years the new balance is: " << balance << endl;
    
    
}
