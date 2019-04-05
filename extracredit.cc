/*
         File: extra_credit.cc
 *      Author: Nate Tariku
 *        Date: April 4, 2019
 * Description: a function that counts the number of occurrences of a substring in a line
 * of text
                
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int  countOccurance(string count,string word);

int main (int argc, char const *argv[] ) {
 
 string hello = "ABCdeaBcfgAbcd";

 string eth = "aBC";


  int print = countOccurance(eth,hello);

 cout << print << endl;
 

return 0;

}





   int  countOccurance(string coun,string word){
     
    int count = 0;
    
    string statement = word;
    string search = coun;

    transform(statement.begin(), statement.end(), statement.begin(), ::toupper);
    transform(search.begin(), search.end(), search.begin(), ::toupper);
 
    int word_statement = word.length();

    int search_length = search.length(); 
  
  int new_size = word_statement-search_length;

  
    for (int i=0; i < new_size ; i++) {
   
    std::string str2 = statement.substr (i,search_length);
       
    if (search == str2) {
        count ++;
    }
    }
    return count;
   
   }

   




















