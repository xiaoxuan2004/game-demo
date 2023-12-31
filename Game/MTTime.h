#ifndef _MTTime_h
#define _MTTime_h
 
#include <chrono>
#pragma warning(disable: 4996)

/*
#include "MTTime.h"

MTTime time;
time.Reset();
+__int64 delta = time.GetAbsTime();
*/

class MTTime
{
private:
	std::chrono::time_point<std::chrono::steady_clock> m_dwBaseTime;
	std::chrono::time_point<std::chrono::steady_clock> m_dwOldTime;
public:
	MTTime()
	{
		m_dwBaseTime=m_dwOldTime= std::chrono::high_resolution_clock::now();
	}
	__int64 GetAbsTime()
	{
		auto dwCurrent = std::chrono::high_resolution_clock::now();
		__int64 span = std::chrono::duration_cast<std::chrono::microseconds>(dwCurrent - m_dwBaseTime).count();
		return int(span / 1000);
	}
	__int64 GetDelataTime()
	{
		auto dwCurrent = std::chrono::high_resolution_clock::now();
		__int64 span = std::chrono::duration_cast<std::chrono::microseconds>(dwCurrent - m_dwOldTime).count();
		m_dwOldTime = dwCurrent;
		return int(span/1000);
	}
	
	void Reset()
	{
		m_dwBaseTime = m_dwOldTime = std::chrono::high_resolution_clock::now();
	}
};
/////////////////////////////////////////////////////////////////////////////
#endif

