#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  ifstream fin;
  char ch;
  string fileName;
  char delimiter = '\n';
  cout<<"\nEnter the file name you want to read: ";
  cin>>fileName;
  fin.open(fileName, ios::in);
  if(!fin)
  {
    cout<<"\nFile not found!!";
    exit(1);
  }
  while(!fin.eof()) {
    fin.get(ch);
    cout<<ch;
    if(ch==delimiter) {
      break;
    }
  }
  fin.close();
  return 0;
}
