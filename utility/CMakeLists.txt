message(STATUS "build utility")
set(MODULE_UTILITY     utility)

aux_source_directory(. UTILITY_SOURCE)

add_library(${MODULE_UTILITY} SHARED ${UTILITY_SOURCE})