# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Aquifer_autogen"
  "CMakeFiles\\Aquifer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Aquifer_autogen.dir\\ParseCache.txt"
  )
endif()
