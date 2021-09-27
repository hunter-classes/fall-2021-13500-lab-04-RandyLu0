/*
 * Name: Randy Lu
 * Instructor: Mr. Zamansky
 * Assignment: Lab 4
 * Purpose: Implements the functions
 * prototyped in funcs.h
 */

#include "funcs.h"
#include <string>
using namespace std;

std::string box(int w, int h){
    std::string a = "";
    for(int r = 0; r < h; r++){
        for(int c = 0; c < w; c++){
            a += "*";
        }
        a += "\n";
    }
    return a;
}

std::string board(int w, int h){
    std::string a = "";
    for(int r = 0; r < h; r++){
        for(int c = 0; c < w; c++){
            //checks for row parity and then column parity
            a += (r % 2) ? (c % 2) ? "*" : " " : (c % 2) ? " " : "*";
        }
        a += "\n";
    }
    return a;
}

std::string cross(int s){
    std::string a = "";
    int rt; //running total
    for(int r = 0; r <= s / 2; r++){
        int c = 0;
        int t = r; //temp
        //left and even case
        if(!(s % 2) and r == s / 2){
            r--;
            while(r){
                a += " ";
                r--;
                c++;
            }
        }else{
            while(r){
                a += " ";
                r--;
                c++;
            }
        }
        r = t;
        a += "*";
        c++;
        //middle
        while(c < s - 1 - r){
            a += " ";
            c++;
        }
        if(!(s % 2 and r == s / 2)){
            a += "*";
        }
        a += "\n";
        rt = r;
    }
    rt++;
    for(int r = 1; rt < s; rt++){
        int t = r; //temp
        int sp = s % 2 ? s / 2 : s / 2 - 1;
        sp -= r;
        for(int f = 0; f < sp; f++){
            a += " ";
        }
        a += "*";
        for(int f = 0; f < s - (sp * 2 + 2); f++){
            a += " ";
        }
        a += "*";
        a += "\n";
        r++;
    }
    return a;
}

std::string lower(int l){
    std::string a = "";
    for(int r = 1; r <= l; r++){
        int t = r; //temp
        while(r){
            a += r ? "*" : " ";
            r--;
        }
        r = t;
        a += "\n";
    }
    return a;
}

std::string upper(int l){
    std::string a = "";
    for(int r = l; r > 0; r--){
        int t = r; //temp
        while(r){
            a += r ? "*" : " ";
            r--;
        }
        r = t;
        a += "\n";
    }
    return a;
}

std::string trap(int w, int h){
    std::string a = "";
    if((h - 1) * 2 >= w){
        return "Impossible Shape!";
    }
    for(int r = 0; r < h; r++){
        int t = r;
        int m = w - 2 * r;
        //left
        while(r){
            a += " ";
            r--;
        }
        //middle
        while(m){
            a += "*";
            m--;
        }
        r = t;
        //right
        while(r){
            a += " ";
            r--;
        }
        r = t;
        a += "\n";
    }
    return a;
}

std::string board3(int w, int h){
    std::string a = "";
    for(int r = 0; r < h; r++){
            for(int c = 0; c < w; c++){
                //checks for row parity and then column parity
                a += ((r / 3) % 2) ? ((c / 3) % 2) ? "*" : " " : ((c / 3) % 2) ? " " : "*";
        }
        a += "\n";
    }
    return a;
}
