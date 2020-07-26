/*
Project 3 - Part 1c / 5
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

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  
*/

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
Thing 10) Plane
5 properties:
    1)Model of plane
    2)number of passengers
    3)current fuel level
    4)maximum thrust
    5)current weight
3 things it can do:
    1)turn on seatbelt sign
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
