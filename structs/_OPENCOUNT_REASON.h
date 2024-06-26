#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _OPENCOUNT_REASON
{
    OpenCount_SkipLogging = 0,
    OpenCount_AsyncRead = 1,
    OpenCount_FlushCache = 2,
    OpenCount_GetDirtyPage = 3,
    OpenCount_GetFlushedVDL = 4,
    OpenCount_InitCachemap1 = 5,
    OpenCount_InitCachemap2 = 6,
    OpenCount_InitCachemap3 = 7,
    OpenCount_InitCachemap4 = 8,
    OpenCount_InitCachemap5 = 9,
    OpenCount_MdlWrite = 10,
    OpenCount_MdlWriteAbort = 11,
    OpenCount_NotifyMappedWrite = 12,
    OpenCount_NotifyMappedWriteCompCallback = 13,
    OpenCount_PurgeCache = 14,
    OpenCount_PurgeCacheActiveViews = 15,
    OpenCount_ReadAhead = 16,
    OpenCount_SetFileSize = 17,
    OpenCount_SetFileSizeSection = 18,
    OpenCount_UninitCachemapReadAhead = 19,
    OpenCount_UninitCachemapReg = 20,
    OpenCount_UnmapInactiveViews = 21,
    OpenCount_UnmapInactiveViews1 = 22,
    OpenCount_UnmapInactiveViews2 = 23,
    OpenCount_UnmapInactiveViews3 = 24,
    OpenCount_WriteBehind = 25,
    OpenCount_WriteBehindComplete = 26,
    OpenCount_WriteBehindFailAcquire = 27
};
