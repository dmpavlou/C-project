#include <iostream>
// #include <string>
// #include <iomanip> // it lets you make tidy tables


/*int adding_numbers(int number1, int number2){
    int result = number1 + number2;
    return result;
    This is a function, exactly like the main one. You can recall it inside the main one.
    VERY convinient, since this way you can have some processes already done and compressed
    in a singe phrase something(x, y) instead of filling the main one with more things.
    } */

int main(){

//...deleted previous stages

/*_______________________LOOOOOOPS!___________________________________________________

//for loops:
const size_t COUNT{10}; // we use const to tell the compiller that this value is not to be changed.
for(size_t i{}; i < COUNT; ++i){  //i is for iterator, size_t is a type of unsigned int that is used in loops-it's a representation of the size of things. ++i is the increment
  std::cout << "Let's print this many times" << std::endl;
}


//let's check the size of size_t
std::cout << "size of size_t is " << sizeof(size_t) << std::endl;

//while loops_______________________

const unsigned int COUNT{10}; //this way you avoid hard-coding! we usually write constant values with UPPERCASE
unsigned int i{0};

while(i < COUNT ){   
  std::cout << "another thing to print many times..." << std::endl;
  ++i;
}

std::cout << "Now the loop is complete and the current value of i is: " << i << std::endl;


//do while loops_______________________

const int COUNT{10};
size_t i{0};

do{
  std::cout << i << ": again...let's print" << std::endl;
  ++i;
}while(i < COUNT);
*/


/*__________________________________________Arrays_____________________________________________

double scores[10]; //declaration of the array. here you say that you want an array of 10 foat numbers(double, for more precision in floating points)

for(size_t i(0); i < 10; ++i){
  std::cout << "scores[" << i << "] is: " << scores[i] << std::endl;
}
std::cout << "Loop is done, we read all the saved junk values of the array called scores." << std::endl;

// filling an array with data

scores[0] = 32;
scores[1] = 8000;
scores[2] = 2.777;
scores[3] = -0.01;

std::cout << "the first, second, third and fourth numbers in the array are: " << scores[0] << ", " << scores[1] <<std::endl;
std::cout << scores[2] << " and " << scores[3] << std::endl;


// finding the size of an array in runtime

int seira[] {0, 5, 9, 6, 7, 33, 8};

std::cout << "the size of the array called seira is: " << std::size(seira) << std::endl;
// to print all the elements of an array without knowing the length in advance:

int COUNT{std::size(seira)};

for (size_t i{0}; i < COUNT; ++i){
  std::cout << "Element number " << i + 1 << " is: " << seira[i] << std::endl; // DYNAMIC structure
}

// Example of the range-based for loop. This just automatcally prints all the elements of an array, no matter how many those are.
//The downside: we lose the index of the elements. If you need indexes, do the above version.
    int numbers[] = {1, 2, 3, 4, 5};
    // Syntax
    for (int number : numbers) {
        // 'number' takes on the value of each element in the array in each iteration
        std::cout << number << " ";
    }

// + - / * and other calculations with array elements

int sum1{seira[0] + seira[1]};
int sum2{seira[2] + seira[3]};
int sum3{seira[4] + seira[5]};

std::cout << "the 3 sums are: " << sum1 << ", " << sum2 << ", " << sum3 << std::endl;


// __________________________CHARACTER ARRAYS_________________________________
//you can print this type of arrays by writing the name in the std::cout, like you would do with a variable

char word[]{'H','e','l','l','o'}; //it will take the size of the amount of elements
std::cout << "Our word of the day is: " << word << std::endl; //BUT if we print, it adds garbage values to the end!
//it is because our string is not a C-string. A C-string, so, a "legal" string in C++ has to end with a '/0'
//the last character of the array has to be '/0', so that the compiller knows it's the end of the string.

//CORRECT WAY
char word1[]{'H','e','l','l','o','\0'}; //null terminated = C-string
std::cout << "Our word of the day is: " << word1 << std::endl;

//OR
char word2[6]{'H','e','l','l','o'}; //if you initialize the array with one extra element, the compiller is going to autofill '/0'
std::cout << "Our word of the day is: " << word2 << std::endl;

//BEST WAY
char word3[]{"Hello"}; //when we use "" the compiller null terminates automatically
std::cout << "Our word of the day is: " << word3 << std::endl;

char word4[]{"Hello everyone! I can be a full sentence too!"};
std::cout << "Our phrase of the day is: " << word4 << std::endl; 


//___________________POINTERS______________________

//declare and initialize

int * p_number{}; //the * is what makes it a pointer and the name should start with p_
                  //pointers are a kind of variable that store the memory "address" of another variable.
double * p_fractional_number{}; //they are initialized aytomatically with something that means they have no address stored yet

//can also be

int * p_int1{nullptr};     //nullptr = null pointer value
double * p_fractional_number1{nullptr}; 


/*all pointers have the same size, regardless of whether they store the address of an int, double, float etc.
that's becaue they store the same type of data, which is an address!

//let's store data in a pointer!

int number{22};      
int* p_int2{&number};   // assign data when declaring     !!!the & means address of!!!

std::cout << "The number in my variable is: " << number << std::endl;
std::cout << "The address of my variable is: " << p_int2 << std::endl;


float other_number{3.02};
float* p_float{&other_number};

std::cout << "The number in my float variable is: " << other_number << std::endl;
std::cout << "The address of my float variable is: " << p_float << std::endl;

//OR change the value later

int num2{6666};
int* p_int2{nullptr};
p_int2 = &num2;

std::cout << "The address of my initial int variable changed and is now: " << p_int2 << std::endl;

//DEREFERENCING A POINTER: we can print out the value that is stored in the address we saved in our pointer, by including * infront of the name:
std::cout << "The value in the above address is " << *p_int2 << std::endl;


//________________________Pointer to Char________________________
//when I initialize a pointer with a string of characters, it now functions as a char array and can be printed out

const char* message{"Hello everybody!"};  //has to be declared as const, it treats the things inside the brackets as constant characters, you cannot change this later!
                                          //if you want to be able to change these, use a character array like this:
                                          char phrase[]{"Hello everybody!"};
                                          phrase[1] = 'a';
                                          std::cout << phrase << std::endl;

std::cout << "The messsage is: " << message 
          << " and the pointer points to the first character, which is: " << *message << std::endl;
               
*/
//_____________DYNAMIC MEMORY ALLOCATION: Stack VS Heap____________________

/*everything we did up to now, var, int, char, functions ALL, were stored in the STACK part of memory.
NOW we can use pointers to exploit the HEAP part!
STACK: less control over the lifecycle of a variable
HEAP: full control over it, by "new" or "delete".

{
int number{26};           //STACK MEMORY. out of the {} the variables DON'T EXIST.
int* p_number{nullptr};  
p_number = &number;
}

//BUT

int* p_number{nullptr}; // stack...
p_number = new int;    //...HEAP MEMORY. now whatever we store there is going to be in the HEAP part 

*p_number = 66;

std::cout << "now I have in the address " << p_number << " of HEAP memory, the following value stored: "
          << *p_number << std::endl;

//When you don't need it anymore, you have to return the memory back to the Operating System (OS):
 
delete p_number;  //do this only ONCE, twice is BAD
p_number = nullptr; //ALWAYS RESET your pointers after you delete them.
                    //it is safer for other people to use, because it is BAD to use a pointer pointing to a junk address

//other ways to initialize pointers in a way they point to HEAP from the beginning

int* p_somehting{new int}; //nullptr in HEAP (4 bytes because it's int pointer)
//or
int* p_another{new int {21}};  //21 in HEAP (4 bytes because it's int pointer)


//_____________TRY-CATCH_____________IN CASE THE NEW OPPERATOR FAILS!

int * data = new int[100000000]; //if the memory we request to use on the heap is too big and we run out, the program will crash.

//solutions: 1) Exception mechanism  2) std::nothrough

//1) Exception
 try{
  // something that can fail
 }catch(std::exception& ex){
  std::cout << "Something went wrong: " << ex.what() << std::endl;
  // in case it fails, catch the problem and don't crash the programm
 }


//2) std::nothrow
for(size_t i{0} ; i < 100 ; ++i){

  int * data = new(std::nothrow) int[10000000000];

  if(data!=nullptr){
    std::cout << "Data allocated" << std::endl;
  }else{
    std::cout << "Data allocation failed" << std::endl;
  }
}
*/

//REFERENCES: aliases of data

int something = 5;
  //references
  int& ref_something{something};

std::cout << something << std::endl;
std::cout << ref_something << std::endl;






std::cout << "Program ends well!" << std::endl;
return 0;
}