/**
 * DeviceEvents.h - Device events that may be sent to SiteWhere.
 * Copyright 2013 Reveal Technologies LLC.
 */
#ifndef DeviceEvents_h
#define DeviceEvents_h

#include <Time.h>

/**
 * Common base class for SiteWhere device events.
 */
class DeviceEvent {
public:
	DeviceEvent(time_t eventDate);
	time_t getEventDate();
	virtual void getJSON(char* message) = 0;
protected:
	time_t _eventDate;
};

/**
 * Class for SiteWhere device alert data.
 */
class DeviceAlert: protected DeviceEvent {
public:
	DeviceAlert(char* type, char* message, time_t eventDate);
	char* getAlertType();
	char* getAlertMessage();
	void getJSON(char* message);
protected:
	char* _alertType;
	char* _alertMessage;
};

/**
 * Class for SiteWhere device location data.
 */
class DeviceLocation: protected DeviceEvent {
public:
	DeviceLocation(double latitude, double longitude, time_t eventDate);
	DeviceLocation(double latitude, double longitude, double elevation, time_t eventDate);
	double getLatitude();
	double getLongitude();
	double getElevation();
	void getJSON(char* message);
protected:
	double _latitude;
	double _longitude;
	double _elevation;
};

#endif
