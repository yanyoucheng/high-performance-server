/*
 * CThreadManage.cpp
 *
 *  Created on: Jun 11, 2019
 *      Author: yyc
 */

#include "CThreadManage.hpp"

CThreadManage::CThreadManage(void*(*thread_func)(void*))
{
	num = 10;
	pool = new CThreadPool(num, thread_func);
}
CThreadManage::~CThreadManage()
{
	if(!pool)
		delete[] pool;
}
void CThreadManage::stop()
{
	(*pool).stop();
}


