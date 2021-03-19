
#include <iostream>
#include <fstream>
using namespace std;

//int main()
//{
//	char ch;
//	fstream ioFile("rewind.txt", ios::out);
//
//	//Open the file
//	if (!ioFile)
//	{
//		cout << "Error in trying to create the file";
//		return 1;
//	}
//
//	//Write to the file
//	ioFile << "Is this class too easy?" << endl << "No, you are just super smart." << endl;
//	ioFile.close();
//
//	//Read the file and print to the screen
//	ioFile.open("rewind.txt", ios::in);
//	if (!ioFile)
//	{
//		cout << "Error in trying to open file";
//		return 1;
//	}
//
//	ioFile.get(ch);
//	while (!ioFile.fail())
//	{
//		cout.put(ch);
//		ioFile.get(ch);
//	}
//
//	//Rewind the file (Random access files)
//	ioFile.clear();
//	//ioFile.seekg(0, ios::beg); //seekget, seekp(seekput) would write to file
//	
//	ioFile.seekg(-20, ios::end); // this will get from the end of the file back 20 bits/characters
//
//	//Read the file again and print to the screen
//	ioFile.get(ch);
//	while (!ioFile.fail())
//	{
//		cout.put(ch);
//		ioFile.get(ch);
//	}
//
//	ioFile.close();
//
//	return 0;
//}