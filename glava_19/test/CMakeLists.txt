set(this
    vectortest
)   

set(Sources
    vectortest.cpp
)   


add_executable(${this} ${Sources})

target_link_libraries(${this} PUBLIC
    gtest_main
    vector
)

add_test(
    NAME &{this}
    COMMAND &{this}
)