#include <iostream>
using namespace std;

//function prototype-A function prototype describes the function interface to the compiler by giving details such as the number and type of arguments and the type of return values. The prototype declaration looks just like a function definition except that it has no body i.e., its code is missing.

// type function-name(arguments);

//int sum(int a, int b);---> acc
//int sum(int a, b);---> wrong
int sum(int, int); //---> acceptable
void g();

int main()
{

    int num1, num2;

    cout << "enter the num1" << endl;
    cin >> num1;
    cout << "enter the num2" << endl;
    cin >> num2;
    // num1, num2 are are actual parameters- pass to the function
    cout << "the sum is" << sum(num1, num2);

    g();
    return 0;
}
int sum(int a, int b)
//Formal parameters a and b will be taking values from actual parameters num1 and num2
{
    int c = a + b;
    return c;
}
void g(){
    cout<<"hi iam void function i will not return anything";
}