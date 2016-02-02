/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: jelm9149
 */

#include "CTECArray.h"
using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;

}

template <class Type>
CTECArray<Type>::~CTECArray()
{

}

template<class Type>
int CTECArray<Type>::getSize()
{
	return this-> size;
}

template <class Type>
Type* CTECArray<Type> :: get(int position)
{
	// We need to do bounds checking so we do not crash the program
	if(position >= size || position < 0)
	{
		//I am out of bounds nd need to do something about it.
		cerr << "position value is out og bounds" << endl;
		return nullptr;
	}
	else
	{
		// I am in bounds
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{

			}
		}
	}
}

template <class Type>
void CTECArray<Type> ::set(int position, Type value)
{

}

