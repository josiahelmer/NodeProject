/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: jelm9149
 */

#include "CTECList.h"

template<class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;
}
template<class Type>
CTECList<Type>::~CTECList()
{

}
template<class Type>
Type CTECList<Type> :: removeFromFront()
{
	//Check that not removing from an empty list
	assert(this->size > 0);

	//Declare an variable of the type to return
	Type thingToRemove;
	//Create a pointer to what is after head.
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();
	//Get what head is holding!!!
	thingToRemove + this->head->getValue();
	//Remove head
	delete this->head;
	//Move head to next spot
	this->head = newHead;
	this->calculateSize();

	return thingToRemove;
}
template<class Type>
Type CTECList<Type> :: removeFromEnd()
{
	/**
	 * Check size  valid
	 * Create a return variable
	 * Loop until the next to last node
	 * grab the value from the last node
	 * delete the last node
	 * set new last node as the end
	 */
	assert(size>0);

	Type returnvalue;

	if(size == 1)
	{
		ArrayNode<Type> * toRemove = end;
		returnvalue = removeFromFront();
		end = nullptr;
		head = nullptr;
		delete toRemove;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for(int index = 0; index < size - 1; index++)
		{
			current = current->getNext();
		}

	returnvalue = end->getValue();
	delete end;
	current = end;
	current->setNext(nullptr);


	}
	calculateSize();

	return returnvalue;

}

template <class Type>
Type CTECList<Type> :: removeFromIndex(int index)

{
	//Check that not removing
	assert( this->size > 0);

	assert(index >= 0 && index < size);

	Type thingToRemove;

	ArrayNode<Type> * preivious, deleteMe , newsNext;

	if(index == 0)
	{
		thingToRemove = removeFromFront();
	}
	else if(index == size-1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{
		for(int spot = 0; spot < index+1; spot++)
		{

		}
	}

}

template <class Type>
int CTECList<Type> :: getSize()
{

}
template <class Type>
void CTECList<Type> :: calculateSize()
{
	assert(size >= 0);

	int count = 0;
	if(head == nullptr)
	{
		size = count;
	}
	else
	{
		count++;
		ArrayNode<Type> * current = head;
		while(current ->getNext() != nullptr)
		{

			current + current->getNext();
		}
		size = count;

	}
}

template <class Type>
void addToFront(const Type& value)
{

}
template <class Type>
void addToEnd(const Type& value)
{

}
template <class Type>
void addAtIndex(const Type& value)
{

}
