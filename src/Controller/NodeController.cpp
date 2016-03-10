/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: jelm9149
 */

#include "NodeController.h"
#include "../Model/Node.h"
#include "../Model/CTECList.cpp"
#include <iostream>

using namespace std;

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
	numbers = new CTECList<int>();
}

NodeController::~NodeController()
{

}

void NodeController :: testLists()
{
	numbers->addToFront(3);
	numbers->addToEnd(8);
	cout << "End should be 8 and is: " << numbers->getEnd() << endl;
}

void NodeController :: start()

{
	arrayTimer.startTimer();
	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index,  (index * 23));
	}

	for(int index = notHipsterInts->getSize()-1; index >= 0; index--)
	{
		cout << "The contents of the notHipsterInts array node" << index << " are:" << notHipsterInts->get(index) << endl;
	}

	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();
}
