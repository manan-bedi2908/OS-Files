#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
   fstream file; 							//object of fstream class
   string fileName;
   int age;
   string placeName;
   cout<<"\nEnter the file name in which you want to write: ";
   cin>>fileName;
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
   file << age << endl; 
   cin.ignore();
   cout<<"\nWhere do you live: ";   
   cin>>placeName;
   file << placeName;
   cin.ignore();
   file.close();  
   //closing the file
}
