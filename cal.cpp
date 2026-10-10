#include<iostream>
using namespace std;

void simpleCalculator(){
    cout << string(40 , '-') << endl;
    cout << "\tWelcome to calculator." << endl;
    cout << string(40 , '-') << endl;

    int num1 , num2;
    char choice;

    while(true){
        cout << "Enter < + > for addition" << endl;
        cout << "Enter < - > for subtraction" << endl;
        cout << "Enter < * > for multiplication" << endl;
        cout << "Enter < / > for division" << endl;
        cout << "Enter < % > for remainder" << endl;
        cout << "Enter < E > for exit..." << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        system("cls");

        switch(choice){
            case '+':
                cout << string(25 , '-') << endl;
                cout << "\tAddition" << endl;
                cout << string(25 , '-') << endl;
                cout << "Enter first number : ";
                cin >> num1;
                cout << "Enter second number : ";
                cin >> num2;
                cout << "\nSum of " << num1 << " and " << num2 << " : " << num1 + num2 << endl;
                break;

            case '-':
                cout << string(27 , '-') << endl;
                cout << "\tSubtarction" << endl;
                cout << string(27 , '-') << endl;
                cout << "Enter first number : ";
                cin >> num1;
                cout << "Enter second number : ";
                cin >> num2;
                cout << "\nDifference of " << num1 << " and " << num2 << " : " << num1 - num2 << endl;
                break;

            case '*':
                cout << string(30 , '-') << endl;
                cout << "\tMultiplication" << endl;
                cout << string(30 , '-') << endl;
                cout << "Enter first number : ";
                cin >> num1;
                cout << "Enter second number : ";
                cin >> num2;
                cout << "\nProduct of " << num1 << " and " << num2 << " : " << num1 * num2 << endl;
                break;

            case '%':
                cout << string(25 , '-') << endl;
                cout << "\tRemainder" << endl;
                cout << string(25 , '-') << endl;
                cout << "Enter first number : ";
                cin >> num1;
                cout << "Enter second number : ";
                cin >> num2;
                cout << "\nRemainder of " << num1 << " and " << num2 << " : " << num1 % num2 << endl;
                break;

            case '/':
                float num1 , num2;
                cout << string(25 , '-') << endl;
                cout << "\tDivision" << endl;
                cout << string(25 , '-') << endl;
                cout << "Enter first number : ";
                cin >> num1;
                cout << "Enter second number : ";
                cin >> num2;

                if(num2 != 0){
                    cout << "\nDivision of " << num1 << " and " << num2 << " : " << num1 / num2 << endl;
                }
                else{
                    cout << "\nSecond number can't be " << num2 << endl;
                }
                
                break;

            case 'E':
                cout << string(25 , '-') << endl;
                cout << "\tThank you" << endl;
                cout << string(25 , '-') << endl;
                exit(0);
                break;

            default:
                cout << "Enter valid symbol" << endl;
        }
        cout << endl <<endl;
    }

}

int main(){
    simpleCalculator();
    return 0;
}