//
//  main.cpp
//  flow
//
//  Created by Steven Sherry on 2/2/18.
//  Copyright © 2018 Steven Sherry. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
  int i;
  int j;
  int answer;
  bool keepgoing = true;
  
  for (int k = 0; k < 10; k++) {
    cout << k << " ";
  }
  
  cout << endl;
  
  while(keepgoing) {
    cout << "Enter a number: ";
    cin >> i;
    cout << "You entered " << i << ". Enter another number: ";
    cin >> j;
    
    if (i < j) {
      cout << "The first number, " << i << ", is less than the second number, " << j << endl;
    } else if (i > j){
      cout << "The first number, " << i << ", is greater than the second number, " << j << endl;
    } else if (i == j) {
      cout << "The first number, " << i << ", is equal to the second number, " << j << endl;
    }
    cout << "Compare another? 0 for no ";
    cin >> answer;
    if (answer == 0) {
      keepgoing = false;
    }
  }
  
  return 0;
}
