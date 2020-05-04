#include <iostream>
#include <cmath>
using namespace std;

unsigned int input_square(){
    unsigned int n = 0, solution = 0;
    cout << "Please enter a natural number: ";
    cin >> n;
    solution = pow(n, 2);
    return solution;
}

unsigned int natural_sum(){
    unsigned int n = 0, sum = 0;
    cout << "Please enter a limit: ";
    cin >> n;

    for(int i = 1; i <=n; i++){
        sum +=i;
    }
    return sum;
}


bool prim(unsigned int n){
    bool isPrim = true;
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            isPrim = false;
        }
    }
    return isPrim;
}

void check_prim(){
    unsigned int n = 0;
    cout << "Please enter a natural number, to check for prim: ";
    cin >> n;
    if(prim(n)) {
        cout << "Number is prim";
    }
    else
        cout << "Number is not prim";
}

int main() {
    cout << "Hello, World!" << endl;
    //cout << input_square();
    check_prim();

    return 0;
}
