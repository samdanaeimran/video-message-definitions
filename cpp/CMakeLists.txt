cmake_minimum_required(VERSION 3.20)
project(my_proto_example)

find_package(Protobuf REQUIRED)

set(PROTO_DIR ${CMAKE_SOURCE_DIR}/../protos)
file(GLOB PROTO_FILES "${PROTO_DIR}/*.proto")

protobuf_generate(
    LANGUAGE cpp
    PROTOS ${PROTO_FILES}
    PROTOC_OUT_DIR "${CMAKE_CURRENT_BINARY_DIR}/generated"
    GENERATE_EXTENSIONS .pb.h .pb.cc
)

include_directories(${CMAKE_CURRENT_BINARY_DIR}/generated)

add_executable(firmware main.cpp
    ${PROTOBUF_GENERATED_FILES}
)

target_link_libraries(firmware PRIVATE ${Protobuf_LIBRARIES})