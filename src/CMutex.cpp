/*
 * CMutex.cpp
 *
 *  Created on: Jun 7, 2019
 *      Author: yyc
 */

#include "CMutex.hpp"

CMutex::CMutex(pthread_mutex_t mutex_)
{
	mutex = mutex_;
	owner = pthread_mutex_trylock(&mutex);
}

CMutex::~CMutex()
{
	if(owner != 0)
			pthread_mutex_unlock(&mutex);
}


