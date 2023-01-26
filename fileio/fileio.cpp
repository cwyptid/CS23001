// Eddie Lampert
// CS 23001 Lab #4
// fileio.cpp
// September 27 2021
//
// Creates two functions: 
// A function that reads all text up to a space character 
// A function that reads two numbers ending in a ';' and adds them together, then outputs the result

#include <iostream>
#include <fstream>

void readText(){ // reads all text up to a space character
  std::ifstream file ("fileio-text.txt"); // opens file pointer

  if(!file.is_open()){ // ensures that the file open is valid
    std::cout << "ERROR: unable to open file\n";
    return;
  }
  else{
    char ch;
    file.get(ch); // bye by byte reading

    while(!file.eof() && ch != ' '){ // while the file hasnt ended and stream hasnt encountered a white space
      std::cout << ch; // print characters
      file.get(ch);
    }
    file.close(); // closes file
    std::cout << "\n";
  }
}

void readToAdd(){ // reads two numbers ending in a ';' and adds them together, then outputs the result
  std::ifstream file ("fileio-data-1.txt"); // open file pointer

  if(!file.is_open()){ // ensures that the file open is valid 
    std::cout << "ERROR: unable to open file\n";
    return; 
  }
  else{
    int digit1;
    int digit2;
    int result;
    char ch; 
    
    file >> digit1; // reading first number
    file >> ch; // get past first semicolon
    file >> digit2; // reading second number

    result = digit1 + digit2; // add two numbers together
    std:: cout << "result: " << result; // print result
  }
  file.close(); // closes file
  std::cout << "\n";
}

int main(){
  readText();
  readToAdd();
}