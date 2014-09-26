/***************************************************************************
 *
 * Copyright (c) 2012 , Inc. All Rights Reserved
 *
 **************************************************************************/

/**
 * @file     bgcc_net_util.h
 * @brief
 * @author   liuxupeng(liuxupeng@baidu.com)
 * @version
 * @date     2013��10��11�� 18ʱ53��41��
 *
 **/
#pragma once
#ifndef _BGCC_NET_UTIL_H_
#define _BGCC_NET_UTIL_H_

#include "bgcc_common.h"

namespace bgcc {

class NetUtil {
public:
    /**
     * @brief is_valid_ipv4 �ж�ipstr�Ƿ�Ϊ�Ϸ���ipv4��ַ
     *
     * @param ipstr ipv4��ַ
     *
     * @return
     * @see
     * @note
     * @author  liuxupeng(liuxupeng@baidu.com)
     * @date    2013��10��11�� 18ʱ54��26��
     */
    static bool is_valid_ipv4(const char* ipstr);

    /**
     * @brief is_valid_port �ж�portstr�Ƿ�Ϊ�Ϸ��Ķ˿ں�
     *
     * @param portstr port�ַ���
     *
     * @return
     * @see
     * @note
     * @author  liuxupeng(liuxupeng@baidu.com)
     * @date    2013��10��11�� 18ʱ54��57��
     */
    static bool is_valid_port(const char* portstr);

    /**
     * @brief get_valid_port ���ַ���portstrת��Ϊ����ֵ
     *
     * @param portstr
     *
     * @return
     * @see
     * @note
     * @author  liuxupeng(liuxupeng@baidu.com)
     * @date    2013��10��11�� 18ʱ55��41��
     */
    static uint16_t get_valid_port(const char* portstr);
};

}

#endif // _BGCC_NET_UTIL_H_

