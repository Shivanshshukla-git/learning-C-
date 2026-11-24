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

// if else - 
// int main(){
//     int num;

//     cout<<"Enter a Number: ";
//     cin>>num;

//     if(num>0){
//         if(num%2==0){
//             cout<<"The Number "<<num<<" is positive and even";
//         }
//         else if(num%2!=0){
//             cout<<"The Number "<<num<<" is positive and odd";
//         }
//     }
//     else if(num<0){
//         if(num%2==0){
//             cout<<"The Number "<<num<<" is negative and even";
//         }
//         else if(num%2!=0){
//             cout<<"The Number "<<num<<" is negative and odd";
//         }
//     }
//     else if(num == 0){
//         cout<<"The Number "<<num<<" is zero";
//     }

//     return 0;
// }

// int main(){
//     int age;
//     cout<<"Enter your age: ";
//     cin>>age;

//     string result = age>=18? "Can drive": "Not legal";
//     cout<<result;

//     return 0;
// }


// Switch case - switch only works with int, char, and enum (not with string or float in normal cases).
// default is optional but recommended.

// int main(){
//     int day;
//     cout << "Enter day number (1-7): ";
//     cin >> day;

//     switch (day) {
//         case 1:
//             cout <<"The day is Monday";
//             break;
//         case 2:
//             cout << "The day is Monday";
//             break;
//         case 3:
//             cout << "The day is Monday";
//             break;
//         case 4:
//             cout << "The day is Monday";
//             break;
//         case 5:
//             cout << "The day is Monday";
//             break;
//         case 6:
//             cout << "The day is Monday";
//             break;
//         case 7:
//             cout << "The day is Monday";
//             break;
//         default:
//             cout << "Invalid day";
//     }

//     return 0;
// }


// LOOPS - three main loops are : for, while and do while;

// int main(){
//     int num;

//     cout<<"Enter a Number: ";
//     cin>>num;

//     for(int i=1; i<=10; i++){
//         cout<<num <<"*"<< i<< "=" << num*i<<endl;
//     }

//     return 0;
// }

// Breaks and Continue in loops in C++ is similar to JS;
// int main(){
//     for(int i=1; i<=20; i++){
//         if(i%2 != 0){
//             if(i == 15) break;
//             continue;
//         }

//         cout<<i<<""<<endl;
//     }
//     return 0;
// }


// Functions - A function is a reusable block of code that performs a specific task.
// We use void when the function only does something (prints, changes values, etc.) and you don’t need any result back. 
// Otherwise we also define the returnType like int, double, float, etc.. ex - 
// void sayHello(){
//     cout<<"Hello from Function!"<<endl;
// }
// int add(int x, int y){
//     return x+y;
// }
// int main(){
//     sayHello();
//     sayHello();
//     sayHello();

//     cout<<add(5,8)<<endl;
//     cout<<add(13, 12)<<endl;

//     return 0;
// }

// another ex - 
// void isEven(int x){
//     if(x%2 == 0){
//         cout<<x<<" is even"<<endl;
//     }
//     else{
//         cout<<x<<" is odd"<<endl;
//     }
// }
// int main(){
//     isEven(8);
//     isEven(13);

//     return 0;
// }

// Recursion - Recursion means a function that calls itself. A recursive function solves a problem by breaking it into a smaller version of the same problem,
// until it reaches a simple stopping point (called the base case). Two mandatory parts : 2) Recursive case- the function calls itself with a smaller/simpler input;
// 1) Base case- condition that stops the recursion (otherwise it runs forever and crashes).
// void func(int x){
//     if(x>0){
//         cout<<x<<endl;
//         func(x-2);
//         cout<<x<<endl;
//     }
// }
// int main(){
//     func(5);
//     return 0;
// }

// another ex - 
// void countDown(int n){
//     if(n == 0){
//         cout<<"Blast Off!"<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     countDown(n-1);
// }
// int main(){
//     countDown(10);
//     return 0;
// }

// another ex - factorial
// int factorial(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }
// int main(){
//     cout<<factorial(6)<<endl;
//     return 0;
// }


// Pointers - A pointer is a variable that stores the memory address of another variable.
// int main(){
//     int x = 10;
//     int *ptr = &x;                             // &x → address of x; *ptr → value at that address (dereference);
//     cout<<*ptr<<endl;                          // output - 10;
//     return 0;
// }

// Call by Value (what we’ve been using so far). 
// A copy of the value is sent to the function. Changing the parameter inside the function does not affect the original variable.
// void change(int a){
//     a = 100;
// }
// int main(){
//     int x = 20;
//     change(x);
//     cout<<x<<endl;
//     return 0;
// }

// Call by Reference (using reference &) - The function works on the original variable, not a copy.
// void change(int &a){
//     a = 100;
// }
// int main(){
//     int x = 20;
//     change(x);
//     cout<<x<<endl;
// }


// Function overloading - Same function name, but different number or type of parameters.
// Rules of Overloading: 1) Number of parameters different; 2) Type of parameters different.
// int sum(int a, int b){
//     return a+b;
// }
// int sum(int a, int b, int c){
//     return a+b+c;
// }
// double sum(double a, double b){
//     return a+b;
// }
// int main(){
//     cout<<sum(9, 12)<<endl;
//     cout<<sum(12, 11, 8)<<endl;
//     cout<<sum(3.14, 6.56)<<endl;
//     return 0;
// }

// Default Arguments: You can give default values to parameters. If the caller doesn’t pass that argument, the default is used.
// Important rules: Default arguments must be at the end. Once you give a default to one parameter, all parameters after it must also have defaults.
// void greet(string name = "Guest", int times = 1){
//     for(int i=0; i<times; i++){
//         cout<<"Hello, "<< name <<endl;
//     }
// }
// int main(){
//     greet();
//     greet("Shivansh");
//     greet("Shivansh", 3);
//     return 0;
// }


// Arrays in C++ - An array is a collection of elements of the same data type stored in continuous memory locations.
// 1) Declaration & Initialization - 
// int marks[5];                          // declares array of 5 integers (garbage values);
// int marks[5] = {90, 85, 78, 92, 88};   // declare + initialize;
// int marks[] = {90, 85, 78, 92, 88};    // size is automatically 5;
// int marks[5] = {90, 85};              // rest become 0 → {90, 85, 0, 0, 0}
// 2) To access elements in arrays - indexing starts from 0.

// 3) Taking Input & Printing - 
// int main(){
//     int n;
//     cout<<"Enter the size of array: "<<endl;
//     cin>>n;

//     // Input - 
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cout<<"Enter Element at"<< i<<":"<<endl;
//         cin>>arr[i];
//     }

//     // Output -
//     cout<<"\nArray elements: ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// 4) How Arrays are Passed to Functions - In C++, when you pass an array to a function, it decays into a pointer. 
// That means - a) The function works on the original array (not a copy); b) The function only receives the address of the first element.
// Because array elements are stored continuously in memory, the function can reach every other element using that starting address + index.
// void printArray(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int nums[] = {10, 20, 30, 40, 50};
//     int size = 5;

//     printArray(nums, size);
//     return 0;
// }

// another example - 
// void changeArray(int arr[], int size){
//     arr[0] = 100;                  //changing first element;
//     arr[1] = 200;                  //changing second element;
// }
// int main(){
//     int nums[] = {10, 20, 30, 40, 50};

//     for(int i=0; i<5; i++){
//         cout<<nums[i]<<" ";           // output - 10 20 30 40 50;
//     }

//     cout<<endl;
//     changeArray(nums, 5);
//     for(int i=0; i<5; i++){         
//         cout<<nums[i]<<" ";           // output - 100 200 30 40 50
//     }
//     return 0;
// }

// practice problem - 
int findMax(int arr[], int size){
    int maxVal = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]> maxVal){
            maxVal = arr[i];
        }
    }
    return maxVal;
}
int main(){
    int size;
    cout<<"Enter the size of Array: "<<endl; 
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter Element at "<<i<<" :"<<endl;
        cin>>arr[i];
    }

    cout<<"The largest Number in the array is: "<<findMax(arr, size)<<endl;
    return 0;
}