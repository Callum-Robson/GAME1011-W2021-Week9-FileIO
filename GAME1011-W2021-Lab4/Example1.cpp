//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//When working with a file stream
//	//1. Declare the filestream object to use
//	//2. Open the filestream to a desired file (note: can be combined with 1)
//	//3. Work on the file
//	//4. Close the filestream
//
//	//1.
//	fstream inOutFile;
//	string word;
//
//	//2.
//	inOutFile.open("InOut.txt");
//	//Error checking
//	if (!inOutFile)
//	{
//		//File not found
//		cout << "File not found.\n";
//		return 1;
//	}
//
//	//3.
//	while (inOutFile >> word)
//	{
//		cout << word << endl;
//	}
//
//	//Clear the EOF flag (end of file flag)
//	inOutFile.clear();
//
//	inOutFile << "Wallace" << endl;
//
//
//	//4.
//	inOutFile.close();
//
//	return 0;
//}