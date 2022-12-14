cmake_minimum_required(VERSION 3.14)

project(CthulluCharacterGenerator VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

########################## Adding Google Test ###########################

include(FetchContent)
FetchContent_Declare(googletest
	GIT_REPOSITORY	https://github.com/google/googletest
	GIT_TAG release-1.12.1
)
FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
	FetchContent_Populate(googletest)
	add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BUILD_DIR})
endif()

#########################################################################

set(INCLUDE_SOURCES
	headers/utils	
	headers/characters
	headers/system
)

include_directories(${INCLUDE_SOURCES})
link_directories(${INCLUDE_SOURCES})

set(PROJECT_SOURCES
	src/main.cc

	src/utils/d100.cc headers/utils/d100.h
	src/utils/d10.cc headers/utils/d10.h
	src/utils/d6.cc headers/utils/d6.h
	src/utils/d4.cc headers/utils/d4.h

	src/utils/dice_factory.cc  headers/utils/dice_factory.h 
	src/utils/d100_factory.cc  headers/utils/d100_factory.h 
	src/utils/d10_factory.cc  headers/utils/d10_factory.h 
	src/utils/d6_factory.cc headers/utils/d6_factory.h
	src/utils/d4_factory.cc headers/utils/d4_factory.h

	src/utils/dice_roller.cc headers/utils/dice_roller.h
	src/utils/rng.cc headers/utils/rng.h

	src/characters/character.cc headers/characters/character.h
	src/characters/investigator.cc headers/characters/investigator.h

	src/characters/investigator_teen.cc headers/characters/investigator_teen.h
	src/characters/investigator_adult.cc headers/characters/investigator_adult.h
	src/characters/investigator_forties.cc headers/characters/investigator_forties.h
	src/characters/investigator_fifties.cc headers/characters/investigator_fifties.h
	src/characters/investigator_seventies.cc headers/characters/investigator_seventies.h
	src/characters/investigator_sixties.cc headers/characters/investigator_sixties.h
	src/characters/investigator_eighties.cc headers/characters/investigator_eighties.h

	src/characters/investigator_teen_factory.cc headers/characters/investigator_teen_factory.h
	src/characters/investigator_adult_factory.cc headers/characters/investigator_adult_factory.h
	src/characters/investigator_forties_factory.cc headers/characters/investigator_forties_factory.h
	src/characters/investigator_fifties_factory.cc headers/characters/investigator_fifties_factory.h
	src/characters/investigator_sixties_factory.cc headers/characters/investigator_sixties_factory.h
	src/characters/investigator_seventies_factory.cc headers/characters/investigator_seventies_factory.h
	src/characters/investigator_eighties_factory.cc headers/characters/investigator_eighties_factory.h
	src/characters/concrete_investigator_factory.cc headers/characters/concrete_investigator_factory.h

	headers/characters/investigator_factory.h
	src/system/combat.cc headers/system/combat.h
)

add_library(CthulluCharacterGeneratorLib STATIC ${PROJECT_SOURCES})

add_executable(CthulluCharacterGenerator ${PROJECT_SOURCES})

target_link_libraries(CthulluCharacterGenerator CthulluCharacterGeneratorLib)


########################## Google Test libs bin and linking ###########################

set(TEST_SOURCES
	tests/test.cc
	tests/utils/dice_roller_test.cc
	tests/characters/investigator_test.cc
	tests/characters/factory_test.cc
)

add_executable(testRunner ${TEST_SOURCES})
target_link_libraries(testRunner CthulluCharacterGeneratorLib gtest_main gmock_main)
