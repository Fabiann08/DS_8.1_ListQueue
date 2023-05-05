#include <iostream>
#include "ListQueue.h"
#include "LinkedStack.h"

using namespace std;

bool isPalindrome(string someString);

int main()
{
    // Test the isPalindrome function
    string testString = "abcda";
    if (isPalindrome(testString))
    {
        cout << testString << " is a palindrome" << endl;
    }
    else
    {
        cout << testString << " is not a palindrome" << endl;
    }

    string testString2 = "radar";
    if (isPalindrome(testString2))
    {
        cout << testString2 << " is a palindrome" << endl;
    }
    else
    {
        cout << testString2 << " is not a palindrome" << endl;
    }
	return 0;
}


bool isPalindrome(string someString)
{
    ListQueue<char> aQueue;
    LinkedStack<char> aStack;

    // Add first length/2 characters to queue
    int length = someString.length();
    for (int i = 0; i < length / 2; i++)
    {
        char nextChar = someString[i];
        aQueue.enqueue(nextChar);
    }

    // Push remaining characters onto stack
    for (int i = length / 2; i < length; i++)
    {
        char nextChar = someString[i];
        aStack.push(nextChar);
    }

    // Compare the queue characters with the stack characters
    bool charactersAreEqual = true;
    while (!aQueue.isEmpty() && charactersAreEqual)
    {
        char queueFront = aQueue.peekFront();
        char stackTop = aStack.peek();
        if (queueFront == stackTop)
        {
            aQueue.dequeue();
            aStack.pop();
        }
        else
        {
            charactersAreEqual = false;
        }
    }

    return charactersAreEqual;
}
