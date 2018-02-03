//
//  main.cpp
//  GuessMyNumber
//
//  Created by Steven Sherry on 2/2/18.
//  Copyright © 2018 Steven Sherry. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
  int answer = arc4random_uniform(10);
  int guess;
  bool keepgoing = true;
  
  while (keepgoing) {
    
    cout << "Enter a number between 0 and 10: ";
    cin >> guess;
    cout << endl;
    
    if (guess == answer) {
      cout << "You got it!" << endl;
      keepgoing = false;
    } else if (guess < answer) {
      cout << "You're a bit low; try again!" << endl;
    } else if (guess > answer) {
      cout << "You're a bit high; try again!" << endl;
    }
  }
  return 0;
}
