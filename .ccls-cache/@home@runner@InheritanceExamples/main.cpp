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
    cout<<"\n1. Single Inheritance\n";
    cout<< "2. Multiple Inheritance\n";
    cout<<"3. Complex Tree\n";
    cout<<"4. Shapes v1\n";
    cout<<"5. Overriding #1\n";
    cout<<"6. Overriding #2\n";
    cout<<"7. Overriding #3\n";
    cout<<"99. Quit\n\n";
    cout<<"Choice? ";
    getline(cin,temp);
    choice = stoi(temp);
    
    switch(choice){
      case(1):
        cout<<"\nSingle Inheritance\n\n";
        system("cd Basics && make -s single && ./single && rm single && cd ~");
        break;
      case(2):
        cout<<"\nMultiple Inheritance\n\n";
        system("cd Basics && make -s multiple && ./multiple && rm multiple && cd ~");
        break;
      case(3):
        cout<<"\nComplex Tree\n\n";
        system("cd Basics && make -s tree && ./tree && rm tree && cd ~");
        break;
      case(4):
        cout<<"\nShapes v1\n\n";
        system("cd Basics && make -s shape1 && ./shape1 && rm shape1 && cd ~");
        break;
      case(5):
        cout<<"\nOverriding #1\n\n";
        system("cd Overriding && make -s over1 && ./over1 && rm over1 && cd ~");
        break;
      case(6):
        cout<<"\nOverriding #2\n\n";
        system("cd Overriding && make -s over2 && ./over2 && rm over2 && cd ~");
        break;
      case(7):
        cout<<"\nOverriding #3\n\n";
        system("cd Overriding && make -s over3 && ./over3 && rm over3 && cd ~");
        break;

      case(99):
        exit(0);
    }

      cout<<"\n\nHit enter to continue\n";
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    
      
  } while (true);
  

  return 0;
}