#pragma once
/* ------------------ */

//0x10 bytes (sizeof)
struct _UNICODE_STRING
{
    USHORT Length;                                                          //0x0
    USHORT MaximumLength;                                                   //0x2
    WCHAR* Buffer;                                                          //0x8
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _ACCESS_STATE
// _BUS_HANDLER
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CRITICAL_PROCESS_EXCEPTION_DATA
// _CURDIR
// _DEVICE_NODE
// _DRIVER_EXTENSION
// _DRIVER_OBJECT
// _ESERVERSILO_GLOBALS
// _ETHREAD
// _FILE_OBJECT
// _HALP_DMA_CONTROLLER
// _HIVE_LIST_ENTRY
// _IO_STACK_LOCATION
// _KLDR_DATA_TABLE_ENTRY
// _KRESOURCEMANAGER
// _KTM
// _KTRANSACTION
// _LDR_DATA_TABLE_ENTRY
// _LOADER_PARAMETER_EXTENSION
// _MMPAGING_FILE
// _MM_DRIVER_VERIFIER_DATA
// _OBJECT_ATTRIBUTES
// _OBJECT_HEADER_NAME_INFO
// _OBJECT_NAME_INFORMATION
// _OBJECT_SYMBOLIC_LINK
// _OBJECT_TYPE
// _OBJECT_TYPE_INITIALIZER
// _PCW_COUNTER_INFORMATION
// _PCW_MASK_INFORMATION
// _PCW_REGISTRATION_INFORMATION
// _PEB
// _PEP_ACPI_EXTENDED_ADDRESS
// _PEP_ACPI_GPIO_RESOURCE
// _PEP_ACPI_SPB_RESOURCE
// _PNP_DEVICE_EVENT_ENTRY
// _POP_DEVICE_POWER_PROFILE
// _POP_FX_DEVICE
// _POP_POLICY_DEVICE
// _POP_POWER_PLANE
// _POP_THERMAL_ZONE
// _PO_FX_COMPONENT_PERF_SET
// _PPM_IDLE_STATE
// _PPM_PLATFORM_STATE
// _REGISTERED_INTERRUPT_CONTROLLER
// _RELATIVE_SYMLINK_INFO
// _RTL_USER_PROCESS_PARAMETERS
// _SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR
// _SEP_LOGON_SESSION_REFERENCES
// _SEP_SILOSTATE
// _TEB
// _TRIAGE_DEVICE_NODE
// _VF_DRIVER_IO_CALLBACKS
// _VF_SUSPECT_DRIVER_ENTRY
// _WMI_LOGGER_CONTEXT

