//File name: homework1.cpp
//Created by: Joe Pollard
//Created on: 08/30/15
//Synopsis: majorityElement returns the majority element of a non-empty array, assuming it exists. 
//For CSE 2122 at Ohio State

//NOTES: compile using g++ -std=c++11 majorityElement.cpp 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
 // Write your solution here.
    int num = 0;
    for (int i = 0; i < nums.size(), i++){
        
    }
    }
int main(){	
	vector <int> a = { 1, 2, 3, 3, 3 }; 
	vector <int> c = { 1870 };
	vector <int> d = { 4, 5, 4 };
	vector <int> e = { 5, 5, 5, 5, 1, 2, 1 };
	vector <int> f = { 6, 7, 7, 7, 6, 6, 6 };
	
	cout <<  ((majorityElement(a) == 3) ? "pass" : "fail : a") << endl;
	cout << (majorityElement(c) == 1870 ? "pass" : "fail : c")<< endl;
	cout << (majorityElement(d) == 4 ? "pass" : "fail : d")<< endl;
	cout << (majorityElement(e) == 5 ? "pass" : "fail : e")<< endl;
	cout << (majorityElement(f) == 6 ? "pass" : "fail : f")<< endl;
	return 0;
}

