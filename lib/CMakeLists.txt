file(GLOB Library_SRC *.cpp)
file(GLOB Library_H *.h)
add_library(Library STATIC ${Library_SRC} ${Library_H})
