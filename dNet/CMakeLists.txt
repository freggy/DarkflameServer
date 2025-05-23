set(DNET_SOURCES "AuthPackets.cpp"
	"BitStreamUtils.cpp"
	"ChatPackets.cpp"
	"ClientPackets.cpp"
	"dServer.cpp"
	"MailInfo.cpp"
	"MasterPackets.cpp"
	"PacketUtils.cpp"
	"WorldPackets.cpp"
	"ZoneInstanceManager.cpp")

add_library(dNet STATIC ${DNET_SOURCES})
target_link_libraries(dNet PRIVATE bcrypt MD5)
target_include_directories(dNet PRIVATE
	"${PROJECT_SOURCE_DIR}/dCommon"
	"${PROJECT_SOURCE_DIR}/dCommon/dEnums"

	"${PROJECT_SOURCE_DIR}/dZoneManager"

	"${PROJECT_SOURCE_DIR}/dDatabase/CDClientDatabase"
	"${PROJECT_SOURCE_DIR}/dDatabase/CDClientDatabase/CDClientTables"
	"${PROJECT_SOURCE_DIR}/dDatabase/GameDatabase"
	"${PROJECT_SOURCE_DIR}/dDatabase/GameDatabase/ITables"

	"${PROJECT_SOURCE_DIR}/dGame" # UserManager.h
	"${PROJECT_SOURCE_DIR}/dGame/dComponents"
	"${PROJECT_SOURCE_DIR}/dGame/dEntity" # via dZoneManager
	"${PROJECT_SOURCE_DIR}/dGame/dGameMessages" # GameMessages.h
	"${PROJECT_SOURCE_DIR}/dGame/dInventory" # via PossessableComponent.h
	"${PROJECT_SOURCE_DIR}/dGame/dUtilities" # via Item.h
	"${PROJECT_SOURCE_DIR}/dScripts" # transitive through components
)
