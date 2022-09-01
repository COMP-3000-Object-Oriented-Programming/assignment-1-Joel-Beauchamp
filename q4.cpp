#include <iostream>
#include <cmath>
using namespace std; 


int main (){
    double sphereWeight;
    double sphereRadius;
    double sphereVolume;
    double waterWeight = 62.4;
    double bouyantForce;

    cout << "How much does the sphere weigh in pounds?\n";
    cin >> sphereWeight;
    cout << "What is the radius of the sphere in feet\n";
    cin >> sphereRadius;
    sphereVolume = ((4/3)*M_PI)*sphereRadius*sphereRadius*sphereRadius;
    bouyantForce = sphereVolume*waterWeight;
    if (bouyantForce < sphereWeight){
            cout << "The Sphere Will Sink in Water\n";
    }
    else{
            cout<< "The Sphere Will Float in Water\n";
    }
    return 0;
}