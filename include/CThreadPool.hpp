/*
 * CThreadPool.hpp
 *
 *  Created on: Jun 7, 2019
 *      Author: yyc
 */

#ifndef INCLUDE_CTHREADPOOL_HPP_
#define INCLUDE_CTHREADPOOL_HPP_
#include "CJob.hpp"
#include "CThread.hpp"
#include <pthread.h>
#include <vector>
class CThreadPool
{
public:
CThreadPool(int,void*(*thread_func)(void*));
~CThreadPool();
void stop();
private:
std::vector<pthread_t> threads;
std::vector<CThread*> cthreads;
std::vector<CJob*>	jobs;
int num;
};



#endif /* INCLUDE_CTHREADPOOL_HPP_ */
