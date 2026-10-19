#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>

using namespace std;

int randomNumberGenerator(int start , int end){
    srand(time(0));

    int randomvalue = (rand() % end) + 1 ;
    
    if(start <= randomvalue && randomvalue <= end){
        return randomvalue;
    }
    else{
        randomvalue *= start;
        return (randomvalue % end);
    }
}

void numberGuessingGame(){

    int guessCount = 5;
    int start = 1;
    int end = 100;
    int userInput;

    cout << string(50 , '-') << endl;
    cout << "\tGuess the number between 1 to 100" << endl;
    cout << string(50 , '-') << endl;

    int computer = randomNumberGenerator(start , end);

    while(guessCount != 0){
        system("cls");
        cout << "You have " << guessCount << " attempt left."<< endl;
        cout << "\nGuess the number : ";
        cin >> userInput;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');

            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }

        if(userInput == computer){
            cout << "Your guess is correct."<< endl;
            break;
        }
        else if(userInput > computer){
            cout << "Your guess is HIGH !!"<< endl;
        }
        else {
            cout << "Your guess is LOW !!" << endl;
        }
        guessCount--;
    }

    if(guessCount > 0){
        cout << "You use " << 6 - guessCount << " attempt" << endl;
    }
    else{
        cout << "You lose the game.";
    }
}

int main(){
    numberGuessingGame();
    cout << endl;
    return 0;
}