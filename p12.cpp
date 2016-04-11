#include <iostream>

using namespace std;

int main()
{
  int bignum[7];

  int num1 = 0, num2 = 10, result, counter;

  for (int i = 0; i < 7; i++)
    cin >> bignum[i];

  for (; num1 < 7; num1++) {
    cout << bignum[num1++] << endl;
    counter = bignum[num1]++;
  }

  // This is the line in error. If you uncomment it and compile, it will produce
  // a compiler error.
  //
  // The result of num1 + num2 is stored in temporary memory (an rvalue).
  // You cannot increment the value stored in a temporary. You require an lvalue.
  result = ++(num1 + num2);

  cout << num1 << " " << num2 << " " << result;
  return 0;
}
