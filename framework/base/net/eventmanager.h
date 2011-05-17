#ifndef _BASE_EVENT_MANAGER_H_
#define _BASE_EVENT_MANAGER_H_

#include <base/net/eventhandler.h>
#include <base/util/allocator.h>
#include <base/thread/nocopyable.h>
#include <sys/time.h>
#include <stddef.h>
#include <event.h>

namespace base {

class EventHandler;
class EventData;

class IEventManager : public NoCopyable
{
public:
	IEventManager(){}
	virtual ~IEventManager(){}

	virtual int RegisterHandler(int mask, EventHandler* handler, timeval* timeout=0) = 0;

	virtual int RemoveHandler(int mask, EventHandler* handler) = 0;

	virtual int ScheduleTimer(EventHandler* handler, timeval* timeout, void ** pTimerID=NULL) = 0;

	virtual int CancelTimer(EventHandler* handler, void * pTimerID=NULL /* cancel all Timers */) = 0;

	virtual void Run();

	virtual void Stop() { running = false; }

    bool IsRunning() const { return running; }

protected:
    virtual int RunOnce() = 0 ; 

private:
	bool running;	
};

class EventManager : public IEventManager
{
public:
    EventManager(IMemoryAllocator* allocator=NULL);
    virtual ~EventManager();

    virtual int RegisterHandler(int mask, EventHandler* handler, timeval* timeout=0);
    virtual int RemoveHandler(int mask, EventHandler* handler);
    virtual int ScheduleTimer(EventHandler* handler, timeval* timeout, void ** pTimerID=NULL);
    virtual int CancelTimer(EventHandler* handler, void * pTimerID=NULL /* cancel all Timers */);

    virtual void Run();
    virtual void Stop();

protected:
    virtual int RunOnce();
    int initEventHandler(EventHandler* handler);
    void uninitEventHander(EventHandler* handler, EventData* ed);
    bool containEvent(EventData* ed);

private:

    EventData* AllocEventData();
    void ReleaseEventData(EventData* data);

    IMemoryAllocator*	_allocator;
    event_base*		_eventBase;
};

}

#endif

