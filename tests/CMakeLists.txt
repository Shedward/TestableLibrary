find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

file(GLOB TEST_FILES *_tests.cpp)

foreach(TEST_FILE ${TEST_FILES})
        get_filename_component(TEST_NAME ${TEST_FILE} NAME_WE)
	add_executable(${TEST_NAME} ${TEST_FILE})
	target_link_libraries(${TEST_NAME} ${GTEST_BOTH_LIBRARIES})
	target_link_libraries(${TEST_NAME} Library)
        add_test(${TEST_NAME}_build "${CMAKE_COMMAND}" --build ${CMAKE_BINARY_DIR} --target ${TEST_NAME})
	add_test(${TEST_NAME} ${TEST_NAME})
        set_tests_properties(${TEST_NAME} PROPERTIES DEPENDS ${TEST_NAME}_build)
endforeach(TEST_FILE)
