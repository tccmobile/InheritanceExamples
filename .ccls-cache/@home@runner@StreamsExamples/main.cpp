#include <iostream>
#include <string>
#include <limits>
using namespace std;


int main() {
  int choice = 0;
  string temp;
  
  do {
    system("clear");
    cout << "\n\nWhich example program do wish to run?"<<endl;
    cout<<"\n1. StringStream #1\n";
    cout<< "2. StringStream #2\n";
    cout<<"3. Files #1\n";
    cout<<"4. Files #2\n";
    cout<<"5. Overloading #1\n";
    cout<<"6. Overloading #2\n";
    cout<<"7. Overloading #3\n";
    cout<<"99. Quit\n\n";
    cout<<"Choice? ";
    getline(cin,temp);
    choice = stoi(temp);
    
    switch(choice){
      case(1):
        cout<<"\nStringStream #1\n\n";
        system("cd StringStream && make -s Freq && ./Freq && rm Freq && cd ~");
        break;
      case(2):
        cout<<"\nStringStream #2\n\n";
        system("cd StringStream && make -s Insert && ./Insert && rm Insert && cd ~");
        break;
      case(3):
        cout<<"\nFiles #1\n\n";
        system("cd Files && make -s File1 && ./File1 && rm File1 && cd ~");
        break;
      case(4):
        cout<<"\nFiles #2\n\n";
        system("cd Files && make -s File2 && ./File2 && rm File2 && cd ~");
        break;
      case(5):
        cout<<"\nOverloading #1\n\n";
        system("cd Overloading && make -s Over1 && ./Over1 && rm Over1 && cd ~");
        break;
      case(6):
        cout<<"\nOverloading #2\n\n";
        system("cd Overloading && make -s Over2 && ./Over2 && rm Over2 && cd ~");
        break;
      case(7):
        cout<<"\n Overloading #3\n\n";
        system("cd Overloading && make -s Over3 && ./Over3 && rm Over3 && cd ~");
        break;

      case(99):
        exit(0);
    }

      cout<<"\n\nHit enter to continue\n";
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    
      
  } while (true);
  

  return 0;
}