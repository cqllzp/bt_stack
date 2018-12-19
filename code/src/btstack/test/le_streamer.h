
// spp_and_le_counter.h generated from spp_and_le_counter.gatt for BTstack
// att db format version 1

// binary attribute representation:
// - size in bytes (16), flags(16), handle (16), uuid (16/128), value(...)

#include <stdint.h>

const uint8_t profile_data[] =
{
    // ATT DB Version
    1,

    // 0x0001 PRIMARY_SERVICE-GAP_SERVICE
    0x0a, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x28, 0x00, 0x18, 
    // 0x0002 CHARACTERISTIC-GAP_DEVICE_NAME-READ
    0x0d, 0x00, 0x02, 0x00, 0x02, 0x00, 0x03, 0x28, 0x02, 0x03, 0x00, 0x00, 0x2a, 
    // 0x0003 VALUE-GAP_DEVICE_NAME-READ-'LE Streamer'
    // READ_ANYBODY
    0x13, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00, 0x2a, 0x4c, 0x45, 0x20, 0x53, 0x74, 0x72, 0x65, 0x61, 0x6d, 0x65, 0x72, 

    // 0x0004 PRIMARY_SERVICE-GATT_SERVICE
    0x0a, 0x00, 0x02, 0x00, 0x04, 0x00, 0x00, 0x28, 0x01, 0x18, 
    // 0x0005 CHARACTERISTIC-GATT_SERVICE_CHANGED-READ
    0x0d, 0x00, 0x02, 0x00, 0x05, 0x00, 0x03, 0x28, 0x02, 0x06, 0x00, 0x05, 0x2a, 
    // 0x0006 VALUE-GATT_SERVICE_CHANGED-READ-''
    // READ_ANYBODY
    0x08, 0x00, 0x02, 0x00, 0x06, 0x00, 0x05, 0x2a, 
    // Test Service

    // 0x0007 PRIMARY_SERVICE-49535343-FE7D-4AE5-8F9A-9FAFD205E455
    0x18, 0x00, 0x02, 0x00, 0x07, 0x00, 0x00, 0x28, 0x55, 0xe4, 0x05, 0xd2, 0xaf, 0x9f, 0x9a, 0x8f, 0xe5, 0x4a, 0x7d, 0xfe, 0x43, 0x53, 0x53, 0x49, 
    // Test Characteristic A,  notify
    // 0x0008 CHARACTERISTIC-49535343-1E4D-4BD9-BA61-23C647249616-NOTIFY | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x08, 0x00, 0x03, 0x28, 0x10, 0x09, 0x00, 0x16, 0x96, 0x24, 0x47, 0xc6, 0x23, 0x61, 0xba, 0xd9, 0x4b, 0x4d, 0x1e, 0x43, 0x53, 0x53, 0x49, 
    // 0x0009 VALUE-49535343-1E4D-4BD9-BA61-23C647249616-NOTIFY | DYNAMIC-''
    // 
    0x16, 0x00, 0x00, 0x03, 0x09, 0x00, 0x16, 0x96, 0x24, 0x47, 0xc6, 0x23, 0x61, 0xba, 0xd9, 0x4b, 0x4d, 0x1e, 0x43, 0x53, 0x53, 0x49, 
    // 0x000a CLIENT_CHARACTERISTIC_CONFIGURATION
    // READ_ANYBODY, WRITE_ANYBODY
    0x0a, 0x00, 0x0a, 0x01, 0x0a, 0x00, 0x02, 0x29, 0x00, 0x00, 
    // Test Characteristic B, write_without_response as well as write
    // 0x000b CHARACTERISTIC-49535343-8841-43F4-A8D4-ECBE34729BB3-WRITE | WRITE_WITHOUT_RESPONSE | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x0b, 0x00, 0x03, 0x28, 0x0c, 0x0c, 0x00, 0xb3, 0x9b, 0x72, 0x34, 0xbe, 0xec, 0xd4, 0xa8, 0xf4, 0x43, 0x41, 0x88, 0x43, 0x53, 0x53, 0x49, 
    // 0x000c VALUE-49535343-8841-43F4-A8D4-ECBE34729BB3-WRITE | WRITE_WITHOUT_RESPONSE | DYNAMIC-''
    // WRITE_ANYBODY
    0x16, 0x00, 0x0c, 0x03, 0x0c, 0x00, 0xb3, 0x9b, 0x72, 0x34, 0xbe, 0xec, 0xd4, 0xa8, 0xf4, 0x43, 0x41, 0x88, 0x43, 0x53, 0x53, 0x49, 
    // Device Information Service

    // 0x000d PRIMARY_SERVICE-180A
    0x0a, 0x00, 0x02, 0x00, 0x0d, 0x00, 0x00, 0x28, 0x0a, 0x18, 
    // Manufacturer Name String
    // 0x000e CHARACTERISTIC-2A29-READ
    0x0d, 0x00, 0x02, 0x00, 0x0e, 0x00, 0x03, 0x28, 0x02, 0x0f, 0x00, 0x29, 0x2a, 
    // 0x000f VALUE-2A29-READ-''
    // READ_ANYBODY
    0x08, 0x00, 0x02, 0x00, 0x0f, 0x00, 0x29, 0x2a, 
    // System ID
    // 0x0010 CHARACTERISTIC-2A23-READ
    0x0d, 0x00, 0x02, 0x00, 0x10, 0x00, 0x03, 0x28, 0x02, 0x11, 0x00, 0x23, 0x2a, 
    // 0x0011 VALUE-2A23-READ-''
    // READ_ANYBODY
    0x08, 0x00, 0x02, 0x00, 0x11, 0x00, 0x23, 0x2a, 
    // Firmware Revision String
    // 0x0012 CHARACTERISTIC-2A26-READ
    0x0d, 0x00, 0x02, 0x00, 0x12, 0x00, 0x03, 0x28, 0x02, 0x13, 0x00, 0x26, 0x2a, 
    // 0x0013 VALUE-2A26-READ-'30'
    // READ_ANYBODY
    0x09, 0x00, 0x02, 0x00, 0x13, 0x00, 0x26, 0x2a, 0x30, 

    // END
    0x00, 0x00, 
}; // total size 175 bytes 


//
// list service handle ranges
//
#define ATT_SERVICE_GAP_SERVICE_START_HANDLE 0x0001
#define ATT_SERVICE_GAP_SERVICE_END_HANDLE 0x0003
#define ATT_SERVICE_GATT_SERVICE_START_HANDLE 0x0004
#define ATT_SERVICE_GATT_SERVICE_END_HANDLE 0x0006
#define ATT_SERVICE_49535343_FE7D_4AE5_8F9A_9FAFD205E455_START_HANDLE 0x0007
#define ATT_SERVICE_49535343_FE7D_4AE5_8F9A_9FAFD205E455_END_HANDLE 0x000c
#define ATT_SERVICE_180A_START_HANDLE 0x000d
#define ATT_SERVICE_180A_END_HANDLE 0x0013

//
// list mapping between characteristics and handles
//
#define ATT_CHARACTERISTIC_GAP_DEVICE_NAME_01_VALUE_HANDLE 0x0003
#define ATT_CHARACTERISTIC_GATT_SERVICE_CHANGED_01_VALUE_HANDLE 0x0006
#define ATT_CHARACTERISTIC_49535343_1E4D_4BD9_BA61_23C647249616_01_VALUE_HANDLE 0x0009
#define ATT_CHARACTERISTIC_49535343_1E4D_4BD9_BA61_23C647249616_01_CLIENT_CONFIGURATION_HANDLE 0x000a
#define ATT_CHARACTERISTIC_49535343_8841_43F4_A8D4_ECBE34729BB3_01_VALUE_HANDLE 0x000c
#define ATT_CHARACTERISTIC_2A29_01_VALUE_HANDLE 0x000f
#define ATT_CHARACTERISTIC_2A23_01_VALUE_HANDLE 0x0011
#define ATT_CHARACTERISTIC_2A26_01_VALUE_HANDLE 0x0013