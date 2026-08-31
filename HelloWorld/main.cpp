#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std; // This makes it so you don't have to call "std" for every feature. e.g. std::cout etc.

int main() {
    // Variables
    std::cout << "Variables:\n";
    int file_size = 0;
    int counter = 0;
    double scales = 9.99;
    std::cout << file_size;

    // swap the value of two variables:
    int a = 1;
    int b = 2;
    int temp = a; // temporary bucket
    a = b; // don't have to initialize with "int" because already defined
    b = temp; // complete the swap
    std::cout << a;

    // Constants
    std::cout << "\nConstants:\n";
    const double pi = 3.14; // initiate as constant so that it cannot be modified
    std::cout << "Constant Pi: " << pi << "\n";

    // Naming Conventions
    std::cout << "\nNaming Conventions:\n";
    std::cout << "Snake Case: file_size\n";
    std::cout << "Pascal Case: FileSize\n";
    std::cout << "Camel Case: fileSize\n";

    //Mathematical Expressions
    std::cout << "\nMathematical Expressions:\n";
    int x = 10;
    int y = 3;
    int z = x + y; // "+" = addition operator, and "x" and "y" = operands
    std::cout << z << "\n";
    double x_2 = 10; // have to have one as double for division so changes output from int
    double z_2 = x_2 / y; // division: double only works if one of vars is double also (rather than int)
    std::cout << z_2 << "\n";
    //Modulus: returns the remainder of the division
    int z_3 = x % y; // remainder after dividing a by y.
    std::cout << z_3 << "\n";
    x++; // "increment" operator (adds 1 to x) // x-- also exists.
    z_3 = x % y; // now this is remainder after dividing 11 by 3 (instead of 10 by 3)
    std::cout << "New z remainder after incrementing x to 11: " << z_3 << "\n";
    // postfix (i++): adds 1 after value; vs.prefix (++i): adds 1 before value;
    y = x++; // y = current x value, and x will be modified +1
    std::cout << "Modified y {y = x++: y becomes x before increment}: " << y << "\n";
    std::cout << "Modified x {y = x++: x gets incremented itself}: " << x << "\n";

    // Writing  Output to the Console
    int q = 10;
    std::cout << "\nq = " << q << std::endl; // standard output stream (standard output = console window), "<<" = stream insertion operator
    // 👆Combining multiple insertion operators into same line to print multiple objects
    // "std::endl" = end of the line (rather than inserting string "\n"

    // Exercise
    std::cout << "\nExercise (Tax Calculation):\n";
    const double sales = 95000;
    const double salesTax = 0.04;
    const double countyTax = 0.02;
    double stateTaxPay = sales * salesTax;
    double countyTaxPay = sales * countyTax;
    cout << "State tax to pay: $" << stateTaxPay << endl;
    cout << "County tax to pay: $" << countyTaxPay << endl;

    // User Input
    std::cout << "\nUser Input:\n";
    cout << "⚠️Enter a value: ";
    double value; // Must declare variable before using "cin"
    cin >> value; // ">>" = string extraction operator (opposite of stream insertion operator) --> direction of data flow
    // Take user input and put it into the variable
    cout << value << endl;

    // can also ask for multiple values:
    // cin >> x >> y;
    // cout << x << "and" << y;

    // Convert fahrenheit to celsius
    cout << "⚠️Temperature in Fahrenheit: ";
    double tempF;
    cin >> tempF;
    cout << "Temperature converted to Celsius:" << endl;
    cout << "(" << tempF << "-32) / 1.8 = " << (tempF-32) / 1.8 << endl;

    // Writing to the Console
    std::cout << "\nWriting to Console:\n";
    double result = pow(2, 3);  // using cmath library; 2^3 (2 to power of 3)
    cout << result << endl;
    // Area of circle
    cout << "⚠️Radius of Circle: ";
    double radius;
    cin >> radius;
    double areaCircle = pi * pow(radius, 2);
    cout << "The area of the circle is " << areaCircle << "." << endl;

    //Comments
    /*
     *Longer comment; multi-line comment... standard also comment line above code. use sparingly.
     */

    // Fundamental Data Types
    std::cout << "\nFundamental Data Types:\n";
    // declaring vars: have to declare type. this is referred to as "statically-typed" language (unlike python, which is dynamically typed)
    double pricey = 99.99;
    float interestRate = 3.67f; // have to include the "f"
    long fileSize = 90000L; // have to include the "L" for long
    char letter = 'a';
    bool isValid = false;
    // you can also set "auto varname = x[L/f/etc.]

    int number {}; // using curly brackets helps you stay correct "guarded" - has to be int

    //Decimal Systems (decimal, binary, hexadecimal)
    // hexadecimal uses 0-9 and A-F to represent a number
    /* Steps:
     * 1. Take a number. Each slot is 1s, 16s, 256s, etc. (powers of 16)
     * 2. Divide by 16 in steps, the remainder is the value. Put it in corresponding slot.
     * 3. Any remainder values 10-15 take on A-F
     */

    // Narrowing
    std::cout << "\nNarrowing:\n";
    // Narrowing = initializing a variable of a "smaller type using a larger type"
    int longNumber = 1'000'000;
    // short narrowedNumber = {longNumber}; // This generates error bc {} protect correctness
    short narrowedNumber = longNumber; // this will narrow/change the number
    cout << narrowedNumber << endl;
    // 16960 < 1M

    // Generate Random Numbers
    std::cout << "\nGenerate Random Numbers:\n";
    srand(time(0)); // "srand" = seed random // time(0) = seconds since 1970
    // time(0) consistent but srand randomizes it
    int randInteger = rand() % 10; // This alone would not gen a newly random each time
    cout << randInteger << endl;

    // Note: "random" library is the better/more modern way to generate random numbers  

    return 0; // return 0 to tell operating that program terminated correctly
}