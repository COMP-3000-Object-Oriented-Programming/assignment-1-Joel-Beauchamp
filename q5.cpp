#include <iostream>

using namespace std; 

int main (){
    int ctemp=100;
    int ftemp;

    while ((ftemp = (32 + ((9.0/5) * (ctemp)))) != ctemp)
    {
        ctemp--;
    }
    
    cout << "Celsius " << ctemp << " degrees and Farenheit " << ftemp << " degrees are the same temperature.\n";
    return 0;
}