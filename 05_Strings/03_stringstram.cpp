/*
=========================================================
            STRINGSTREAM IN C++ - COMPLETE NOTES
=========================================================

What is StringStream?
---------------------
stringstream is a class provided by the <sstream> library.

It allows us to treat a string like an input/output stream,
similar to how cin reads from the keyboard.

Think of it as:

    cin          -> Reads from keyboard
    stringstream -> Reads from a string

Why use StringStream?
---------------------
Suppose we have:

    "raghav is a maths teacher"

and we want to separate each word.

Instead of manually traversing the string and checking spaces,
stringstream can do it automatically.

=========================================================
*/

#include<iostream>     // Provides cout, cin, endl
#include<string>       // Provides string data type
#include<sstream>      // Provides stringstream class

using namespace std;

int main() {

    /*
    -----------------------------------------------------
    STEP 1: Create a String
    -----------------------------------------------------

    The entire sentence is stored inside a string.

    Memory Representation:

    "raghav is a maths teacher"

    r a g h a v _ i s _ a _ m a t h s _ t e a c h e r

    (_ represents spaces)
    */

    string str = "raghav is a maths teacher";



    /*
    -----------------------------------------------------
    STEP 2: Create a StringStream Object
    -----------------------------------------------------

    This converts the string into a stream.

    Similar to:

        cin

    but instead of reading from keyboard,
    it reads from the string "str".
    */

    stringstream ss(str);



    /*
    -----------------------------------------------------
    STEP 3: Temporary Variable
    -----------------------------------------------------

    This variable will store one word at a time
    extracted from the stream.
    */

    string temp;



    /*
    -----------------------------------------------------
    STEP 4: Extract Words One By One
    -----------------------------------------------------

    ss >> temp

    works exactly like:

    cin >> temp

    It reads characters until a space is found.

    First Read:
        temp = "raghav"

    Second Read:
        temp = "is"

    Third Read:
        temp = "a"

    Fourth Read:
        temp = "maths"

    Fifth Read:
        temp = "teacher"

    After that:
        No words remain.
        Condition becomes false.
        Loop stops.
    */

    while(ss >> temp) {

        /*
        Print current extracted word
        */
        cout << temp << endl;
    }

    return 0;
}

/*
=========================================================
OUTPUT
=========================================================

raghav
is
a
maths
teacher

=========================================================
INTERNAL WORKING
=========================================================

Initially:

ss ----> "raghav is a maths teacher"

---------------------------------------------------------

1st Extraction

temp = "raghav"

Remaining Stream:

ss ----> "is a maths teacher"

---------------------------------------------------------

2nd Extraction

temp = "is"

Remaining Stream:

ss ----> "a maths teacher"

---------------------------------------------------------

3rd Extraction

temp = "a"

Remaining Stream:

ss ----> "maths teacher"

---------------------------------------------------------

4th Extraction

temp = "maths"

Remaining Stream:

ss ----> "teacher"

---------------------------------------------------------

5th Extraction

temp = "teacher"

Remaining Stream:

ss ----> END

---------------------------------------------------------

Loop Terminates

=========================================================
OTHER COMMON USES OF STRINGSTREAM
=========================================================

1. String to Integer Conversion

    string str = "123";
    stringstream ss(str);

    int num;
    ss >> num;

    cout << num;

Output:
    123

---------------------------------------------------------

2. Extract Multiple Numbers

    string str = "10 20 30 40";

    stringstream ss(str);

    int x;

    while(ss >> x)
    {
        cout << x << endl;
    }

Output:
    10
    20
    30
    40

---------------------------------------------------------

3. Count Words

    string str = "I love C++";

    stringstream ss(str);

    string word;
    int count = 0;

    while(ss >> word)
    {
        count++;
    }

    cout << count;

Output:
    3

=========================================================
TIME COMPLEXITY
=========================================================

If string length = N

Time Complexity  : O(N)
Space Complexity : O(N)

=========================================================
INTERVIEW POINT
=========================================================

stringstream is commonly used for:

1. Splitting strings into words
2. Parsing input
3. String to integer conversion
4. Integer to string conversion
5. Tokenization problems
6. LeetCode string questions

=========================================================
*/