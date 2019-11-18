set(PROJECT_TESTS_NAME communicator)
message("communicator src")

add_executable(${PROJECT_TESTS_NAME}
    main.cpp
    )

add_dependencies(${PROJECT_TESTS_NAME} gmock_main)

target_link_libraries(${PROJECT_TESTS_NAME}
    gmock_main
    gmock)



