add_library(nokta nokta.cpp)


add_executable(bin_main main.cpp)

target_link_libraries(bin_main nokta) 

