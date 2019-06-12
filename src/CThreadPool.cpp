/*
 * CThreadPool.cpp
 *
 *  Created on: Jun 7, 2019
 *      Author: yyc
 */
#include "CThreadPool.hpp"

CThreadPool::CThreadPool(int num_, void*(*thread_func)(void*))
{
	num = num_;
	for(int i = 0; i < num; i++)
	{
		pthread_create(&threads[i], 0, thread_func, (void*)&i);
		jobs[i] = new CJob(thread_func, &i);
		cthreads[i] = new CThread(threads[i], *jobs[i]);
		(*cthreads[i]).start();
	}
}

CThreadPool::~CThreadPool()
{
	for(int i = 0; i < num; i++)
	{
		delete jobs[i];
		delete cthreads[i];
	}
}

void CThreadPool::stop()
{
	for(int i = 0; i < num; i++)
		(*cthreads[i]).stop();
}
