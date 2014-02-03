/**
 * sitewhere.h - Library for interacting with SiteWhere using Google Protocol Buffers.
 * See https://developers.google.com/protocol-buffers/ for details on protocol buffers.
 * The lightweight C implementation was generated with nanopb (http://code.google.com/p/nanopb/).
 *
 * Copyright 2013-2014 Reveal Technologies LLC.
 */
#ifndef sitewhere_h
#define sitewhere_h

#include "Arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Create a binary message that can be sent to a SiteWhere server to register a device.
 */
boolean sw_register(char* hardwareId, char* specificationToken, char* replyTo, uint8_t* buffer, size_t length);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif