#include <iostream>
#include <fstream>   //Needed to read and write files
using namespace std;

int main()
{
 ofstream ofile;                  //Creates an out stream to ofile
 ofile.open("Numbers.txt");       //Opens ofile and names it
 int num;
 for(num = 1; num <= 100; num++)  //Writes numbers 1-100 to a text file
  {
   ofile << num << endl;
  }
 ofile.close();                   //Closes file
 
 cout << "Reading data from file.\n";
 ifstream ifile;                  //Creates another stream to read
 ifile.open("Numbers.txt");       //Opens ifile
 while(ifile >> num)              //Reads all available lines
  {
   cout << num << endl;
  }
 ifile.close();                   //Closes file
return 0;
}