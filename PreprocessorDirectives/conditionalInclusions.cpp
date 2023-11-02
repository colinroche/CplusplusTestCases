#include <iostream>

//#define TABLE_SIZE 100
/*  allows a section of a program to be compiled 
    only if the macro that is specified as the parameter has been defined */
#ifdef TABLE_SIZE
int table[TABLE_SIZE];
#endif

/*  Exact opposite of #ifdef - the code between #ifndef and #endif directives 
    is only compiled if the specified identifier has not been previously defined */
#ifndef TABLE_SIZE
#define TABLE_SIZE 100
#endif
int table[TABLE_SIZE];

/*  The #if, #else and #elif (i.e., "else if") directives serve to specify some condition 
    to be met in order for the portion of code they surround to be compiled. 
    The condition that follows #if or #elif can only evaluate constant expressions, 
    including macro expressions */
#if TABLE_SIZE>200
#undef TABLE_SIZE
#define TABLE_SIZE 200
 
#elif TABLE_SIZE<50
#undef TABLE_SIZE
#define TABLE_SIZE 50
 
#else
#undef TABLE_SIZE
#define TABLE_SIZE 100
#endif
 
int table[TABLE_SIZE];

/*  The behavior of #ifdef and #ifndef can also be achieved 
    by using the special operators defined and !defined respectively 
    in any #if or #elif directive */

#if defined ARRAY_SIZE
#define TABLE_SIZE ARRAY_SIZE
#elif !defined BUFFER_SIZE
#define TABLE_SIZE 128
#else
#define TABLE_SIZE BUFFER_SIZE
#endif 

using namespace std;

int main() {
    
    return 0;
}