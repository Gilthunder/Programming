#include <iostream>
#include <cstdlib>
 
using namespace std;

int main() {
  
  // Your future is here
   cout << "MAGIC 8 BALL: \n";

 //seed of RNG
   srand(time(NULL));

   int answer = rand() % 10;
   
   if (answer == 0) {

     cout << "It is certain" << endl;
   }
    else if (answer == 3) {

       cout << "Yes - definitely." << endl;
  }
  else if (answer == 4) {

      cout << "You may rely on it." << endl;

  }
  else if (answer == 5) {

      cout << "As I see it, yes."<< endl;

  }
  else if (answer == 6) {

      cout << "Most likely" << endl;

  }
  else if (answer == 7) {

      cout << "Outlook good" << endl;;

  }
  else if (answer == 8) {

      cout << "Yes." << endl;

  }
  else if (answer == 9) {

      cout << "Signs point to yes." << endl;
  }
   else {

     cout << "Very doubtful" << endl;
   }



  
  
  return 0;
}
