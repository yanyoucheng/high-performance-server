/*
 * CThread.cpp
 *
 *  Created on: Jun 7, 2019
 *      Author: yyc
 */
#include "CThread.hpp"

CThread::CThread(pthread_t thread_, CJob& job_)
{
	thread = thread_;
	job = job_;
}
CThread::~CThread()
{
}
void CThread::start()
{
	job.run();
}
void CThread::stop()
{
	pthread_join(thread, 0);
}


