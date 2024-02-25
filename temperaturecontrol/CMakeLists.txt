set(temperaturecontrol_SRCS
    temperaturecontrol.h
    temperaturecontrol.cpp
)

# Declare the library
add_library(temperaturecontrol STATIC
    ${temperaturecontrol_SRCS}
)

# Specify here the include directories exported
# by this library
target_include_directories(temperaturecontrol PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
