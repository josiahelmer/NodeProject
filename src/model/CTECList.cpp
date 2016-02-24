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
}
