#ifndef beanText
#define beanText

#include <iostream>

using namespace std;

// pretty self explanatory. think of it like printf except worse.
void say(string sayText)
{
    cout << sayText << endl;
}

/* a lot like say() except with minimal text formatting options.
    i don't really know how well this will compile on Windows.
    If it gives an error on there just comment it out and replace
    sayAdv() with say(). (and remove the second string) */
void sayAdv(string sayAdvText, string sayAdvFormat)
{
    if(sayAdvFormat == "bold")
    {
        cout << "\x1b[1m";
        cout << sayAdvText;
        cout << "\x1b[0m" << endl;
    }
}

// creates a line break
void lineBreak()
{
    cout << "\n";
}

/* creates a line under an npc's name, although can be used on pretty much any text.
 * i'm really proud of this one. */
void textLine(string lineText)
{
    int lineNumber = lineText.length();
    
    for (int i = 0; i < lineNumber; i++)
    {
        cout << "-"; 
    }
    
    lineBreak();
}

// really dodgy spaghetti-code way of clearing the screen.
void clearScreen(int size)
{
    for( int a = 10; a < size; a = a + 1 ) {
        lineBreak(); // oh god the jankiness
    }
}

// outputs the engine name and the engine version
void engineVersion(float engineVersion)
{
    clearScreen();
    sayAdv("beanEngine", "bold");
    textLine("beanEngine");
    cout << "Version: ";
    cout << engineVersion << endl;
}

#endif
