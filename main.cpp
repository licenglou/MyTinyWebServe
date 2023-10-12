#include "config.h"

int main(int argc, char *argv[])
{
    // 命令行解析，获取配置
    Config config;
    config.parse_arg(argc, argv);

    return 0;
}