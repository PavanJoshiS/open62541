#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "open62541::open62541" for configuration "Release"
set_property(TARGET open62541::open62541 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(open62541::open62541 PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/open62541.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/open62541.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS open62541::open62541 )
list(APPEND _IMPORT_CHECK_FILES_FOR_open62541::open62541 "${_IMPORT_PREFIX}/lib/open62541.lib" "${_IMPORT_PREFIX}/bin/open62541.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
