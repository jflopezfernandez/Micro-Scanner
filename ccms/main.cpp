
/** ***************************************************************************
 *
 *                      The Micro Programming Language
 *
 *  ***************************************************************************
 *  
 *  Our language is called Micro. It is an extremely simple language, lacking
 *  even enough features to write a useful program. Micro is designed only to
 *  provide a concrete language around which we can discuss a simple example
 *  compiler.
 *
 *  We first define Micro informally:
 *    1. The only data type is integer
 *    2. All identifiers are implicitly declared and are no longer than 32
 *       characters. Identifiers must begin with a letter and are composed of
 *       letters, digits, and underscores.
 *    3. Literals are strings of digits.
 *    4. Comments begin with -- and end at the end of the current line.
 *    5. Statement types are:
 *       a. Assignment:     ID := EXPRESSION ;
 *                          Expression is an infix expression constructed from
 *                          identifiers, literals, and the operators + and -;
 *                          parentheses are also allowed.
 *       b. Input/Output:   read  (list of IDs)
 *                          write (List of Expressions);
 *    6. begin, end, read, and write are reserved words.
 *    7. Each statement is terminated by a semicolon (;). The body of a program
 *       is delimited by 'begin' and 'end'.
 *    8. A blank is appended to the right end of each source line; thus tokens
 *       may not extend across line boundaries.
 *
 ******************************************************************************/

#include <stdlib.h>
#include <iostream>


int main(int argc, char *argv[])
{
    std::cout << "testing..." << "\n";

    return EXIT_SUCCESS;
}