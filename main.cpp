/* beanEngine example
    Modify all of this to make your own game.
    If you can figure out all of the spaghetti that is. */

// imports required libraries
#include <iostream>
#include "Text/beanText.h"

using namespace std;

int main()
{
    // declares a couple of important variables (e.g. the engine version)
    float version = 1.0;
    
    /* calls the function to display the engine version using the variable
        that we just declared */
    engineVersion(version);
    
    lineBreak(); // creates a line break
    say("Testing, testing, one two three..."); // prints out some text onto the screen
    sayAdv("This text is bold!", "bold"); // prints out some bold text onto the screen
}
