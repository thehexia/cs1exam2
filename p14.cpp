/*
  Exam 2 - Problem 15
  Summing rows and columns of a two dimensional array.
*/

#include <iostream>

int main()
{
  constexpr int NUM_ROWS = 4;
  constexpr int NUM_COLS = 6;

  // This is an array of 4 elements where each element is an array of 6 elements
  int grades[NUM_ROWS][NUM_COLS]
  {
    // Row 1
    {0, 1 , 2, 3, 4, 5},
    // Row 2
    {6, 7, 8, 9, 10, 11},
    // Row 3
    {12, 13, 14, 15, 16, 17},
    // Row 4
    {18, 19, 20, 21, 22, 23}
  };

  std::cout << "======= Rows ========\n";

  // Print out each row.
  for (int row_index = 0; row_index < NUM_ROWS; ++row_index)
  {
    int sum = 0; // The variable to save the sum in.

    // Remember that each element (row) is an array itself.
    // Print out the row.
    for (int col_index = 0; col_index < NUM_COLS; ++col_index)
    {
      // Print out the element.
      std::cout << grades[row_index][col_index] << ' ';

      sum += grades[row_index][col_index];
    }

    // Print out the sum and an endline every time we finish printing a row.
    std::cout << " = " << sum << std::endl;
  }

  std::cout << "======= Columns ========\n";

  // Print out each column.
  // Switch the inner loop with the outer loop.
  for (int col_index = 0; col_index < NUM_COLS; ++col_index)
  {
    int sum = 0;

    // Remember that each element (row) is an array itself.
    // Print out the row.
    for (int row_index = 0; row_index < NUM_ROWS; ++row_index)
    {
      std::cout << grades[row_index][col_index] << ' ';

      sum += grades[row_index][col_index];
    }

    // Print out the sum and an endline every time we finish printing a row.
    std::cout << " = " << sum << std::endl;
  }
}
