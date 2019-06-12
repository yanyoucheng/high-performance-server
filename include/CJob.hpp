/*
 * CJob.hpp
 *
 *  Created on: Jun 7, 2019
 *      Author: yyc
 */

#ifndef INCLUDE_CJOB_HPP_
#define INCLUDE_CJOB_HPP_

class CJob
{
public:
	CJob();
	CJob(void*(*func_)(void*), void* arg_);
	~CJob();
	void run();
private:
	void*(*func)(void*);
	void* arg;
};

#endif /* INCLUDE_CJOB_HPP_ */
