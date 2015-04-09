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
	//new release for this feature
	case'.'
		result = a*b/a+b;
		break;
		//release sth else
	default:
         cout << "Invalid operation. Program will close." << endl;
         return -1;
}
=======
>>>>>>> hotfix
   // Get numbers and mathematical operator from user input
   cin >> a >> operation >> b;
   return 0;
}