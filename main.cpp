#include <iostream>

int adding_numbers(int number1, int number2){
    int result = number1 + number2;
    return result;
    /*
    This is a function, exactly like the main one. You can recall it inside the main one.
    VERY convinient, since this way you can have some processes already done and compressed
    in a singe phrase something(x, y) instead of filling the main one with more things.
    */
}

int main(){

    int firstN {3}; // statements always finish with ;
    int secondN {6};

    int sum = adding_numbers(3, 6);  // Ηere we recall the function for adding numbers and store the result in "gsum". No need to do the + here!
    std::cout << "The sum of the two numbers is: " << sum << std::endl;
    std::cout << "Once more, the sum is: " << adding_numbers(3,6); // Also possible. No need to save the result in a new variable.

    return 0;

}