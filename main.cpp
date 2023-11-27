#include <iostream>
#include <string>

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
/*
    int firstN {3}; // statements always finish with ;
    int secondN {6};

    int sum = adding_numbers(3, 6);  // Ηere we recall the function for adding numbers and store the result in "gsum". No need to do the + here!
    std::cout << "The sum of the two numbers is: " << sum << std::endl;
    std::cout << "Once more, the sum is: " << adding_numbers(3,6) << std::endl; // Also possible. No need to save the result in a new variable.
    std::cerr << "Error. Try again!" << std::endl; //This way you print out error messeges for the user to see. Maybe you want to paint only them red later, so it's useful!
*/

//_________________________Input form user_______________________________________

  /*
  int age;
  std::string name; // This is how we declare string variables.
     std::cout << "How old are you? " << std::endl;
     std::cin >> age;
     std::cout << "And what is your name?" << std::endl;
     std::cin >> name;

     std::cout << "So you are " << name << " and your age is " << age;

  */
 /*
   int age3;
   std::string full_name;

   std::cout << "Who are you? Full name please." << std::endl;
   std::getline(std::cin, full_name);
   std::cout << "And how old are you?" << std::endl;
   std::cin >> age3;
   std::cout << "So, you are " << full_name << " and your age is " << age3; 
    
 //_________________________Types of numbers_______________________________________
   signed int one {4};
   signed int two {-3};
   unsigned int third {6}; //default is signed, unsigned means only possitive numbers

   std::cout << "first: " << one << std::endl;
   std::cout << "second: " << two << std::endl;
   std::cout << "third: " << third << std::endl;
   std::cout << "size of 1 is: " << sizeof one;
*/
 //______________________Boolean_______________________________________

bool green = true;
bool red = false;
bool pedestrian = true;

if(green){
std::cout << "Are there pedestrian passing? 1 for True or 0 for False." << std::endl;
std::cin >> pedestrian;
       if (pedestrian)
          {std::cout << "Wait until they pass!" << std::endl;}
       else
          {std::cout << "You are free to go." << std::endl;}
}   

else{
    std::cout << "Stop! It is red.";
}


return 0;

}