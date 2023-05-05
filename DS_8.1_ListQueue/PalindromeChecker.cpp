#include "PalindromeChecker.h"
bool PalindromeChecker::isPalindrome(std::string someString) {
    ListQueue<char> aQueue;
    LinkedList<char> aList;

    // Add each character of the string to both the queue and the list
    for (int i = 0; i < someString.length(); i++) {
        char nextChar = someString[i];
        aQueue.enqueue(nextChar);
        aList.insert(i + 1, nextChar);
    }

    // Compare the queue characters with the list characters
    bool charactersAreEqual = true;
    while (!aQueue.isEmpty() && !aList.isEmpty() && charactersAreEqual)
    {
        char queueFront = aQueue.peekFront();
        char listFront = aList.getEntry(1);

        if (queueFront == listFront) {
            aQueue.dequeue();
            aList.remove(1);
        }
        else {
            charactersAreEqual = false;
        }
    }

    // The string is a palindrome if both the queue and the list are empty
    return charactersAreEqual;
}