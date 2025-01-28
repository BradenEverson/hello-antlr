cmake_minimum_required(VERSION 3.15)
project(antlr_visitor_example)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the ANTLR runtime
add_subdirectory(antlr/runtime)

# Include directories
include_directories(antlr antlr/runtime/src)

# Add the source files
add_executable(antlr_visitor_example
    main.cpp
    visitor.cpp
    antlr/ExprLexer.cpp
    antlr/ExprParser.cpp
    antlr/ExprBaseVisitor.cpp
)

# Link the ANTLR runtime
target_link_libraries(antlr_visitor_example antlr4_shared)

