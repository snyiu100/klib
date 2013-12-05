#pragma once

#include "../../kthread/RWSemaphore.h"
#include "../../core/ShareMemory.h"
#include "../../istddef.h"

using namespace klib;
using namespace klib::mem;
using namespace klib::kthread;

/**
 * @brief  ��дͨ��ģ��
 */
class CWRCommunicate
{
public:
	CWRCommunicate(tstring name,int buffersize);
	~CWRCommunicate(void);
    
	void write(string& str);
	void read(string& str);

	bool isEnd();
	tstring getname();
	void close();

private:
	tstring             m_name;
	CWRSemaphore        m_semaphore;
	CShareMemory        m_memroy;
	bool                m_bEnd;
};