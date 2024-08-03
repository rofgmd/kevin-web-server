cmake_minimum_required(VERSION 3.10)
project(MyBlogProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加 include 文件夹
include_directories(include)
# 包含 cpp-httplib
include_directories(libs/cpp-httplib)

# 可以添加用于查找和链接的库路径
link_directories(libs)
include_directories("${PROJECT_SOURCE_DIR}/libs/cpp-httplib")

# 添加执行文件
add_executable(my_blog_server src/main.cpp src/Server.cpp src/Handler.cpp)

# 链接第三方库，如果有的话
target_link_libraries(my_blog_server pthread mysqlclient)

