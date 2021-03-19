#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//int main()
//{
//	//Variable to read in a file
//	fstream file;
//	string input;
//
//	//Open the file
//	file.open("wallace.txt", ios::in);
//	if (file.fail())
//	{
//		cout << "File open error!" << endl;
//		return 1;
//	}
//
//	/*file >> input;*/		// Reads file data up to a " " (space) character into input var,
//						// if called again will read next data after the space
//
//
//	getline(file, input); // gets whole line instead of just up until " "(space) character
//	
//	while (!file.fail())	// could alternative be !file.eof()
//	{
//		cout << input << endl;
//		/*file >> input;*/		// Reads next file data into input
//	
//		getline(file, input);
//	}
//	
//	file.close();
//
//	return 0;
//}

