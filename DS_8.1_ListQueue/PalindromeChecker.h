#ifndef IS_PALINDROME_CHECKER_H
#define IS_PALINDROME_CHECKER_H

#include "LinkedList.cpp"
#include "ListQueue.cpp"
#include <string>

class PalindromeChecker {
public:
    static bool isPalindrome(std::string someString);

private:
    PalindromeChecker() {}
};
#endif // IS_PALINDROME_CHECKER_H