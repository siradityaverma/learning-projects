#include <iostream>
#include <string>
#include <sstream> // getline
#include <map>

float divide(int first, int second) {}
int mulitply(int first, int second) {}
int add(int first, int second) {}
int subtract(int first, int second) {}

// using std::string;
using namespace std;

int main() {
  std::map<string, int(*)()> map;

  std::cout << "Enter a sum: ";

  string input;
  getline(cin, input);

  string operators[] = {"+", "-", "*", "/"};

  // search for operator in string
  // if not in string, returns number greater than string length
  // can also use std::string::npos
  for(auto op : operators) {
    std::size_t found = input.find(op);

    if(found != std::string::npos) {
      // std::cout << op << ": " << input.find(op) << std::endl;
      // split string at operator
      // get first and second numbers
      auto start = 0;
      auto end = found;
      auto first = input.substr(start, end - start);
      auto second = input.substr(end + op.length(), input.length());

      std::cout << first << std::endl;
      std::cout << second << std::endl;

      // can't use strings in switch
      switch(op) {
        case "+":
          std::cout << first + second << std::endl;
          break;
      }
    }
  }

  return 0;
}