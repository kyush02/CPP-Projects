#include<iostream>
#include<chrono>
#include<iomanip>
#include<windows.h>

using namespace std;

int main(){
    while(true){
        auto now = chrono::system_clock::now();
        time_t currentTime = chrono::system_clock::to_time_t(now);
        tm* localTime = localtime(&currentTime);

        system("cls"); 
        // or "cls" for Windows
        cout << put_time(localTime, "%H:%M:%S") << endl;
        Sleep(1000);
    }

    return 0;
}