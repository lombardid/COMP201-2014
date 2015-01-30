#include <iostream>
#include <sstream>
#include <string>
#include <stack>

using namespace std;

// preprocessor directive used to determine what happens
// when the code reads in "DECIDE". Prior to compilation 
// of the code, the preprocessor will determine the 
// the directives throughout the code
#define DECIDE(c) if (!(c)) throw ""

double rpn(stack<string> & stack_num)
{
	// Testing to make sure the stack is not empty
	DECIDE(!stack_num.empty());
	double a,b;
	// auto is the type used so that the variable type can be determined
	// based on initializers; this allows op_num to become a type int
	// if a number is entered by the user, or a type char if an operand
	// is entered.
	// top accesses the next element in the stack and pop removes the top element
	auto op_num=stack_num.top(); stack_num.pop();
	// return size of stack
	auto n=op_num.size();
	// if statement to determine whether a number or operand is being used
	if (n==1 && string("+-*/").find(op_num)!=string::npos)
	{
		b=rpn(stack_num);
		a=rpn(stack_num);

		// nested if statement to determine which operand is being used 
		// and what to do with the numbers inputted prior to that
		if (op_num[0]=='+')
		{
			a+=b;
		}
		else if (op_num[0]=='-')
		{
			a-=b;
		}
		else if (op_num[0]=='*')
		{
			a*=b;
		}
		else
		{
			a/=b;
		}
	}
	else
	{
		unsigned i; 
		// if a is not an operand entered by the user, stod reads 
		// a as a number
		a = stod(op_num,&i); 
		DECIDE(i==n); 
	}
	return a;
}		


int main()
{
	string s;
	cout << "Please enter only numbers and operands, leaving spaces in between each entry." << endl;
	// Loop calls getline on cin to read lines into the variable s
	while (getline(cin,s))
	{
		stack<string> stack_num;
		istringstream stringstream(s);
		string op_num;
		while (stringstream >> op_num)
		{
			// Inserts a new element at top of stack
			stack_num.push(op_num);
		}
		if (!stack_num.empty())
		{
			// try and catch are used to call function rpn and also
			// to check for syntax errors within the user's input
			// If there is a syntax error(user does not input a number
			// or operand) then the program outputs an error message
			try
			{
				auto x = rpn(stack_num);
				DECIDE(stack_num.empty());
				cout << x << endl;
			}
			catch(...)
			{
				cout << "There is an error with your input\n";
			}
		}
	}
	return 0;
}
