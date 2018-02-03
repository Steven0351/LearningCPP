//
//  main.cpp
//  Small
//
//  Created by Steven Sherry on 2/2/18.
//  Copyright © 2018 Steven Sherry. All rights reserved.
//

#include <iostream>

// This allows the compiler to assume the namespace of functions without it defined.
using namespace std;

int main() {
  cout << "Hello!" << endl << 2+2;
  
  cout << endl << endl;
  
  int i;
  i = 4.3;
  cout << i << endl;
  
  auto j = 7;
  cout << j << endl;
  
  auto f = 4.9;
  cout << f << endl;
  
  f = 9.0/5;
  cout << f << endl;
  
  string s = "hello";
  s = "bye";
  
  return 0;
}
