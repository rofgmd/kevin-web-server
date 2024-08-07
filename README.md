# C++ CV System

![CMake on a single platform](https://github.com/rofgmd/kevin-web-server/actions/workflows/cmake-single-platform.yml/badge.svg)

This is a simple C++ cv system with a custom web server. It uses MySQL for data storage and is built using CMake.

**cpp选手人均一个的项目，看得我好焦虑。实习好忙，工作日晚上还得背八股文，周末才有时间进行开发，望见谅**

## Features

- Lightweight web server
- CRUD operations for cv posts
- User authentication
- Responsive design

## Prerequisites

Make sure you have the following installed:

- CMake (version 3.10 or higher)
- MySQL
- Docker (optional, for containerization)

## Build and Run

1. Clone the repository:

   ```bash
   git clone https://github.com/rofgmd/kevin-web-server.git
   ```
2. Create a build directory:

   ```bash
   mkdir build && cd build
   ```
3. Run CMake and build the project:

   ```bash
   cmake ..
   make
   ```
4. Start the server:

    ```bash
    cd ../
    ./build/my_blog_server
    ```


## Configuration

Edit the `config.json` file in the root directory to change database credentials and server settings.

## Contributing

Contributions are welcome! Please fork the repository and submit pull requests with your changes.

## License

This project is licensed under the MIT License - see the LICENSE file for details.
