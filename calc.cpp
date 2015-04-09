#include <iostream>
using namespace std;

int main()
{
   float a, b, result;
   char operation;
<<<<<<< HEAD
<<<<<<< HEAD
   switch(operation)
   {
   case '+':
         result = a + b;
         break;
	case '-':
         result = a - b;
         break;
		 //multiplication
	case '*':
         result = a * b;
         break;
		 //division
	case '/':
         result = a / b;
         break;
		 //new kind of operations
	case'.'
		result = a-b/a+b;
		break;
	default:
         cout << "Invalid operation. Program will crash now." << endl;
         return -1;
}
=======
>>>>>>> hotfix
=======
 result = a + b;
 //some support functions
>>>>>>> hotfix
   // Get numbers and mathematical operator from user input
   //more fixes
   cin >> a >> operation >> b;
   return 0;
}