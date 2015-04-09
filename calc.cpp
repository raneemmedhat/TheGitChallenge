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
   //addition
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
<<<<<<< HEAD
	//last comment
=======
		 //new kind of operations
>>>>>>> releasebranches
	case'.'
		result = a-b/a+b;
		break;
		//release sth else
		//more releases
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
<<<<<<< HEAD
   //some changes
=======
   //more fixes
>>>>>>> releasebranches
   cin >> a >> operation >> b;
   return 0;
}