#include <iostream>					//Header Files
#include <fstream>					// fstream is used for file operations
using namespace std;	

int main() 
{
	ifstream fin;	
	string fileName;
	cout<<"\nEnter the file name you want to open: ";
	cin>>fileName;				//ifstream is used for reading a file
	fin.open(fileName, ios::in);		// Opening file in input mode
	char ch;
	if (!fin) {
		cout<<"File not found";
	}
	while (!fin.eof() ) {				// Read file until we reach end of file (EOF)
	
		fin.get(ch);
		cout << ch;
	}
	return 0;
}
