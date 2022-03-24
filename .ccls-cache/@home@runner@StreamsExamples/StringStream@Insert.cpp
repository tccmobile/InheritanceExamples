#include <iostream>
#include <sstream>
#include<string>
using namespace std;
int main()
{
  //insertion operator <<
    stringstream os;
    os << "software "; 
    cout<<"Current contents of stream: "<<os.str()<<endl;
//str(string) function to read input
    //os.str("TestingHelp"); 
    os<<"TestingHelp";
//str() function for extraction
    cout<<"Current contents of stream: "<<os.str()<<endl;
//extraction operator (>>)
    stringstream ss;
    ss<<"26 08 2019";
    string mystr1;
    ss >> mystr1;
    string mystr2;
    ss>>mystr2;
    string mystr3;
    ss>>mystr3;
    cout<<mystr1<< "/"<<mystr2<<"/"<<mystr3;
}
