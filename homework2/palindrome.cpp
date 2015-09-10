// Filename: homework2.cpp
// Created on: 09/09/15
// Created by: Joe Pollard
// Synopsis: Test if a string s is a palindrome.


#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*Function checks if an input string is a pallindrome and returns True, otherwise false*/

bool ispalindrome  (const string s ){
  // Get s length
  int length = (int)s.length();

  // Set first and last position
  int start = 0;
  int end = length - 1;

  // While loop to test the letters at location start, end
  while(start < end){
    // Make sure we are testing actual letters
    if(!isalpha(s[start])){
      start++;
      continue;
    }
    if(!isalpha(s[end])){
      end--;
      continue;
    }

    // Compare the uppercase version of the letters to ensure they are the same case
    if(toupper(s[start]) == toupper(s[end])){
      start++;
      end--;
    } else {
      // Return false if the test fails
      return false;
    }
  }
  // Out of the while loop, everything must be good.
  return true;

}


int main (){
	//TRUE TEST CASES
	string test1 = "";
	string test2 = "abccba";
	string test3 = "abcdcba";
	string test4 = "abcddddcba";
	string test5 = "AbcdddDcba";
	string test6 = "Was it a car or a cat I saw";
	string test7 = "A man, a plan, a canal, Panama!";

	// FALSE // They are not tested and are for your checking !!
	string test8 = "HelloWorld";
	string test9 = "abccbD";	 

	cout << test1 << (ispalindrome(test1) ? (" is a palindrome.") : (" is not a palindrome.")) << endl; 
	cout << test2 << (ispalindrome(test2) ? (" is a palindrome.") : (" is not a palindrome.")) << endl;
	cout << test3 << (ispalindrome(test3) ? (" is a palindrome.") : (" is not a palindrome.")) << endl; 
	cout << test4 << (ispalindrome(test4) ? (" is a palindrome.") : (" is not a palindrome.")) << endl; 
	cout << test5 << (ispalindrome(test5) ? (" is a palindrome.") : (" is not a palindrome.")) << endl;  
	cout << test6 << (ispalindrome(test6) ? (" is a palindrome.") : (" is not a palindrome.")) << endl; 
	cout << test7 << (ispalindrome(test7) ? (" is a palindrome.") : (" is not a palindrome.")) << endl; 
	cout << test8 << (ispalindrome(test8) ? (" is a palindrome.") : (" is not a palindrome.")) << endl;
	cout << test9 << (ispalindrome(test9) ? (" is a palindrome.") : (" is not a palindrome.")) << endl;

	return 0;
}
