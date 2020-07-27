/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
Thing 1) Computer
5 properties:
    1)Amount of Ram
    2)Amount of Storage
    3) os version
    4)year of creation
    5)manufacturer
3 things it can do:
    1)turn on
    2)run software
    3)play music
 */

/*
Thing 2) House
5 properties:
    1) number of bathrooms
    2)number of bedrooms
    3)year built
    4)architecture type
    5)zip code
3 things it can do:
    1)heat up
    2)shut off water
    3)turn on gas
 */

/*
Thing 3) Calculator
5 properties:
    1)color of buttons
    2)number of buttons
    3)cost
    4)battery level
    5)amount of pixels on screen
3 things it can do:
    1)add
    2)subtract
    3)take integral
 */

/*
Thing 4) Camera
5 properties:
    1)Max zoom 
    2)type of lense
    3)color
    4)brand
    5)year made
3 things it can do:
    1)take photo
    2)take video
    3)change shutter speed
 */

/*
Thing 5) Wing
5 properties:
    1)Weight
    2)Length
    3)Number of engines on wing
    4)strength of wing
    5)Number of brake flaps
3 things it can do:
    1)Turn on brake flaps
    2)turn
    3)turn off engines
 */

/*
Thing 6)cockpit
5 properties:
    1)number of pilot seats
    2)number of buttons
    3)autopilot status
    4)landing gear status
    5)Size
3 things it can do:
    1)Make announcment to passengers
    2)Turn Wings
    3)Turn on seatbelt sign
 */

/*
Thing 7) passenger interior
5 properties:
    1)Amount of flight attendants
    2)Amount of food preperation stations
    3)amount of bathrooms
    4)amount of passengers
    5)colume of overhead storage
3 things it can do:
    1)prepare coffee
    2)prepare cabin for landing
    3)serve snacks
 */

/*
Thing 8) Cargo Hold
5 properties:
    1)Amount of bags in hold
    2)Weight of bags in hold
    3)Amount of fuel in reserve
    4)Hold pressurization status
    5)Volume of hold
3 things it can do:
    1)Pressurize
    2)Dump extra fuel
    3)Move bag from hold to passenger area
 */

/*
Thing 9)Tail
5 properties:
    1)Height
    2)Width
    3)Length
    4)Angle
    5)strength of elevator
3 things it can do:
    1)move Rudder
    2)move horizontal stabilizer
    3)move trim tabs
 */

/*
Thing 10) Plane
5 properties:
    1)Wing
    2)Passenger Interior
    3)Cargo Hold
    4)Cockpit
    5)Tail
3 things it can do:
    1)turn on autopilot
    2)Turn on engines
    3)adjust wing flaps
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
