cmake_minimum_required(VERSION 3.5)
project(simpletreemodel)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5Widgets)


set(SOURCE_FILES main.cpp treeitem.cpp treeitem.h treemodel.cpp treemodel.h simpletreemodel.qrc mytreeview.cpp mytreeview.h)
add_executable(simpletreemodel ${SOURCE_FILES})

target_link_libraries(simpletreemodel Qt5::Widgets)