#include <iostream>
using std::cout;
using std::cin;
using std::endl;

float interestrate = 0.0;
float loanamount = 0.0;

int main() {

cout << "Enter interest rate: ";
cin >> interestrate;

cout << "Enter loan amount: ";
cin >> loanamount;

if (interestrate < 1 || interestrate > 18){
 cout << "Error! Interest rates are invalid. "; 

return 0;
}

if (loanamount < 100 || loanamount > 1000){
  cout << "Error! Loan rates are invalid. "; 

return 0;
}

float loan_fee = 0.0;
if (loanamount >= 100 && loanamount <= 500){
  loan_fee = 20;
} else 
  loan_fee = 25;
 
float total_interest = loanamount * (interestrate / 100);

cout << "Loan amount $ " << loanamount << "\n";
cout << "Interest rate: " << interestrate << "\n";
cout << "Intrest + Fees: $ " << (loan_fee + total_interest) << "\n";

}