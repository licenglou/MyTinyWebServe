#ifndef  CONFIG_H
#define CONFIG_H
class Config
{

public:
    Config();
    ~Config();

    void parse_arg(int argc, char *argv[]);

    // 端口号,默认9006
    int PORT = 9006;

    // 日志写入方式，默认同步
    int LOGWrite = 0;

    // 触发组合模式,默认listenfd LT + connfd LT
    int TRIGMode = 0;

    // listenfd触发模式，默认LT
    int LISTENTrigmode = 0;

    // connfd触发模式，默认LT
    int CONNTrigmode = 0;

    // 优雅关闭链接，默认不使用
    int OPT_LINGER = 0;

    // 数据库连接池数量,默认8
    int sql_num = 8;

    // 线程池内的线程数量,默认8
    int thread_num = 8;

    // 关闭日志,默认不关闭
    int close_log = 0;

    // 并发模型,默认是proactor
    int actor_model = 0;
};
#endif // 