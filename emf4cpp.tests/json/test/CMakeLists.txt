

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..  ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp)

# test
add_executable(test-json0 test.cpp)
target_link_libraries(test-json0 emf4cpp-ecore emf4cpp-ecorecpp emf4cpp-json)


