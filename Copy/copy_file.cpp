#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  char ch;
  string sourceFile;
  string destinationFile;
  ifstream fin;
  ofstream fout;
  cout<<"\nEnter the source file name: ";
  cin>>sourceFile;
  cout<<"\nEnter the new file name in which you want to copy the content: ";
  cin>>destinationFile;
  fin.open(sourceFile, ios::in);
  fout.open(destinationFile, ios::out);
  if(!fin) {
    cout<<"\nFile not found!!";
  }
  while(!fin.eof())
  {
    fin.get(ch);
    fout.put(ch);
  }
  fin.close();
  fout.close();
  return 0;
}
