/*
 * CMutex.hpp
 *
 *  Created on: Jun 7, 2019
 *      Author: yyc
 */

#ifndef INCLUDE_CMUTEX_HPP_
#define INCLUDE_CMUTEX_HPP_
#include <pthread.h>

class CMutex{
public:
	CMutex(pthread_mutex_t);
	~CMutex();
private:
	pthread_mutex_t mutex;
	int owner;
};


#endif /* INCLUDE_CMUTEX_HPP_ */
