#include <iostream>
using namespace std;

int main(){

    int i;
    int j; 

    i = 10;
    j = 100;

    if(j> 0){
        int i;  // this i is separate from outer i

        i = j/2;
        cout << "inner i: " << i << '\n';
    }

    cout << "outer i: " << i << "\n";


    return 0; 
}