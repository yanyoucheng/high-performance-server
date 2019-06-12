/*
 * CThread.hpp
 *
 *  Created on: Jun 7, 2019
 *      Author: yyc
 */

#ifndef INCLUDE_CTHREAD_HPP_
#define INCLUDE_CTHREAD_HPP_
#include "CJob.hpp"
#include <pthread.h>
class CThread
{
public:
	CThread(pthread_t, CJob&);
	~CThread();
	void start();
	void stop();
private:
	CJob job;
	pthread_t thread;
};

#endif /* INCLUDE_CTHREAD_HPP_ */
