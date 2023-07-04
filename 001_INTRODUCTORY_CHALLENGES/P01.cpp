// CODING CHALLENGES 
// Guilherme Wallace
// Email: guiwallace@usp.br / guiwallace96@gmail.com

// You are given two integers a and b. Print a + b

#include <iostream>

int main(){

    //Number o test cases
    int N;
    //Number a and b
    int a, b;

    for( int i=0; i < N; i++ ) {
        //Read the two numbers
        std::cin >> a >> b;
        //Print the sum of them
        std::cout << a+b << std::endl;
    }

    return 0;
}

