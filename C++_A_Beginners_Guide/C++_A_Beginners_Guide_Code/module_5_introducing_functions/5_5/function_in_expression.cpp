// Use box() in an expression.

#include <iostream>
using namespace std;

/* Function prototype(s)*/

// use double data
double box(double length, double width, double height); 


int main(){

    double sum;

    sum = box(10.1, 11.2, 3.3) + box(5.5, 6.6, 7.7) + box(4.0, 5.0, 8.0);

    cout << 'The sum of the volume is: ' << sum << "\n";
    cout << "The average vlume is: " << sum / 3.0 << "\n";


    return 0;
}