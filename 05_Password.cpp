#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>

using namespace std;

string passwordGenerator(){
    srand(time(0));
    int n = 16;
    string passChar = "1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"; // 62 char
    string password = "";
    while(n--){
        password += passChar[rand() % 62];
    }

    return password;
}

int main(){
    string passkey = passwordGenerator();
    cout << "Generated Passowrd : " << passkey;
    return 0;
}