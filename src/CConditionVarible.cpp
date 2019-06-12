/*
 * CConditionVarible.cpp
 *
 *  Created on: Jun 7, 2019
 *      Author: yyc
 */
#include "CConditionVarible.hpp"
CConditionVarible::CConditionVarible(pthread_cond_t cond_, pthread_mutex_t mutex_)
{
	mutex = mutex_;
	cond = cond_;
}
CConditionVarible::~CConditionVarible()
{
}
void CConditionVarible::wait()
{
	pthread_cond_wait(&cond, &mutex);
}
void CConditionVarible::notify()
{
	pthread_cond_signal(&cond);
}
void CConditionVarible::notifyAll()
{
	pthread_cond_broadcast(&cond);
}


