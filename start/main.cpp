#include <iostream>
using namespace std;

//  USE extern TO DECLARE VARIABLE AT ANY PLACE

extern int d;

int main () {
   // Local variable declaration:
   int a, b;
   int c,d;

   // actual initialization
   a = 10;
   b = 20;
   c = a + b;
   d = a*b;

   cout << c<<endl;
   cout << d;


   return 0;
}
