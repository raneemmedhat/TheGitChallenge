#include <iostream>
using namespace std;

int main()
{
   float a, b, result;
   char operation;
   switch(operation)
   {
   case '+':
         result = a + b;
         break;
	case '-':
         result = a - b;
         break;
	default:
         cout << "Invalid operation. Program will close." << endl;
         return -1;
}
   // Get numbers and mathematical operator from user input
   cin >> a >> operation >> b;
   return 0;
}