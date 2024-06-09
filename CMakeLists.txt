cmake_minimum_required(VERSION 3.5)

project(MyQtApp)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(MyQtApp 
    main.cpp 
    View/MainWindow.cpp 
    View/FileTabWidget.cpp
    View/NumberedLineArea.cpp 
    View/TextEditor.cpp
    )

target_link_libraries(MyQtApp Qt5::Widgets)
