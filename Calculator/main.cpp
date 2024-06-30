#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Declare variables to store user inputs and result
    double num1, num2, result;
    char operation, choice='\0';
    bool error=false;

    do{

    error=false;


    // Prompt the user for the first number
    cout << "Enter the first number: \n";
    cin >> num1;

    // Prompt the user for the operation
    cout << "Enter an operation (+, -, *, /): \n";
    cin >> operation;

    // Prompt the user for the second number
    cout << "Enter the second number: \n";
    cin >> num2;

    // Perform the calculation based on the chosen operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Cannot divide by zero." << endl;
                error=true;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            error=true;
            break;
    }

    // Display the result
    if(!error)
        cout << num1 << " " << operation << " " << num2 << " = " << result << endl;
    // Ask if the user wants to perform another calculation
        cout << "Do you want to perform another calculation? (y/n): \n";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');


    return 0; // Exit the program successfully
}
