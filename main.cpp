#include "config.h"
#include "webserve_control.h"

int main(int argc, char *argv[])
{
    // 需要修改的数据库信息,登录名,密码,库名
    string user = "root";
    string passwd = "Lcl1097@";
    string databasename = "yourdb";
    // 命令行解析，获取配置
    Config config;
    config.parse_arg(argc, argv);

    WebServeControl webServeControl;
    webServeControl.init(config.PORT, user, passwd, databasename, config.LOGWrite,
                         config.OPT_LINGER, config.TRIGMode, config.sql_num, config.thread_num,
                         config.close_log, config.actor_model);
    webServeControl.start();

    return 0;
}