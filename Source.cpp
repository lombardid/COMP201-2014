#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string output_1;
	string input_1;

	/*Below is where you enter the output and input file names 
	(in this case "out.txt" and "test.txt")*/
	
	cout << "Enter the output file name: " << endl;
	cin >> output_1;
	cout << "Enter the input file name: " << endl;
	cin >> input_1;

	ifstream in;
	ofstream out;
	in.open("test.txt");
	out.open("out.txt");
	int number;
	int sum=0;
	//Program returns 1 if test.txt fails to open
	if (in.fail())
	{
		cout << "Input file failed to open!" << endl;
		return 1;
	}
	//The titles of each column sent to out.txt
	out << "x" << '\t' << "x^2" << '\t' << "Current Sum" << endl;
	out << "=" << '\t' << "===" << '\t' << "===========" << endl;
	// While loop to input values from test.txt into the variable "number"
	// Takes values regardless of being positive, negative, or zero
	// Sum was initialized as 0 above, sum becomes the collective sum plus the next number
	/* Values of "number" inputted into first column, 
	"number^2" inputted into second column, 
	new "sum" inputted into third column */
	// These values are sent to out.txt in the proper columns
	while(in >> number)
	{
		if(number <= 0 || number > 0)
		{
			sum = sum + number;
			out << number << '\t' << number*number << '\t' << sum << endl;
		}
	}

	in.close();
	out.close();

	return 0;
}