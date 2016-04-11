/*
  Exam 2 Part IV: CS1 Simple Decoder ANswer
  Decode string by using Caesar Cipher 10.

  This program demonstrates how you can reverse the Caesar cipher.
  This was not a test question, but it may help you to know.
*/

#include <iostream>
#include <string>
#include <fstream>

int main()
{
  std::ifstream inFile;
  std::ofstream outFile;
  std::string inName;
  std::string outName;
  char input;

  // Read the input file.
  // NOTE: This is the answer to the first sub question.
  std::cout << "Enter the file name to decode: ";
  std::cin >> inName;

  // Open the input file.
  inFile.open(inName);

  // Test for errors.
  if (!inFile)
  {
    std::cerr << "Error opening " << inName << std::endl;
    exit(EXIT_FAILURE);
  }

  // Get the output file.
  // NOTE: This is the answer to the second sub question.
  std::cout << "Enter the output file name: ";
  std::cin >> outName;

  // Open the output file.
  // NOTE: This will create a file if it does not exist.
  outFile.open(outName);

  // Test for errors.
  if (!outFile)
  {
    std::cerr << "Error opening " << outName << std::endl;
    exit(EXIT_FAILURE);
  }

  // Read the contents of the input file, one character at a time, encode it,
  // and store it in the output file.
  // NOTE: This is the answer to the last sub question.
  //
  // While the file is still good (ie the open was good and not eof)
  while(inFile.good())
  {
    // Get the character.
    input = inFile.get();
    // You can validly add to characters in C++ to manipulate their ASCII value.
    char output = input - 10;
    // You only need to write out one character at a time. You could use
    // outFile.write() as well, but that's usually reserved for blocks of data.
    outFile.put(output);
  }

  std::cout << "This file has been decrypted. \n";

  inFile.close();
  outFile.close();
}
