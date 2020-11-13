#ifndef UTIL_H
#define UTIL_H
#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

/*
@Breif: Returns a random element in the string vector
@Date: 11/12/2020
@Param: vector<string> vect - Vector of strings
@Returns: string, random string element in the vector
*/
string randomElement(vector<string> vect);
/*
@Breif: Returns the sum of doubles
@Date: 11/12/2020
@Param: vector<double> vect - Vector of Doubles
@Returns:the sum of the doubles from the vector
*/
double sum(vector<double> vect);
/*
@Breif: Returns the average of doubles
@Date: 11/12/2020
@Param: vector<double> vect - Vector of Doubles
@Returns: the average double from the vector
*/
double avg(vector<double> vect);
/*
@Breif: Returns the lowest of doubles
@Date: 11/12/2020
@Param: vector<double> vect - Vector of Doubles
@Returns: the lowest double from the vector
*/
double lowest(vector<double> vect);
/*
@Breif: Changes the string to camel case
@Date: 11/12/2020
@Param: string str
@Returns: a string that is camel cased
*/
string camelCase(string str);
#endif