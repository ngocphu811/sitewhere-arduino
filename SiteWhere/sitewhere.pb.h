/* Automatically generated nanopb header */
/* Generated by nanopb-0.2.5 at Thu Feb 20 17:00:15 2014. */

#ifndef _PB_SITEWHERE_PB_H_
#define _PB_SITEWHERE_PB_H_
#include <pb.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _SiteWhere_Command {
    SiteWhere_Command_REGISTER = 1,
    SiteWhere_Command_ACKNOWLEDGE = 2,
    SiteWhere_Command_DEVICELOCATION = 3,
    SiteWhere_Command_DEVICEALERT = 4,
    SiteWhere_Command_DEVICEMEASUREMENT = 5
} SiteWhere_Command;

typedef enum _Device_Command {
    Device_Command_REGISTER_ACK = 1
} Device_Command;

typedef enum _Device_RegistrationAckState {
    Device_RegistrationAckState_NEW_REGISTRATION = 1,
    Device_RegistrationAckState_ALREADY_REGISTERED = 2,
    Device_RegistrationAckState_REGISTRATION_ERROR = 3
} Device_RegistrationAckState;

typedef enum _Device_RegistrationAckError {
    Device_RegistrationAckError_INVALID_SPECIFICATION = 1,
    Device_RegistrationAckError_SITE_TOKEN_REQUIRED = 2
} Device_RegistrationAckError;

/* Struct definitions */
typedef struct _Device {
    uint8_t dummy_field;
} Device;

typedef struct _SiteWhere {
    uint8_t dummy_field;
} SiteWhere;

typedef struct _Device_Header {
    Device_Command command;
    bool has_originator;
    char originator[30];
} Device_Header;

typedef struct _Device_RegistrationAck {
    Device_RegistrationAckState state;
    bool has_errorType;
    Device_RegistrationAckError errorType;
    bool has_errorMessage;
    char errorMessage[50];
} Device_RegistrationAck;

typedef struct _SiteWhere_Acknowledge {
    char hardwareId[40];
    bool has_message;
    char message[50];
} SiteWhere_Acknowledge;

typedef struct _SiteWhere_DeviceAlert {
    char hardwareId[40];
    char alertType[20];
    char alertMessage[30];
    bool has_eventDate;
    int64_t eventDate;
} SiteWhere_DeviceAlert;

typedef struct _SiteWhere_DeviceLocation {
    char hardwareId[40];
    char latitude[16];
    char longitude[16];
    char elevation[16];
    bool has_eventDate;
    int64_t eventDate;
} SiteWhere_DeviceLocation;

typedef struct _SiteWhere_DeviceMeasurement {
    char hardwareId[40];
    char measurementId[25];
    char measurementValue[16];
    bool has_eventDate;
    int64_t eventDate;
} SiteWhere_DeviceMeasurement;

typedef struct _SiteWhere_Header {
    SiteWhere_Command command;
    bool has_originator;
    char originator[30];
} SiteWhere_Header;

typedef struct _SiteWhere_RegisterDevice {
    char hardwareId[40];
    char specificationToken[40];
} SiteWhere_RegisterDevice;

/* Default values for struct fields */

/* Field tags (for use in manual encoding/decoding) */
#define Device_Header_command_tag                1
#define Device_Header_originator_tag             2
#define Device_RegistrationAck_state_tag         1
#define Device_RegistrationAck_errorType_tag     2
#define Device_RegistrationAck_errorMessage_tag  3
#define SiteWhere_Acknowledge_hardwareId_tag     1
#define SiteWhere_Acknowledge_message_tag        2
#define SiteWhere_DeviceAlert_hardwareId_tag     1
#define SiteWhere_DeviceAlert_alertType_tag      2
#define SiteWhere_DeviceAlert_alertMessage_tag   3
#define SiteWhere_DeviceAlert_eventDate_tag      4
#define SiteWhere_DeviceLocation_hardwareId_tag  1
#define SiteWhere_DeviceLocation_latitude_tag    2
#define SiteWhere_DeviceLocation_longitude_tag   3
#define SiteWhere_DeviceLocation_elevation_tag   4
#define SiteWhere_DeviceLocation_eventDate_tag   5
#define SiteWhere_DeviceMeasurement_hardwareId_tag 1
#define SiteWhere_DeviceMeasurement_measurementId_tag 2
#define SiteWhere_DeviceMeasurement_measurementValue_tag 3
#define SiteWhere_DeviceMeasurement_eventDate_tag 4
#define SiteWhere_Header_command_tag             1
#define SiteWhere_Header_originator_tag          2
#define SiteWhere_RegisterDevice_hardwareId_tag  1
#define SiteWhere_RegisterDevice_specificationToken_tag 2

/* Struct field encoding specification for nanopb */
extern const pb_field_t SiteWhere_fields[1];
extern const pb_field_t SiteWhere_Header_fields[3];
extern const pb_field_t SiteWhere_RegisterDevice_fields[3];
extern const pb_field_t SiteWhere_Acknowledge_fields[3];
extern const pb_field_t SiteWhere_DeviceLocation_fields[6];
extern const pb_field_t SiteWhere_DeviceAlert_fields[5];
extern const pb_field_t SiteWhere_DeviceMeasurement_fields[5];
extern const pb_field_t Device_fields[1];
extern const pb_field_t Device_Header_fields[3];
extern const pb_field_t Device_RegistrationAck_fields[4];

/* Maximum encoded size of messages (where known) */
#define SiteWhere_size                           0
#define SiteWhere_Header_size                    38
#define SiteWhere_RegisterDevice_size            84
#define SiteWhere_Acknowledge_size               94
#define SiteWhere_DeviceLocation_size            107
#define SiteWhere_DeviceAlert_size               107
#define SiteWhere_DeviceMeasurement_size         98
#define Device_size                              0
#define Device_Header_size                       38
#define Device_RegistrationAck_size              64

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
