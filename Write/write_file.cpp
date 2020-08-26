#include <iostream>
#include <fstream>

using namespace std;
int main()
{
   fstream file; 							//object of fstream class
   string fileName;
   int age;
   int choice;
   string placeName;
   cout<<"\n1. Overwrite\n2.Append\n";
   cin>>choice;
   cout<<"\nEnter the file name in which you want to write: ";
   cin>>fileName;
   if (choice==1) {
     file.open(fileName,ios::out);
     if(!file)
     {
         cout<<"Error in creating file!!!"<<endl;
         return 0;
     }

     cout<<"File created successfully."<<endl;
     //write text into file
     cout <<"Writing to a text file:" << endl;
     cout << "Please Enter your age: ";
     cin>>age;
     file << "\n"<<age << endl;
     cin.ignore();
     cout<<"\nWhere do you live: ";
     cin>>placeName;
     file<<placeName;
     cout<<endl;
     cin.ignore();
     file.close();
     //closing the file
   }
   else {
     file.open(fileName, ios::app);
     if(!file)
     {
         cout<<"Error in creating file!!!"<<endl;
         return 0;
     }

     cout<<"File created successfully."<<endl;
     //write text into file
     cout <<"Writing to a text file:" << endl;
     cout << "Please Enter your age: ";
     cin>>age;
     file << "\n"<<age << endl;
     cin.ignore();
     cout<<"\nWhere do you live: ";
     cin>>placeName;
     file<<placeName;
     cout<<endl;
     cin.ignore();
     file.close();
     //closing the file
   }
   return 0;
 }
