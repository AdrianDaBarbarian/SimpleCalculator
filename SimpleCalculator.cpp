#include <iostream>
#include <cmath>
#include <string>
#include <vector>


using namespace std;

// Global Variable declaration
string MessageA = "BAD INPUT!";

// Function declaration
void Add(int x, int y);
void Sub(int x, int y);
void Mul(int x, int y);
void Dev(int x, int y);
void Mod(int x, int y);
bool CheckA(int x, int y);

int main() {
	// your code goes here

	int CodeA = 1;
	int CodeB = 2;
	int CodeC = 3;
	int CodeX;
	

	cout << "1) addition 2) subtraction 3) multiplication 4) division: " << endl;
	cin >> CodeX;

	switch (CodeX) {
  case 1: {
	cout << "Please enter two numbers: " << endl;
	cin >> CodeA >> CodeB;
	Add(CodeA, CodeB);
	break;
  }
  case 2: {
	cout << "Please enter two numbers: " << endl;
	cin >> CodeA >> CodeB;
	Sub(CodeA, CodeB);
	break;
  }
  case 3: {
	cout << "Please enter two numbers: " << endl;
	cin >> CodeA >> CodeB;
	Mul(CodeA, CodeB);
	break;
  }
  case 4: {
	cout << "Please enter two numbers: " << endl;
	cin >> CodeA >> CodeB;
	CheckA(CodeA, CodeB);
	Dev(CodeA, CodeB);
	break;
  }
  case 5: {
	cout << "Please enter two numbers: " << endl;
	cin >> CodeA >> CodeB;
	CheckA(CodeA, CodeB);
	Mod(CodeA, CodeB);
	break;
  }
  default:
  cout << MessageA << endl;
  break;
}


	return 0;
}

// Function definition
void Add(int x, int y) {
	cout << (x + y) << endl;
}

void Sub(int x, int y) {
	cout << (x - y) << endl;
}

void Mul(int x, int y) {
	cout << (x * y) << endl;
}

void Dev(int x, int y) {
	cout << (x / y) << endl;
}

void Mod(int x, int y) {
	cout << (x % y) << endl;
}

bool CheckA(int x, int y) {
    if(y == 0) {
        cout << MessageA << endl;
        return 0;
    }    
}


/* Project Outline: This project is based on the same guidlines for the 1st major project for CSCI-40; outlined by Professor Kerney at Clovis Community College
*/

//Homework - In your "simple_calculator" directory
//
//You will write a program that will enable a user to do simple mathematical
//calculations.All strings should end with a newline.
//
//You must do it from scratch - don't forget the magic!
//
//It will need to do the following :
//
//1. Prompt the user with the following string : "1) addition 2) subtraction 3) multiplication 4) division: "
//
//2. Input their choice into an integer variable named whatever you want.
//
//3. Prompt them with the following string : "Please enter two numbers: "
//
//4. Input two integers from the keyboard into two variables called whatever you want.
//
//5. Do the math of their choice(i.e. if they typed 2 8 5, you will subtract(choice 2) 8 and 5).
//
//6. Output the result to the screen and quit.
//
//BONUS POINTS!
//
//7. Validate the input - NO DIVISION BY ZERO(or modulus by zero) and check to
//make sure they typed a number between 1 and 4 for the operator.
//
//If they gave a bad input : output "BAD INPUT!" and quit.
//
//8. Add modulus as option #5. Don't change the prompt (in #1), it will be a
//secret easter egg.Also modify #7 so it doesn't output BAD INPUT! on a 5.

/* NOTES:
>To compile: cl TripleX.cpp
>To run: TripleX

> TO launch vs code from terminal simply type in code.

> #include -preprocessor directive, <iostream> -headerfile

> S2.20 Expression statements - An expression followed by a ; 
	  Decleration statments - code that declares something like values.
	  Return statement - signles to the compiler that the program ends there. 
> Unreal engine has coding documentation structure guidelines like the 1st letter of each variable must be capitalized.
	and should start with an underscore or a letter and not use reserved keywords

> When renaming right click to change all occurances in vs code

*/ 