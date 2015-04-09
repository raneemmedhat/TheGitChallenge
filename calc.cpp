#include <iostream>
using namespace std;

int main()
{
   float a, b, result;
   char operation;
<<<<<<< HEAD
   switch(operation)
   {
   case '+':
         result = a + b;
         break;
	case '-':
         result = a - b;
         break;
	case '*':
         result = a * b;
         break;
	case '/':
         result = a / b;
         break;
	case'.'
		result = a-b/a+b;
		break;
	default:
         cout << "Invalid operation. Program will crash now." << endl;
         return -1;
}
=======
>>>>>>> hotfix
   // Get numbers and mathematical operator from user input
   cin >> a >> operation >> b;
   return 0;
}