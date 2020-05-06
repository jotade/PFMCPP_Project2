#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 
 int
 float 
 bool
 double
 char
 unsigned int
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int itemsInCart = 10;
    int vehicleWheels = 3;
    int apples = 8;

    float result = 9.5f;
    float remainder = 0.4f;
    float constant = 450.0f;

    bool isValid = true;
    bool isOn = false;
    bool isUpdated = 1;

    char nextValue = {'h'};
    char letter = {'g'};
    char type = {'e'};

    double distance = 19774.3399450994;
    double width =  0.39905000489;
    double fraction = 1.00934777433;

    unsigned int member = 32;
    unsigned int cue = 203978843;
    unsigned int serial  = 743;

    ignoreUnused(number, itemsInCart, vehicleWheels, apples, result, remainder, constant, isValid, isOn, isUpdated, nextValue, letter, type, distance, width, fraction, member, cue, serial); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool studentPassedExam(int studentGrade, int minimumGradeToPass = 60) 
{
    ignoreUnused(studentGrade, minimumGradeToPass);
    return {};
}
/*
 2)
 */
int sumIntegers(int lhs,int rhs) 
{
    ignoreUnused(lhs, rhs);
    return {};
}
/*
 3)
 */
void createWindow(double width = 50, double height = 50)
{
    ignoreUnused(width, height);
}
/*
 4)
 */
void moveObject(float distance, char object)
{
    ignoreUnused(distance, object);
}
/*
 5)
 */
double calculateArea(double sideA, double sideB)
{
    ignoreUnused(sideA, sideB);
    return {};
}
/*
 6)
 */
void playSoundWave(float freq)
{
    ignoreUnused(freq);
}
/*
 7)
 */
double percentageOf(double amount, double total = 4000)
{
    ignoreUnused(amount, total);
    return {};
}
/*
 8)
 */
double checkSpeed(double distance, double time)
{
    ignoreUnused(distance, time);
    return {};
}
/*
 9)
 */
bool validateToken(double token)
{
    ignoreUnused(token);
    return {};
}
/*
 10)
 */
void increaseVolumeBy(int decibels ) 
{
    ignoreUnused(decibels);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto studentPassed = studentPassedExam(40);
    //2)
    auto sum = sumIntegers(5,4);
    //3)
    createWindow();
    //4)
    moveObject(10.0f,'h');
    //5)
    auto area = calculateArea(100,50);
    //6)
    playSoundWave(440.0f);
    //7)
    auto percentage = percentageOf(300);
    //8)
    auto speed = checkSpeed(100,30);
    //9)
    auto isValid = validateToken(22.222998794);
    //10)
    increaseVolumeBy(20);
    
    ignoreUnused(carRented, studentPassed, sum, area, percentage, speed, isValid);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
