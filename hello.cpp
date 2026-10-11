#include <iostream>
using namespace std;
// int main(){
//     cout<<"Hello";
//     return 0;
// }

// Variables in C++ - 

// int main(){
//     int age= 20;                  //for integer
//     double height= 5.5;           //for decimal
//     char bloodGroup= 'A';         //for single character
//     bool isStudent= true;         //boolean - return 1 for true or 0 for false;   
//     string name= "Shivansh";      //for string;
//     age=21;                       //updated the variable value;
//     bloodGroup= 'O';

//     cout<<"Name:"<<name<<endl;
//     cout<<"Age:"<<age<<endl;
//     cout<<"Height:"<<height<<endl;
//     cout<<boolalpha;                     // provides true or false for boolean otherwise 1 or 0;
//     cout<<"IsStudent:"<<isStudent<<endl;
//     cout<<"Blood Group:"<<bloodGroup<<endl;

//     return 0;
// }

// Cin - this is the C++ version of getting input from user just like prompt() in JS;

// int main(){
//     string name;
//     int age;

//     cout<<"Enter Your Name:";
//     cin>>name;

//     cout<<"Enter your Age:";
//     cin>>age;

//     cout<<"\nHello "<<name<<", you are "<<age<<" years old."<<endl;

//     return 0;
// }

// cin reads characters until it hits a space, tab, or Enter.

// to take a full line (including spaces) - Use getline instead

// int main(){
//     string name;
//     int age;

//     cout<<"Enter Your Name:";
//     getline(cin, name);           // reads the entire line, including spaces

//     cout<<"Enter yourAge:";
//     cin>>age;

//     cout<<"\nHello "<<name<<", you are "<<age<<" years old."<<endl;

//     return 0;
// }

// Constants in C++ - A constant is a value that cannot be changed after it is declared.
// ex- const int MAX_AGE = 100; OR const double PI = 3.14159;

// OPERATOR - Operators are symbols that perform operations on variables and values.
// Arithmetic Operator : +, -, *, /, %;
// When both numbers are int, / gives only the whole number part (integer division).
// ex - cout << 10 / 3;    // 3         AND      cout << 10.0 / 3;  // 3.333...
// Relational Operators (Comparison) : == , !=, > , < , >= , <=
// Logical Operators : && , || , !;
// Assignment Operators : =, += , -= , *= , /=;

// int main(){
//     int a=10, b=3;

//     cout << "a + b = " << a + b << endl;
//     cout << "a - b = " << a - b << endl;
//     cout << "a * b = " << a * b << endl;
//     cout << "a / b = " << a / b << endl;
//     cout << "a % b = " << a % b << endl;

//     cout << "\na == b : " << (a == b) << endl;
//     cout << "a > b  : " << (a > b) << endl;

//     cout << "\nLogical AND: " << (a > 5 && b < 5) << endl;
//     cout << "Logical OR : " << (a > 15 || b < 5) << endl;

//     a += 5;   // a becomes 15
//     cout << "\nAfter a += 5, a = " << a << endl;

//     return 0;
// }

// Precedence and Association - this decides which operator is calculated first when multiple operators are in one expression.
// Precedence - Higher precedence operators are calculated first. BODMAS rule;
// Associativity - When two operators have same precedence, associativity decides the order.
// 1) Most operators are Left to Right : ex - int x = 10 - 5 - 2;     // Left to Right → (10 - 5) - 2 = 3
// 2) Assignment operators (= +=) are Right to Left : ex - int y = a = b = 5;      // Right to Left → a = (b = 5)

