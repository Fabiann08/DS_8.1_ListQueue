#include <iostream>
#include <string>
//#include "PrecondViolatedExcep.h"
#include "PalindromeChecker.h"
//#include "ListQueue.h"
using namespace std;

int main()
{
    string str1 = "abcda";
    string str2 = "radar";

    if (PalindromeChecker::isPalindrome(str1)) {
        cout << str1 << " is a palindrome." << endl;
    }

    else {
        cout << str1 << " is not a palindrome." << endl;
    }

    if (PalindromeChecker::isPalindrome(str2)) {
        cout << str2 << " is a palindrome." << endl;
    }
    else {
        cout << str2 << " is not a palindrome." << endl;
    }
    /*
    string str1 = "abcda";
    string str2 = "radar";

    if (isPalindrome(str1)) {
        cout << str1 << " is a palindrome." << endl;
    }
    else {
        cout << str1 << " is not a palindrome." << endl;
    }

    if (isPalindrome(str2)) {
        cout << str2 << " is a palindrome." << endl;
    }
    else {
        cout << str2 << " is not a palindrome." << endl;
    }
    
    
    
    ListQueue<char> queue;

    string str1 = "abcda";
    string str2 = "radar";

    if (queue.isPalindrome(str1)) {
        cout << "1 is a palindrome." << endl;
    }
    else {
        cout << "1 is not a palindrome." << endl;
    }

    if (queue.isPalindrome(str2)) {
        cout << "2 is a palindrome." << endl;
    }
    else {
        cout << "2 is not a palindrome." << endl;
    }*/
    
	return 0;
}