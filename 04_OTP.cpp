#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

string OTPGenerator(int size){
    srand(time(0));

    string numbers = "1234567890";
    string result = "";
    while(size--){
        result += numbers[rand() % 10];
    }

    return result;
}

int main(){
    // let the size of OTP be 4
    string OTP = OTPGenerator(4);
    cout << "OTP : " << OTP;
}
