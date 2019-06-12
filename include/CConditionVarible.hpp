/*
 * CConditionVarible.hpp
 *
 *  Created on: Jun 7, 2019
 *      Author: yyc
 */

#ifndef INCLUDE_CCONDITIONVARIBLE_HPP_
#define INCLUDE_CCONDITIONVARIBLE_HPP_
#include <pthread.h>
class CConditionVarible
{
public:
	CConditionVarible(pthread_cond_t, pthread_mutex_t);
	~CConditionVarible();
	void wait();
	void notify();
	void notifyAll();
private:
	pthread_cond_t cond;
	pthread_mutex_t mutex;
};

#endif /* INCLUDE_CCONDITIONVARIBLE_HPP_ */
