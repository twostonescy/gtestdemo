message(STATUS "build math")
set(MODULE_MATH   my_math)

aux_source_directory(. MATH_SOURCE)

add_library(${MODULE_MATH}  ${MATH_SOURCE})