cmake_minimum_required(VERSION 3.16)

project(EjemploCPPQML VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(QT_QML_GENERATE_QMLLS_INI ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

qt_add_executable(appEjemploCPPQML
    Src/main.cpp
)

qt_add_qml_module(appEjemploCPPQML
    URI EjemploCPPQML
    VERSION 1.0
    QML_FILES Qml/main.qml
    QML_FILES Qml/ventanaOk.qml
    QML_FILES Qml/foldersImage.qml
    SOURCES Inc/utilities.h Src/utilities.cpp
    SOURCES Inc/objectqml.h Src/objectqml.cpp
    SOURCES Inc/cppproperty.h Src/cppproperty.cpp
    SOURCES Inc/folderslx.h Src/folderslx.cpp
)

qt_add_resources(appEjemploCPPQML "qml_resources"
    PREFIX "/"
    FILES images/goku.jpg 
    FILES images/ok.png
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appEjemploCPPQML PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appEjemploCPPQML
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE FALSE
)

target_link_libraries(appEjemploCPPQML
    PRIVATE Qt6::Quick)

include(GNUInstallDirs)
install(TARGETS appEjemploCPPQML
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
