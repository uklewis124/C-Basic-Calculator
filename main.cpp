// #include <bits/stdc++.h>
#include <iostream> // Preprocessor directive (Tells the compiler to process this information before compiling the rest of the code
#include <algorithm>
// The #include instruction acts like a copy & paste command, and tells the program to copy and paste the contents of the iostream
// header to the top of the file.

// using namespace std;  // Declare the use of the standard namespace

// using std::cout;  // The equivelent of "from std import cout"
// using std::endl;  // The equivelent of "from std import endl"

using namespace std;

// Optionally, you can manually add everything, similar to just
// running "import std"
// std::cout

bool menu() {
    cout << "Main Menu" << endl;
    cout << "Enter \"Exit\" to exit the program. Type /h for more help." << endl;;
    cout << "________________________________________________________" << endl;

    cout << "Enter your expression: " << endl;
    cout << ">> ";
    string expression;
    cin >> expression;

    const string specialValues[3] = {"exit", "/h", "^c"};

    // Create lowercase copy
    string lwr_expr = expression;
    std::transform(lwr_expr.begin(), lwr_expr.end(), lwr_expr.begin(), ::tolower);

    // check to see if any special values
    if (std::any_of(std::begin(specialValues), std::end(specialValues), [&](const auto& val){ return val == lwr_expr; })) {
        cout << "Special Value Detected: " << expression << endl;
    } else {
        cout << "You entered: " << expression << endl;
    }

    if (expression == "exit") {
        return true;
    } else if (expression == "/h") {
        string helpStatement;
    }
    return false;
}

int main() {  // Define main function

    // std::cout << "Hello World" << std::endl;  // output statement

    // std:: required if not using the namespace std
    // std::cout << "Hello World" << endl;
    // std::cout << std::endl;
    // std::cout << "Enter your age: ";
    // int age;
    // std::cin >> age;
    // std::cout << "Your age is: " << age;

    // Looping the main menu
    bool running = true;
    while (running) {
        bool res = menu();
        if (res == true) {
            running = false;
        };
    };

    return 0;
}


