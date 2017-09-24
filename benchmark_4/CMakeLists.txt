cmake_minimum_required (VERSION 2.6)

project (benchmark_4)

add_compile_options("-std=c++17")
add_compile_options("-pedantic")
add_compile_options("-Wall")
add_compile_options("-Wextra")

set( SOURCES
	 ${SOURCES}
	  src/benchmark_4.cpp
	  src/SystemInfo.cpp
	)
	
add_executable(benchmark_4 ${SOURCES})
