#ifndef __EMASTERMESSAGETYPE__H__
#define __EMASTERMESSAGETYPE__H__

#include <cstdint>

enum class eMasterMessageType : uint32_t {
	REQUEST_PERSISTENT_ID = 1,
	REQUEST_PERSISTENT_ID_RESPONSE,
	REQUEST_ZONE_TRANSFER,
	REQUEST_ZONE_TRANSFER_RESPONSE,
	SERVER_INFO,
	REQUEST_SESSION_KEY,
	SET_SESSION_KEY,
	SESSION_KEY_RESPONSE,
	PLAYER_ADDED,
	PLAYER_REMOVED,

	CREATE_PRIVATE_ZONE,
	REQUEST_PRIVATE_ZONE,

	WORLD_READY,
	PREP_ZONE,

	SHUTDOWN,
	SHUTDOWN_RESPONSE,
	SHUTDOWN_IMMEDIATE,

	SHUTDOWN_UNIVERSE,

	AFFIRM_TRANSFER_REQUEST,
	AFFIRM_TRANSFER_RESPONSE,

	NEW_SESSION_ALERT
};

#endif  //!__EMASTERMESSAGETYPE__H__