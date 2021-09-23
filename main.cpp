/*
 * Name: Randy Lu
 * Instructor: Mr. Zamansky
 * Assignment: Lab 4
 * Purpose: Tests the functions
 * implemented in funcs.cpp
 */

#include <iostream>
#include <string>
#include "funcs.h"
using std::cin;
using std::cout;

int main(){
    std::string a;
    int w = 7,h = 4,s = 7;
    cout << "box width: " << w << "\nbox height: " << h << "\n";
    a = box(w,h);
    cout << a << "\n";
    cout << "-----------------------------------------------------------\n";
    w = 11;
    h = 6;
    cout << "checker board width: " << w << "\nchecker board height: " << h << "\n";
    a = board(w,h);
    cout << a << "\n";
    cout << "-----------------------------------------------------------\n";
    cout << "cross length: " << s << "\n";
    a = cross(s);
    cout << a << "\n";
    cout << "-----------------------------------------------------------\n";

    cout << "lower triangle length: " << s << "\n";
    a = lower(s);
    cout << a << "\n";
    cout << "-----------------------------------------------------------\n";
    cout << "upper triangle length: " << s << "\n";
    a = upper(s);
    cout << a << "\n";
    cout << "-----------------------------------------------------------\n";
    w = 12;
    h = 5;
    cout << "trapezoid width: " << w << "\ntrapezoid height: " << h << "\n";
    a = trap(w,h);
    cout << a << "\n";
    cout << "-----------------------------------------------------------\n";
    w = 16;
    h = 11;
    cout << "checkerboard 3 * 3 width: " << w << "\ncheckerboard 3 * 3 height: " << h << "\n";
    a = board3(w,h);
    cout << a << "\n";
    return 0;
}