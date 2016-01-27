/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: jelm9149
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_
#include "../Model/Node.h"
#include "../Model/Node.cpp"
#include <string>

class NodeController
{
	private:
		Node<string> stringNode;
		Node<int> intNode;
	public:
		NodeController();

};
{
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
