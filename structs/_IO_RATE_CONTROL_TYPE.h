#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _IO_RATE_CONTROL_TYPE
{
    IoRateControlTypeCapMin = 0,
    IoRateControlTypeIopsCap = 0,
    IoRateControlTypeBandwidthCap = 1,
    IoRateControlTypeTimePercentCap = 2,
    IoRateControlTypeCapMax = 2,
    IoRateControlTypeReservationMin = 3,
    IoRateControlTypeIopsReservation = 3,
    IoRateControlTypeBandwidthReservation = 4,
    IoRateControlTypeTimePercentReservation = 5,
    IoRateControlTypeReservationMax = 5,
    IoRateControlTypeCriticalReservationMin = 6,
    IoRateControlTypeIopsCriticalReservation = 6,
    IoRateControlTypeBandwidthCriticalReservation = 7,
    IoRateControlTypeTimePercentCriticalReservation = 8,
    IoRateControlTypeCriticalReservationMax = 8,
    IoRateControlTypeSoftCapMin = 9,
    IoRateControlTypeIopsSoftCap = 9,
    IoRateControlTypeBandwidthSoftCap = 10,
    IoRateControlTypeTimePercentSoftCap = 11,
    IoRateControlTypeSoftCapMax = 11,
    IoRateControlTypeLimitExcessNotifyMin = 12,
    IoRateControlTypeIopsLimitExcessNotify = 12,
    IoRateControlTypeBandwidthLimitExcessNotify = 13,
    IoRateControlTypeTimePercentLimitExcessNotify = 14,
    IoRateControlTypeLimitExcessNotifyMax = 14,
    IoRateControlTypeMax = 15
};
