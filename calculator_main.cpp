#include "calculator.cpp"

int main() {

  bool isProgramRunning = true;
  string symbol;
  Calculator C;
  
  // Display all the Calculator Functions 
  C.displayFunctions();
  
  while(isProgramRunning) {
    
    cout << "Enter the symbol in the parenthesis of the function you would like to use: ";
    cin >> symbol;

    // Whichever symbol they choose, it will then ask the user for 1 number or 2 numbers and then use that function that relates to the symbol
    if(symbol == "+") {
      C.askFor2Num();
      C.add();
    } else if(symbol == "-") {
      C.askFor2Num();
      C.subtract();
    } else if(symbol == "*") {
      C.askFor2Num();
      C.multiply();
    } else if(symbol == "/") {
      C.askFor2Num();
      C.divide();
    } else if(symbol == "?") {
      C.askFor2Num();
      C.find_remainder();
    } else if(symbol == "2") {
      C.askFor1Num();
      C.square();
    } else if(symbol == "3") {
      C.askFor1Num();
      C.cube();
    } else if(symbol == "^") {
      C.askFor2Num();
      C.power();
    } else if(symbol == "!") {
      C.askFor1Num();
      C.factorial();
    } else if(symbol == "%") {
      C.askFor2Num();
      C.percentage();
    } else if(symbol == "exit") { // if the user writes 'exit' as their symbol, it will make the while loop end and stop the calculator program
      isProgramRunning = false;
    } else {
      cout << "ERROR: Symbol not found.\n"; // If it's not on the list of function symbols, then it will say it's not a valid symbol and ask for another one
    }
  }
  return 0;
}