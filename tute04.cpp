/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);
int a=1;
int b=1;
int c=1;

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

long Factorial(int no){
  long answer = 1;
  for(int i=1; i<=no;i++){
    answer = answer * i;
  }
  return answer;
}

long nCr(int n, int r){
  long answer;
  a = Factorial(n);
  b = Factorial(r);
  c = Factorial(n-r);
  answer = a/(b*c);
  return answer;
}