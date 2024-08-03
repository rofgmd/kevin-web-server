#include <iostream>
#include "../libs/cpp-httplib/httplib.h"
using namespace std;

int main(){
    httplib::Server svr;

    // 设置静态文件的根目录
    svr.set_mount_point("/", "./assets");

    // 设置默认页面
    svr.Get("/", [](const httplib::Request& req, httplib::Response& res) {
        res.set_redirect("/index.html");
    });

    std::cout << "Server started at http://localhost:9090" << std::endl;
    svr.listen("0.0.0.0", 9090);

    return 0;
}