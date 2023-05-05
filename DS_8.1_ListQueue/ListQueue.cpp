//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** ADT queue: ADT list implementation.
 Listing 14-2.
 @file ListQueue.cpp */

#include "ListQueue.h"  // header file

template<class ItemType>
ListQueue<ItemType>::ListQueue()
{
    listPtr = new LinkedList<ItemType>();
}  // end default constructor

template<class ItemType>
ListQueue<ItemType>::ListQueue(const ListQueue& aQueue) : listPtr(aQueue.listPtr)
{
}  // end copy constructor

template<class ItemType>
ListQueue<ItemType>::~ListQueue()
{
}  // end destructor

template<class ItemType>
bool ListQueue<ItemType>::isEmpty() const
{
    return listPtr->isEmpty();
}  // end isEmpty

template<class ItemType>
bool ListQueue<ItemType>::enqueue(const ItemType& newEntry)
{
    return listPtr->insert(listPtr->getLength() + 1, newEntry);
}  // end enqueue

template<class ItemType>
bool ListQueue<ItemType>::dequeue()
{
    return listPtr->remove(1);
}  // end dequeue

template<class ItemType>
ItemType ListQueue<ItemType>::peekFront() const throw(PrecondViolatedExcep)
{
    if (isEmpty())
        throw PrecondViolatedExcep("peekFront() called with empty queue.");

    // Queue is not empty; return front
    return listPtr->getEntry(1);
}  // end peekFront

/*
// Implement the isPalindrome function here
template<class ItemType>
bool ListQueue<ItemType>::isPalindrome(string someString)
{
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

        if (queueFront == listFront) 
        {
            aQueue.dequeue();
            aList.remove(1);
        }
        else 
        {
            charactersAreEqual = false;
        }
    }

    // The string is a palindrome if both the queue and the list are empty
    return charactersAreEqual;
}
*/

// End of implementation file.