# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "rosbridge_msgs: 2 messages, 0 services")

set(MSG_I_FLAGS "-Irosbridge_msgs:/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(rosbridge_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg" NAME_WE)
add_custom_target(_rosbridge_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "rosbridge_msgs" "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg" ""
)

get_filename_component(_filename "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClients.msg" NAME_WE)
add_custom_target(_rosbridge_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "rosbridge_msgs" "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClients.msg" "rosbridge_msgs/ConnectedClient"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(rosbridge_msgs
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosbridge_msgs
)
_generate_msg_cpp(rosbridge_msgs
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClients.msg"
  "${MSG_I_FLAGS}"
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosbridge_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(rosbridge_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosbridge_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(rosbridge_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(rosbridge_msgs_generate_messages rosbridge_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg" NAME_WE)
add_dependencies(rosbridge_msgs_generate_messages_cpp _rosbridge_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClients.msg" NAME_WE)
add_dependencies(rosbridge_msgs_generate_messages_cpp _rosbridge_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosbridge_msgs_gencpp)
add_dependencies(rosbridge_msgs_gencpp rosbridge_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosbridge_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(rosbridge_msgs
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rosbridge_msgs
)
_generate_msg_eus(rosbridge_msgs
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClients.msg"
  "${MSG_I_FLAGS}"
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rosbridge_msgs
)

### Generating Services

### Generating Module File
_generate_module_eus(rosbridge_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rosbridge_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(rosbridge_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(rosbridge_msgs_generate_messages rosbridge_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg" NAME_WE)
add_dependencies(rosbridge_msgs_generate_messages_eus _rosbridge_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClients.msg" NAME_WE)
add_dependencies(rosbridge_msgs_generate_messages_eus _rosbridge_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosbridge_msgs_geneus)
add_dependencies(rosbridge_msgs_geneus rosbridge_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosbridge_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(rosbridge_msgs
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosbridge_msgs
)
_generate_msg_lisp(rosbridge_msgs
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClients.msg"
  "${MSG_I_FLAGS}"
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosbridge_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(rosbridge_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosbridge_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(rosbridge_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(rosbridge_msgs_generate_messages rosbridge_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg" NAME_WE)
add_dependencies(rosbridge_msgs_generate_messages_lisp _rosbridge_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClients.msg" NAME_WE)
add_dependencies(rosbridge_msgs_generate_messages_lisp _rosbridge_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosbridge_msgs_genlisp)
add_dependencies(rosbridge_msgs_genlisp rosbridge_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosbridge_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(rosbridge_msgs
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rosbridge_msgs
)
_generate_msg_nodejs(rosbridge_msgs
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClients.msg"
  "${MSG_I_FLAGS}"
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rosbridge_msgs
)

### Generating Services

### Generating Module File
_generate_module_nodejs(rosbridge_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rosbridge_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(rosbridge_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(rosbridge_msgs_generate_messages rosbridge_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg" NAME_WE)
add_dependencies(rosbridge_msgs_generate_messages_nodejs _rosbridge_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClients.msg" NAME_WE)
add_dependencies(rosbridge_msgs_generate_messages_nodejs _rosbridge_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosbridge_msgs_gennodejs)
add_dependencies(rosbridge_msgs_gennodejs rosbridge_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosbridge_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(rosbridge_msgs
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosbridge_msgs
)
_generate_msg_py(rosbridge_msgs
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClients.msg"
  "${MSG_I_FLAGS}"
  "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosbridge_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(rosbridge_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosbridge_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(rosbridge_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(rosbridge_msgs_generate_messages rosbridge_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClient.msg" NAME_WE)
add_dependencies(rosbridge_msgs_generate_messages_py _rosbridge_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_msgs/msg/ConnectedClients.msg" NAME_WE)
add_dependencies(rosbridge_msgs_generate_messages_py _rosbridge_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosbridge_msgs_genpy)
add_dependencies(rosbridge_msgs_genpy rosbridge_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosbridge_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosbridge_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosbridge_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(rosbridge_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rosbridge_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rosbridge_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(rosbridge_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosbridge_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosbridge_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(rosbridge_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rosbridge_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rosbridge_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(rosbridge_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosbridge_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosbridge_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosbridge_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(rosbridge_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
