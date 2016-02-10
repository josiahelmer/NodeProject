/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: jelm9149
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_

#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"
#include <string>

class NodeController
{
	private:
	CTECArray<int> * notHipsterInts;
	public:
		NodeController();
		virtual ~NodeController();
		void start();
};


#endif /* CONTROLLER_NODECONTROLLER_H_ */
