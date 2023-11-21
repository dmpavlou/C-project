#include <iostream>


int main(){

    int firstN {3}; // statements always finish with ;
    int secondN {6};
    int thirdN {6};
    int fourthN {90};

    int sum = firstN + secondN;
    std::cout << "The sum of the two numbers is: " << sum << std::endl;
    std::cout << "But a random third number is: " << thirdN;

    return 0;

}