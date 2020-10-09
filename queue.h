//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: queue.h
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#if !defined(_QUEUE_H)
#define _QUEUE_H


template <class T> class Queue
{
private:
	const int max;
	T queue;
	int tail;
	int head;
public:
	Queue();
	~Queue();
	void put(T &var);
	T get();
};

#endif  //_QUEUE_H
