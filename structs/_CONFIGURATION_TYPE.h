#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _CONFIGURATION_TYPE
{
    ArcSystem = 0,
    CentralProcessor = 1,
    FloatingPointProcessor = 2,
    PrimaryIcache = 3,
    PrimaryDcache = 4,
    SecondaryIcache = 5,
    SecondaryDcache = 6,
    SecondaryCache = 7,
    EisaAdapter = 8,
    TcAdapter = 9,
    ScsiAdapter = 10,
    DtiAdapter = 11,
    MultiFunctionAdapter = 12,
    DiskController = 13,
    TapeController = 14,
    CdromController = 15,
    WormController = 16,
    SerialController = 17,
    NetworkController = 18,
    DisplayController = 19,
    ParallelController = 20,
    PointerController = 21,
    KeyboardController = 22,
    AudioController = 23,
    OtherController = 24,
    DiskPeripheral = 25,
    FloppyDiskPeripheral = 26,
    TapePeripheral = 27,
    ModemPeripheral = 28,
    MonitorPeripheral = 29,
    PrinterPeripheral = 30,
    PointerPeripheral = 31,
    KeyboardPeripheral = 32,
    TerminalPeripheral = 33,
    OtherPeripheral = 34,
    LinePeripheral = 35,
    NetworkPeripheral = 36,
    SystemMemory = 37,
    DockingInformation = 38,
    RealModeIrqRoutingTable = 39,
    RealModePCIEnumeration = 40,
    MaximumType = 41
};
/* Used in */
// _CONFIGURATION_COMPONENT

