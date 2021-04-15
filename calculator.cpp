#include <iostream>
#include "calculator.h"
using namespace std;

// Constructor that Initializes the variables
Calculator::Calculator(): n1(0), n2(0), total(0) {
}

// Deconstructor telling the user that it is exiting the program
Calculator::~Calculator() {
  cout << "Exiting Calculator Program.\n";
}

void Calculator::displayFunctions() {
  cout << "-------------------------" << endl;
  cout << "Calculator Math Functions" << endl;
  cout << "-------------------------" << endl;
  cout << "Add (+)" << endl;
  cout << "Subtract (-)" << endl;
  cout << "Multiply (*)" << endl;
  cout << "Divide (/)" << endl;
  cout << "Remainder (?)" << endl;
  cout << "Square (2)" << endl;
  cout << "Cube (3)" << endl;
  cout << "Power (^)" << endl;
  cout << "Factorial (!)" << endl;
  cout << "Percentage (%)" << endl;
  cout << "Exit program (exit)" << endl;
  cout << "-------------------------" << endl;
}

void Calculator::showTop() {
  cout << "ans = " << s.top() << endl;
}

bool isNumber(string s) {
  for(int i = 0; i < s.length(); i++) {
    if(!isdigit(s[i]))
      return false;
  }
  return true;
}

void Calculator::askFor1Num() {
  string str;
  cout << "Enter number: ";
  cin >> str;
  if(str == "ans") {
    if(!s.empty())
      n1 = s.top();
    else 
      cout << "ERROR: ans is not defined" << endl;
  } else if(isNumber) {
    n1 = stoi(str);
  } else {
    cout << "ERROR: Invalid number." << endl;
  }
}

void Calculator::askFor2Num() {
  string str;
  bool isError = false;
  cout << "Enter first number: ";
  cin >> str;
  if(str == "ans") {
    if(!s.empty())
      n1 = s.top();
    else 
      cout << "ERROR: ans is not defined" << endl;
  } else if(isNumber) {
    n1 = stoi(str);
  } else {
    cout << "ERROR: Invalid number." << endl;
    isError = true;
  }
  
  if(!isError) {
    cout << "Enter second number: ";
    cin >> str;
    if(str == "ans") {
      if(!s.empty())
        n2 = s.top();
      else 
        cout << "ERROR: ans is not defined" << endl;
    } else if(isNumber) {
      n2 = stoi(str);
    } else {
      cout << "ERROR: Invalid number." << endl;
    }
  }
}

void Calculator::add() {
  total = n1 + n2;
  cout << n1 << " + " << n2 << " = " << total << endl;
  s.push(total);
}

void Calculator::subtract() {
  total = n1 - n2;
  cout << n1 << " - " << n2 << " = " << total << endl;
  s.push(total);
}

void Calculator::multiply() {
  total = n1 * n2;
  cout << n1 << " * " << n2 << " = " << total << endl;
  s.push(total);
}

void Calculator::divide() {
  if(n2 != 0) {
    total = n1 / n2;
    cout << n1 << " / " << n2 << " = " << total << endl;
    s.push(total);
  }
  else {
    cout << "ERROR: Can't divide by zero!\n";
  }
}

void Calculator::find_remainder() {
  total = (int)n1 % (int)n2;
  cout << "The remainder is " << total << endl;
  s.push(total);
}

void Calculator::square() {
  total = n1 * n1;
  cout << n1 << " * " << n1 << " = " << total << endl;
  s.push(total);
}

void Calculator::cube() {
  total = n1 * n1 * n1;
  cout << n1 << " cubed is " << total << endl;
  s.push(total);
}

void Calculator::power() {
  total = 1;
  for(int i = 0; i < n2; i++) {
    total *= n1;
  }
  cout << n1 << " to the power of " << n2 << " = " << total << endl;
  s.push(total);
}

void Calculator::factorial() {
  total = 1;
  if(n1 < 0) {
    cout << "ERROR: Can not use factorial on negative numbers." << endl;
  } else if(n1 == 0) {
    cout << "0! = 1" << endl;
  } else {
    for(int i = 1; i < n1+1; i++) {
      total *= i;
    }
    cout << n1 << "! = " << total << endl;
    s.push(total);
  }
}

void Calculator::percentage() {
  total = (n1 / n2) * 100;
  cout << n1 << " is " << total << "% of " << n2 << endl;
  s.push(total);
}