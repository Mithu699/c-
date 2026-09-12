#include <iostream>
#include <string>

using namespace std;

int main()
{
   string userTea ;
   int teaQualtiy;

   cout << " what would you like to order in tea ? \n";

   getline(cin, userTea);

   // ask for quantity 

   cout << "how  many cups of " << userTea << " would you like to have ?";
   cin >> teaQualtiy;

   cout << teaQualtiy;
   cout << userTea;

    return 0;
    
}


