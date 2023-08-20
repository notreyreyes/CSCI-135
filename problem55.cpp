#include <iostream>
using namespace std; 

int main(){
    float celsius, farenheit;
    cout << "Enter a temperature in Celsius: "; 
    cin >> celsius; 

    farenheit = 9.0/5*celsius + 32; 
    cout << farenheit; 
}