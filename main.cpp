#include <iostream>
#include <string>
#include <iomanip> // it lets you make tidy tables

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
 /*______________________Boolean_______________________________________

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



// Some fun facts about + = 

int value = 6;
std::cout << "The initial value is: " << value << std::endl;

value *=2;
std::cout << "*=2 is the same as value *2, which is: " << value << std::endl;


int one = 6;
int two = 9;
std::cout << std::boolalpha; //it means that you turn boolean statements from 0 and 2, to true or false!
std::cout << "Is the first greater than the second number? " << (one > two) << std::endl;

// You can also save bool statements in variables to use later:

bool the_result = (one > two);
std::cout << the_result << std::endl;
*/
/*
//______________________________Logical operators (and, or etc.)_______________________

int one = 6;
int two = 9;
int three = 30;

std::cout << std::boolalpha;
std::cout << "Is one lesser than two AND three greater than one?:  " << ((one < two) && (three > one)) << std::endl;

bool statement1 = ((two <= three) || (one != two));
std::cout << statement1 << std::endl;

*/

//______________Let's print a tidy table!__________________
//for this to work, you need to #include <iomanip> in the beginning of the programm

//it's generally better to store your width info in a variable because it would suck if you changed your mind later and had to go through all of the individual lines of code to update them.

int width{15};

std::cout << std::left; // starting from right side
std::cout << std::setfill('-');
std::cout << std::setw(15) << "FULL NAME" << std::setw(15) << "AGE" << std::endl;
std::cout << std::setw(15) << "Dimitra Pavlou" << std::setw(15) << "25" << std::endl;
std::cout << std::setw(15) << "Anita Pania" << std::setw(15) << "54" << std::endl;
std::cout << std::setw(15) << "Kostas Xazos" << std::setw(15) << "45" << std::endl;


//If you set numerical values to appear in hexadecimal or something, and you want to reset, this is the hack:

std::cout.unsetf(std::ios::scientific | std::ios::fixed); //Hack




return 0;

}