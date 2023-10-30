#include "webserve_control.h"
#include "./log/log.h"
WebServeControl::WebServeControl()
{
}

WebServeControl::~WebServeControl()
{
}

void WebServeControl::init(int port, string user, string passWord, string databaseName, int log_write,
                           int opt_linger, int trigmode, int sql_num, int thread_num, int close_log, int actor_model)
{
    m_port = port;
    // m_user = user;
    // m_passWord = passWord;
    // m_databaseName = databaseName;
    // m_sql_num = sql_num;
    // m_thread_num = thread_num;
    m_log_write = log_write;
    // m_OPT_LINGER = opt_linger;
    // m_TRIGMode = trigmode;
    m_close_log = close_log;
    m_actormodel = actor_model;
}

void WebServeControl::start()
{
}

void WebServeControl::log_Init()
{
    if (0 == m_close_log)
    {
        // 初始化日志
        if (1 == m_log_write)
            Log::get_instance()->init("./ServerLog", m_close_log, 2000, 800000, 800);
        else
            Log::get_instance()->init("./ServerLog", m_close_log, 2000, 800000, 0);
    }
}
