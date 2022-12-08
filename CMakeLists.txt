cmake_minimum_required(VERSION 3.14)

project(CthulluCharacterGenerator VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

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

include_directories(headers/utils)
link_directories(headers/utils)

set(PROJECT_SOURCES
	src/main.cc
	src/utils/d100.cc headers/utils/d100.h
	src/utils/d6.cc headers/utils/d6.h
	src/utils/d4.cc headers/utils/d4.h
	src/utils/dice_factory.cc  headers/utils/dice_factory.h 
	src/utils/d100_factory.cc  headers/utils/d100_factory.h 
	src/utils/d6_factory.cc headers/utils/d6_factory.h
	src/utils/d4_factory.cc headers/utils/d4_factory.h
	src/utils/dice_roller.cc headers/utils/dice_roller.h
	src/utils/rng.cc headers/utils/rng.h
)

add_library(CthulluCharacterGeneratorLib STATIC ${PROJECT_SOURCES})

add_executable(CthulluCharacterGenerator ${PROJECT_SOURCES})

target_link_libraries(CthulluCharacterGenerator CthulluCharacterGeneratorLib)