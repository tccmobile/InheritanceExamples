#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>
using namespace std;
  
int main()
{
    fstream myfile;
    string data;
    myfile.open("myfile.txt",ios::out);
if(!myfile)
   {
         cout<<"Cannot create File...";
    }
  else
  {
        cout<<"New file created"<<endl;
        myfile<<"This is file input output tutorial";
  
cout<<"Initial File Pointer Position at: "<<myfile.tellp()<<endl;
  
       myfile.seekp(-10, ios::cur);
  
cout<<"After seekp(-10, ios::cur), File Pointer Position at: "<<myfile.tellp()<<endl;
        myfile >> data;
        cout<<"value of data: "<<endl;
        myfile.close();
  }
  myfile.open("myfile.txt",ios::in);
  if(!myfile)
  {
       cout<<"Cannot open File...No such file";
  }
else
  {
     char ch;
     myfile.seekg(5, ios::beg);
    
cout<<"After seekg(5, ios::beg), File Pointer at: "<<myfile.tellg()<<endl;
    myfile >> ch;
        cout<<"value of data: "<<endl;
        cout<<ch<<endl;
        myfile.seekg(1, ios::cur);
cout<<"After seekg(1, ios::cur), File Pointer at: "<<myfile.tellg()<<endl;
    


        myfile.seekg(-12,ios::end);
    cout<<"After seekg(-12, ios::end), File Pointer at: "<<myfile.tellg()<<endl;
    myfile << std::noskipws;
      myfile>>ch;
        while (!myfile.eof()){
          if (isblank(ch)){

            cout<<" ";
          } else {
          cout<<ch;
            }
          myfile >> ch;
        }
        myfile.close();
  }
  
return 0;
  }