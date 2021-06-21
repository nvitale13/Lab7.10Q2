#include <iostream>
using std::cout;
using std::cin;
using std::endl;

float interestrate;
float loanamount;

int main() {

cout << "Enter interest rate: ";
cin >> interestrate;

cout << "Enter loan amount: ";
cin >> loanamount;

if (interestrate < 1 || interestrate >= 18)
  if (loanamount <= 100 || loanamount >= 1000)
    cout << "Error! "; 

if (interestrate >= 1 && interestrate <= 18)
  if (loanamount >= 100 && loanamount <= 500)
    cout << "Fee $20 "; 

if (interestrate >= 1 && interestrate <= 18)
  if (loanamount >= 500)
    cout << "Fee $25 ";


return 0;

}