#include <iostream>
#include <thread>


void function1(){
    for(int i=0;i<100;i++){
        std::cout << "-";
    }
}

void function2(){
    for(int i=0;i<100;i++){
        std::cout << "*";
    }
}

int main(){
    
    std::thread worker1(function1);
    std::thread worker2(function2);
    system("pause>nul");
    // std::cout << "C++ Standard version: " << __cplusplus << std::endl;
    // return 0;
}