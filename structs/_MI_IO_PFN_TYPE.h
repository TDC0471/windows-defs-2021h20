#pragma once
/* ------------------ */

//0x4 bytes (sizeof)
enum _MI_IO_PFN_TYPE
{
    MiIoPfnProbes = 0,
    MiIoPfnMaps = 1,
    MiIoPfnUnmapped = 2,
    MiMaximumIoPfnType = 3
};