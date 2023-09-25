#include <iostream>

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float div(float a, float b) {

     if (b==0){
        std::cout<<"can't divide by zero so it has a value of ";
              }
     return a / b;
}
