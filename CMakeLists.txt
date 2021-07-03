cmake_minimum_required(VERSION 3.0)

project(PROTOBUFEXAMPLE)

add_definitions(-Wall -Wextra -Wno-unused-function)
add_definitions(-std=c++11 -fPIC)
# to avoid no return error(ToDo)
add_definitions(-Werror=return-type)

find_package(Protobuf REQUIRED)
if (${CMAKE_VERSION} VERSION_LESS "3.6.0")
    set(Protobuf_LIBRARIES ${PROTOBUF_LIBRARIES})
    set(Protobuf_INCLUDE_DIRS ${PROTOBUF_INCLUDE_DIRS})
endif()

message("Protobuf_LIBRARIES; ${Protobuf_LIBRARIES}, Protobuf_INCLUDE_DIRS: ${Protobuf_INCLUDE_DIRS}")

include_directories(${Protobuf_INCLUDE_DIRS})
link_directories(${Protobuf_LIBRARIES}/..)

file(GLOB SaveExample_SRC "saveMessage.cc", "addressBook.pb.cc")
file(GLOB ReadExample_SRC "readMessage.cc", "addressBook.pb.cc")

file(GLOB SavePerson_SRC "saveMessagePerson.cc", "Person.pb.cc")
file(GLOB ReadPerson_SRC "readMessagePerson.cc", "Person.pb.cc")

add_executable(SaveExample ${SaveExample_SRC})
add_executable(ReadExample ${ReadExample_SRC})
add_executable(SavePerson ${SavePerson_SRC})
add_executable(ReadPerson ${ReadPerson_SRC})
target_link_libraries(SaveExample -lprotobuf)
target_link_libraries(ReadExample -lprotobuf)
target_link_libraries(SavePerson -lprotobuf)
target_link_libraries(ReadPerson -lprotobuf)