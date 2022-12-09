#include <iostream>
using namespace std;

int main(){
    int number ;
    int Evennumber=0 ;
    int Oddnumber=0 ;
    cout << "Enter an integer: ";
    cin >> number ;
    if (number != 0){
        while(number !=0){
            cout << "Enter an integer: ";
            cin >> number ;
            if (number%2 == 0){
                Evennumber++;
            }else {
                Oddnumber++;
            } 
        }
    }

    cout << "#Even numbers = " << Evennumber << endl;
    cout << "#Odd numbers = " << Oddnumber;
    return 0;
}
