set(DGAME_DUTILITIES_SOURCES "BrickDatabase.cpp"
	"CheatDetection.cpp"
	"GUID.cpp"
	"Loot.cpp"
	"Mail.cpp"
	"ObjectIDManager.cpp"
	"Preconditions.cpp"
	"SlashCommandHandler.cpp"
	"VanityUtilities.cpp")

add_subdirectory(SlashCommands)

foreach(file ${DGAME_DUTILITIES_SLASHCOMMANDS})
	set(DGAME_DUTILITIES_SOURCES ${DGAME_DUTILITIES_SOURCES} "SlashCommands/${file}")
endforeach()

add_library(dUtilities OBJECT ${DGAME_DUTILITIES_SOURCES})
target_precompile_headers(dUtilities REUSE_FROM dGameBase)
target_include_directories(dUtilities PUBLIC "." "SlashCommands"
	PRIVATE
	"${PROJECT_SOURCE_DIR}/dGame/dComponents"
	"${PROJECT_SOURCE_DIR}/dGame/dInventory" # transitive via PossessableComponent.h
	"${PROJECT_SOURCE_DIR}/dGame/dGameMessages"
	"${PROJECT_SOURCE_DIR}/dGame/dBehaviors" # transitive via InventoryComponent.h
	"${PROJECT_SOURCE_DIR}/dGame/dMission" # transitive via MissionComponent.h
	"${PROJECT_SOURCE_DIR}/dGame/dEntity" # transitive via dZoneManager/Spawner.h
	"${PROJECT_SOURCE_DIR}/dZoneManager" # Mail.cpp
)
target_link_libraries(dUtilities
	PUBLIC dDatabase dPhysics
	INTERFACE dZoneManager)
