/*
 * CJob.cpp
 *
 *  Created on: Jun 7, 2019
 *      Author: yyc
 */
#include "CJob.hpp"

CJob::CJob()
{
}
CJob::CJob(void*(*func_)(void*), void* arg_)
{
	func = func_;
	arg = arg_;
}
CJob::~CJob()
{
}
void CJob::run()
{
	(*func)(arg);
}



