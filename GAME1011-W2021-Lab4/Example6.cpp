#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//int main()
//{
//	string input;
//	fstream file("nums.dat", ios::out | ios::binary);
//	if (!file)
//	{
//		cout << "Error opening file.";
//		return 1;
//	}
//
//	//Integer data to write to binary file
//	int buffer[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int buffer2[] = { 0,0,0,0,0,0,0,0,0,0 };
//	int size = sizeof(buffer) / sizeof(buffer[0]); //Determines how many elements in the array;
//
//	//Write the data and close the file
//	cout << "Now writing the data to the file.\n";
//	file.write(reinterpret_cast<char*>(buffer), sizeof(buffer)); //Use write function because we're writing to binary file, takes in a pointer to char(just the pointer to first byte in the buffer) since the buffer is an array we can just use it as is, if we were using something else it would need to be a reference, and the size
//	file.close();
//
////Open the file and read the contents of the binary file
//	file.open("nums.dat", ios::in);
//	if (!file)
//	{
//		cout << "Error opening file.";
//		return 0;
//	}
//
//	cout << "Now reading the data back.\n";
//	file.read(reinterpret_cast<char*>(buffer2), sizeof(buffer2));
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << buffer2[i] << " ";
//	}
//	file.close();
//
//	
//
//	return 0;
//}