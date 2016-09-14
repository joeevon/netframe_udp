/****************************
    FileName:netframe_accept.h
    (C) Copyright 2014 by Careland
    凯立德秘密信息
    Description:
    主要功能简述
        netframe_accept h文件
    Note:
    Author:WangZhiyong
    Create Date: 2015-05-19
*****************************/

#ifndef __CNV_AGENT_ACCEPT_H__
#define __CNV_AGENT_ACCEPT_H__

#include <netinet/in.h>
#include "netframe_io.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /*=======================================================
    功能:
        开启accept线程
    =========================================================*/
    extern int  accept_thread_start(IO_THREAD_CONTEXT *pIoThreadContexts, ACCEPT_THREAD_CONTEXT  *pAcceptContext);

    /*=======================================================
    功能:
        反初始化
    =========================================================*/
    extern void  accept_thread_uninit(ACCEPT_THREAD_CONTEXT *pAcceptContexts);

#ifdef __cplusplus
};
#endif

#endif  //__CNV_AGENT_ACCEPT_H__
