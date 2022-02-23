#include<iostream>

using namespace std;

int main(){

    int num1 = 0, num2 = 1, sizeOfSeries, i, nextNum;

    std::cout << "Enter size of fibonaci series: "<< std::endl;
    std::cin >> sizeOfSeries;

    std::cout << "First two numbers are: " << num1 << " and " << num2 << std::endl;

    for(i = 2;i < sizeOfSeries;i++){
        nextNum = num1 + num2;
        std::cout << nextNum << std::endl;
        num1 = num2;
        num2 = nextNum;
    } 
    
    return 0;

}