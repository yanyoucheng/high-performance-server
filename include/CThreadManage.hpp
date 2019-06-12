/*
 * ThreadManage.hpp
 *
 *  Created on: Jun 7, 2019
 *      Author: yyc
 */

#ifndef INCLUDE_CTHREADMANAGE_HPP_
#define INCLUDE_CTHREADMANAGE_HPP_
#include "CThreadPool.hpp"

class CThreadManage
{
public:
	CThreadManage(void*(*thread_func)(void*));
	~CThreadManage();
	void stop();
private:
	int num;
	CThreadPool *pool;
};

#endif /* INCLUDE_CTHREADMANAGE_HPP_ */
