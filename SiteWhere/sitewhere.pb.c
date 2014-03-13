/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.2.5 at Thu Feb 20 17:00:15 2014. */

#include "sitewhere.pb.h"



const pb_field_t SiteWhere_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_Header_fields[3] = {
    PB_FIELD2(  1, ENUM    , REQUIRED, STATIC  , FIRST, SiteWhere_Header, command, command, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, SiteWhere_Header, originator, command, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_RegisterDevice_fields[3] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_RegisterDevice, hardwareId, hardwareId, 0),
    PB_FIELD2(  2, STRING  , REQUIRED, STATIC  , OTHER, SiteWhere_RegisterDevice, specificationToken, hardwareId, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_Acknowledge_fields[3] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_Acknowledge, hardwareId, hardwareId, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, SiteWhere_Acknowledge, message, hardwareId, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_DeviceLocation_fields[6] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_DeviceLocation, hardwareId, hardwareId, 0),
    PB_FIELD2(  2, STRING  , REQUIRED, STATIC  , OTHER, SiteWhere_DeviceLocation, latitude, hardwareId, 0),
    PB_FIELD2(  3, STRING  , REQUIRED, STATIC  , OTHER, SiteWhere_DeviceLocation, longitude, latitude, 0),
    PB_FIELD2(  4, STRING  , REQUIRED, STATIC  , OTHER, SiteWhere_DeviceLocation, elevation, longitude, 0),
    PB_FIELD2(  5, INT64   , OPTIONAL, STATIC  , OTHER, SiteWhere_DeviceLocation, eventDate, elevation, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_DeviceAlert_fields[5] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_DeviceAlert, hardwareId, hardwareId, 0),
    PB_FIELD2(  2, STRING  , REQUIRED, STATIC  , OTHER, SiteWhere_DeviceAlert, alertType, hardwareId, 0),
    PB_FIELD2(  3, STRING  , REQUIRED, STATIC  , OTHER, SiteWhere_DeviceAlert, alertMessage, alertType, 0),
    PB_FIELD2(  4, INT64   , OPTIONAL, STATIC  , OTHER, SiteWhere_DeviceAlert, eventDate, alertMessage, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_DeviceMeasurement_fields[5] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_DeviceMeasurement, hardwareId, hardwareId, 0),
    PB_FIELD2(  2, STRING  , REQUIRED, STATIC  , OTHER, SiteWhere_DeviceMeasurement, measurementId, hardwareId, 0),
    PB_FIELD2(  3, STRING  , REQUIRED, STATIC  , OTHER, SiteWhere_DeviceMeasurement, measurementValue, measurementId, 0),
    PB_FIELD2(  4, INT64   , OPTIONAL, STATIC  , OTHER, SiteWhere_DeviceMeasurement, eventDate, measurementValue, 0),
    PB_LAST_FIELD
};

const pb_field_t Device_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t Device_Header_fields[3] = {
    PB_FIELD2(  1, ENUM    , REQUIRED, STATIC  , FIRST, Device_Header, command, command, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, Device_Header, originator, command, 0),
    PB_LAST_FIELD
};

const pb_field_t Device_RegistrationAck_fields[4] = {
    PB_FIELD2(  1, ENUM    , REQUIRED, STATIC  , FIRST, Device_RegistrationAck, state, state, 0),
    PB_FIELD2(  2, ENUM    , OPTIONAL, STATIC  , OTHER, Device_RegistrationAck, errorType, state, 0),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, Device_RegistrationAck, errorMessage, errorType, 0),
    PB_LAST_FIELD
};


