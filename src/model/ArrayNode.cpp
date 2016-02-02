/*
 * ArrayNode.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: jelm9149
 */

#include "ArrayNode.h"
#include <iostream>

template <class Type>
ArrayNode<Type>::ArrayNode()  : Node<Type>()
{
	this->nest = nullptr;
	this->pointers = nullptr;

}

template <class Type>
ArrayNode<Type> :: ArrayNode(Type value) : Node<Type>(value)
{
	this->next = nullptr;
	this->value = value;
}

template <class Type>
ArrayNode<Type> :: ArrayNode(Type value, ArrayNode<Type> * next) : Node<Type>(value)
		{
			this->value = value;
			this->next =value;
		}
template <class Type>
ArrayNode<Type>::~ArrayNode()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
ArrayNode<Type> * ArrayNode<Type> :: getNext()
{
	return this ->next;
}

template <class Type>
void ArrayNode<Type> :: setNext(ArrayNode<Type> * next)
{
	this->next = next;
}
