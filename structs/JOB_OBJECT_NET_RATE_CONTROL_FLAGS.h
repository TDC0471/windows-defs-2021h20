#pragma once
/* ------------------ */

//0x4 bytes (sizeof)
enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS
{
    JOB_OBJECT_NET_RATE_CONTROL_ENABLE = 1,
    JOB_OBJECT_NET_RATE_CONTROL_MAX_BANDWIDTH = 2,
    JOB_OBJECT_NET_RATE_CONTROL_DSCP_TAG = 4,
    JOB_OBJECT_NET_RATE_CONTROL_VALID_FLAGS = 7
};
