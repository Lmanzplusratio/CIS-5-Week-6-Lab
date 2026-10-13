#include <iostream>
#include <string>

// Isaiah Salvatierra - Week 6
// CIS 05 - Loops

using std::cout;
using std::cin;
using std::string;

int main() {
 int n = 0;
 int i = 1;
 int sum = 0;
string answer;
string answerr;
 
cout << "Hello User, would you like me to display all numbers up to 100? "; cin >> answerr;
if (answerr == "Yes") {
cout << "Ok, would you like me to do this is even or odd numbers? "; cin >> answerr;
} if (answerr == "No") {
 cout << "Ok bye, maybe next time! "; 
} if (answerr == "even") {
cout << "Countdown:\n";
 for (int i = n; i <= 100; i = i + 2)
  sum = sum + i;
  cout << "The sum is: " << sum << "\n";
} else if (answerr == "odd") {
   while (i <= 99) {
    sum = sum + i;
     i = i + 2; 
}    cout << "The sum is: " << sum << "\n";
}     else {
     cout << "Bruh that isn't an answer, ok bye. \n";
}
 return 0;
}