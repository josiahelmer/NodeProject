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
	assert(this->size > 0);

	Type endToRemove;

	ArrayNode<Type> * newEnd = new ArrayNode<Type>();
	newEnd = this->end->getNext();

	endToRemove + this->head->getvalue();

	delete this->end;

	this->end = newEnd;

	return endToRemove;

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
