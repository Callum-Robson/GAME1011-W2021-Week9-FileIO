#include <iostream>
#include <fstream>
using namespace std;

//Function prototype
void showState(fstream&);

//int main()
//{
//	fstream testFile("stuff.dat", ios::out);
//	if (testFile.fail())
//	{
//		cout << "Cannot open the file.\n";
//		return 1;
//	}
//	int num = 420;
//	cout << "Writing to the file.\n";
//	testFile << num;
//	showState(testFile);
//	testFile.close();
//
//	//Open the file, read the number, show the status
//	testFile.open("stuff.dat", ios::in);
//	if (testFile.fail())
//	{
//		cout << "Cannot open the file.\n";
//		return 1;
//	}
//	//Read the file
//	cout << "Reading from the file.\n";
//	testFile >> num;
//	cout << "Read in data: " << num << endl;
//	showState(testFile);
//
//	//Force a bad operation
//	cout << "Forcing a bad read operation.\n";
//	testFile >> num;
//	showState(testFile);
//
//	testFile.close();
//	return 0;
//}

void showState(fstream& file)
{
	cout << "File Status:\n";
	cout << " eof bit: " << file.eof() << endl;	//End of file bit
	cout << " fail bit: " << file.fail() << endl;	//Faild and hard fail bit
	cout << " bad bit: " << file.bad() << endl;	//Bad bit
	cout << " good bit: " << file.good() << endl;	//Good bit
	file.clear();					//Clear all bits
}