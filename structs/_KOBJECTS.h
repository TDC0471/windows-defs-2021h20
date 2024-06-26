#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KOBJECTS
{
    EventNotificationObject = 0,
    EventSynchronizationObject = 1,
    MutantObject = 2,
    ProcessObject = 3,
    QueueObject = 4,
    SemaphoreObject = 5,
    ThreadObject = 6,
    GateObject = 7,
    TimerNotificationObject = 8,
    TimerSynchronizationObject = 9,
    Spare2Object = 10,
    Spare3Object = 11,
    Spare4Object = 12,
    Spare5Object = 13,
    Spare6Object = 14,
    Spare7Object = 15,
    Spare8Object = 16,
    ProfileCallbackObject = 17,
    ApcObject = 18,
    DpcObject = 19,
    DeviceQueueObject = 20,
    PriQueueObject = 21,
    InterruptObject = 22,
    ProfileObject = 23,
    Timer2NotificationObject = 24,
    Timer2SynchronizationObject = 25,
    ThreadedDpcObject = 26,
    MaximumKernelObject = 27
};
