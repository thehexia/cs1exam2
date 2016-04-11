/*
  Exam 2 - Problem 15 - Getting the min and max of input.
*/

#include <iostream>

int main()
{
  constexpr int input_size = 10; // 10 inputs max.

  int input[input_size]; // Array of size 10.

  int i = 0;
  // While we still need input.
  while (i < input_size)
  {
    std::cout << "Input " << i << ":";
    std::cin >> input[i]; // Read input, store it in input array.
    // NOTE: Because this was a test question, you did not need to worry too
    // much about verifying input. Normally, you SHOULD confirm that the input
    // was an integer rather than something else.
    ++i; // Increment i.
  }

  // Print out the array for convenience.
  std::cout << "Your input: ";
  for (int element : input)
  {
    std::cout << element << " ";
  }
  std::cout << std::endl;

  // Find max and min.
  int max = input[0]; // First, you start by assuming the first element is the
  int min = input[0]; // max and the min.

  // Now loop over the array.
  for (i = 0; i < input_size; ++i)
  {
    // For each element, compare it against the current max/min.

    // Is this element greater than the current max?
    // If it is, then replace the current max with this element.
    if (input[i] > max)
      max = input[i];

    // Is this element less than the current min?
    // If it is, then replace the current min with this element.
    if (input[i] < min)
      min = input[i];
  }

  std::cout << "Min: " << min << std::endl;
  std::cout << "Max: " << max << std::endl;
}
