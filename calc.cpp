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
	case '*':
         result = a * b;
         break;
	case '/':
         result = a / b;
         break;

}
   // Get numbers and mathematical operator from user input
   cin >> a >> operation >> b;
   return 0;
}