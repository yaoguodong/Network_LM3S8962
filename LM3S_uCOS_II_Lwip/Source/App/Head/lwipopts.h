/****************************************Copyright (c)****************************************************
**                               Guangzhou ZHIYUAN electronics Co.,LTD.
**                                     
**                                 http://www.embedtools.com
**
**--------------File Info---------------------------------------------------------------------------------
** File Name:              lwiports.h
** Last modified Date:     2008.8.20
** Last Version:            v1.0
** Description:            Configuration file for lwIP
** 
**--------------------------------------------------------------------------------------------------------
** Created By:              任海波
** Created date:            2008.8.20
** Version:                 v1.0
** Descriptions:            The original version 初始版本
**
*********************************************************************************************************/

#ifndef __LWIPOPTS_H__
#define __LWIPOPTS_H__

/*********************************************************************************************************
**-------------------------------系统平台设置参数----------------------------
*********************************************************************************************************/
#define   SYS_LIGHTWEIGHT_PROT          1      /* 是否允许在任务中开启临界区保护功能，这会在buffer分配或*/
                                               /* 释放，内存分配会释放时保护临界区.设置为1，开启；反之，*/
                                               /* 关闭。默认为0  */    
#define   NO_SYS                        0      /* 设置系统是否应用在操作系统下。为0，在操作系统下，反之，*/
                                               /* 无操作系统.默认为0 */
//#define   MEMCPY                        0      /* 该宏用来定义我们是否需要C语言标准库函数memcpy(),如果有更*/
                                               /* 有效的函数，该宏可以忽略.注意：这里只有是否忽略该宏，定 */
                                               /* 义其为0或1是没有意义的 */
//#define    SMEMCPY                       0    /* 通上面的宏意义一样，一般我们不要定义      */


/*********************************************************************************************************
**-------------------------------内存管理设置参数：Memory options----------------------------
*********************************************************************************************************/
#define MEM_LIBC_MALLOC                 0       /* 是否使用标准C语言的库函数malloc/free/realloc，使用它 */
                                                /* 可以减少代码的大小。设置为1，表示使用；反之不使用， */
                                                /* 默认为0，不使用 */

#define MEM_ALIGNMENT                   4       /* 设置CPU的对齐方式。设置为4，表示4字节对齐；设置为2，*/
                                                /* 表示2字节对齐。默认为1*/

#define MEM_SIZE                        (4*1024)/* 设置堆内存的大小。如果程序需要发送大量需要被拷贝的数据*/
                                                /* 则该值应该设置的大一些。默认为1600*/

#define MEMP_OVERFLOW_CHECK             0       /* 是否使能堆内存溢出检查。设置为0，不进行检查；设置为1；*/
                                                /* 当每次释放堆元素的时候进行检查；设置为2时，当每次调用*/
                                                /* 函数memp_malloc() or memp_free()的时候都进行检查，  */
                                                /* 默认为0 */

#define MEMP_SANITY_CHECK               0       /* 设置为1，表示在每次调用函数memp_free()后，进行一次正常*/
                                                /* 的检查，以确保链表队列没有循环 */

/*********************************************************************************************************
**-------------------------------设置内部内存池大小：Internal Memory Pool Sizes---------------------------
*********************************************************************************************************/
#define MEMP_NUM_PBUF                   16    /* 堆内存pbufs的数目(使用于PBUF_ROM和PBUF_REF)。如果应用程序*/
                                              /* 需要从ROM中发送大量的数据的话，该值应设置大一点，默认为16*/

#define MEMP_NUM_RAW_PCB                4     /* 连接的raw PCB的数目(要求LWIP_RAW参数使能)。 默认为4*/

#define MEMP_NUM_UDP_PCB                4     /* UDP PCB连接的数目(要求参数LWIP_UDP使能).默认为4*/

#define MEMP_NUM_TCP_PCB                5     /* 同时建立激活的TCP连接的数目(要求参数LWIP_TCP使能).默认为5*/

#define MEMP_NUM_TCP_PCB_LISTEN         8     /* 能够监听的TCP连接数目(要求参数LWIP_TCP使能).默认为8*/

#define MEMP_NUM_TCP_SEG                16    /* 能够同时存在的TCP段队列的数目(要求参数LWIP_TCP使能)。默认为16*/

//#define MEMP_NUM_REASSDATA              5     /* 队列中能够同时重新组装的IP数据包的数目，默认为5 */

//#define MEMP_NUM_ARP_QUEUE              30    /* */

//#define MEMP_NUM_IGMP_GROUP             8    /* */

#define MEMP_NUM_SYS_TIMEOUT            3    /* 能够同时激活的timeout的个数(要求NO_SYS==0)。默认为3 */

#define MEMP_NUM_NETBUF                 2    /* netbufs结构的数目，仅当使用sequential API的时候需要。默认为2 */

#define MEMP_NUM_NETCONN                4   /* netconns结构的数目，仅当使用sequential API的时候需要。默认为4*/

//#define MEMP_NUM_API_MSG                8   /* tcpip_msg结构的数目，它用于callback/timeout API的通信(仅当使用 */
                                            /* tcpip.c的时候需要 )。默认为8*/

//#define MEMP_NUM_TCPIP_MSG              8  /*  tcpip_msg结构的数目，它主要用于数据包接收(仅当使用tcpip.c的时 */
                                            /* 候需要 )。默认为8 */


/*********************************************************************************************************
**-------------------------------ARP参数配置：ARP options----------------------------
*********************************************************************************************************/
#define ARP_TABLE_SIZE                  10  /* 激活的MAC-IP地址对存储区的数目 */

#define ARP_QUEUEING                    1  /* 设置为1表示在硬件地址解析期间，将发送数据包放入到队列中 */

//*****************************************************************************
//
// ---------- Pbuf options ----------
//
//*****************************************************************************
#define PBUF_POOL_SIZE                  32      // default is 16
#define PBUF_POOL_BUFSIZE               256     // default is 128
#define PBUF_LINK_HLEN                  16      // default is 14
#define ETH_PAD_SIZE                    2       // default is 0



/*********************************************************************************************************
**-------------------------------IP参数配置：IP options----------------------------
*********************************************************************************************************/
//#define IP_FORWARD                      0
//#define IP_OPTIONS                      1
#define IP_REASSEMBLY                   0       // default is 1
#define IP_FRAG                         0       // default is 1


/*********************************************************************************************************
**-------------------------------ICMP参数配置：ICMP options----------------------------
*********************************************************************************************************/
#define ICMP_TTL                        64


/*********************************************************************************************************
**-------------------------------RAW API参数配置：RAW options----------------------------
*********************************************************************************************************/
//#define LWIP_RAW                        1
//#define RAW_TTL                        255

/*********************************************************************************************************
**-------------------------------DHCP参数配置：DHCP options----------------------------
*********************************************************************************************************/
#define LWIP_DHCP                         0       // default is 0
//#define DHCP_DOES_ARP_CHECK             1
#define DHCP_HOST_NAME                  "fury-dev"

/*********************************************************************************************************
**-------------------------------UDP参数配置：UDP options----------------------------
*********************************************************************************************************/
#define LWIP_UDP                        0
#define UDP_TTL                         128

/*********************************************************************************************************
**-------------------------------TCP参数配置：TCP options----------------------------
*********************************************************************************************************/
#define LWIP_TCP                        1
#define TCP_TTL                         256
#define TCP_WND                         4096    // default is 2048
#define TCP_MAXRTX                      12
#define TCP_SYNMAXRTX                   6
#define TCP_QUEUE_OOSEQ                 1
#define TCP_MSS                         1500    // default is 128
#define TCP_SND_BUF                     (6*TCP_MSS)
                                                // default is 256
//#define TCP_SND_QUEUELEN                (4 * TCP_SND_BUF/TCP_MSS)
//#define TCP_SNDLOWAT                    (TCP_SND_BUF/2)
//#define LWIP_HAVE_LOOPIF                0


/*********************************************************************************************************
**-------------------------------任务参数配置：Task options----------------------------
*********************************************************************************************************/
#define TCPIP_THREAD_PRIO               1
//#define SLIPIF_THREAD_PRIO              1
//#define PPP_THREAD_PRIO                 1
//#define DEFAULT_THREAD_PRIO             1

/*********************************************************************************************************
**-------------------------------Sequential layer options----------------------------
*********************************************************************************************************/
#define LWIP_NETCONN                   1


/*********************************************************************************************************
**-------------------------------Socket参数配置：Socket options----------------------------
*********************************************************************************************************/
#define LWIP_SOCKET                     0
#define LWIP_COMPAT_SOCKETS             0


/*********************************************************************************************************
**-------------------------------Statistics options----------------------------
*********************************************************************************************************/
//#define LWIP_STATS                      1
//#define LWIP_STATS_DISPLAY              0
//#define LINK_STATS                      1
//#define IP_STATS                        1
//#define IPFRAG_STATS                    1
//#define ICMP_STATS                      1
//#define UDP_STATS                       1
//#define TCP_STATS                       1
//#define MEM_STATS                       1
//#define MEMP_STATS                      1
//#define PBUF_STATS                      1
//#define SYS_STATS                       1
//#define RAW_STATS                       0


/*********************************************************************************************************
**-------------------------------PPP options----------------------------
*********************************************************************************************************/
//#define PPP_SUPPORT                     0
//#define PAP_SUPPORT                     0
//#define CHAP_SUPPORT                    0
//#define VJ_SUPPORT                      0
//#define MD5_SUPPORT                     0

/*********************************************************************************************************
**-------------------------------checksum options----------------------------
*********************************************************************************************************/
//#define CHECKSUM_GEN_IP                 1
//#define CHECKSUM_GEN_UDP                1
//#define CHECKSUM_GEN_TCP                1
//#define CHECKSUM_CHECK_IP               1
//#define CHECKSUM_CHECK_UDP              1
//#define CHECKSUM_CHECK_TCP              1


/*********************************************************************************************************
**-------------------------------调试参数配置：Debugging options----------------------------
*********************************************************************************************************/
//#define DBG_TYPES_ON                    0
//#define ETHARP_DEBUG                    DBG_OFF
//#define NETIF_DEBUG                     DBG_OFF
//#define PBUF_DEBUG                      DBG_OFF
//#define API_LIB_DEBUG                   DBG_OFF
//#define API_MSG_DEBUG                   DBG_OFF
//#define SOCKETS_DEBUG                   DBG_OFF
//#define ICMP_DEBUG                      DBG_OFF
//#define INET_DEBUG                      DBG_OFF
//#define IP_DEBUG                        DBG_OFF
//#define IP_REASS_DEBUG                  DBG_OFF
//#define RAW_DEBUG                       DBG_OFF
//#define MEM_DEBUG                       DBG_OFF
//#define MEMP_DEBUG                      DBG_OFF
//#define SYS_DEBUG                       DBG_OFF
//#define TCP_DEBUG                       DBG_OFF
//#define TCP_INPUT_DEBUG                 DBG_OFF
//#define TCP_FR_DEBUG                    DBG_OFF
//#define TCP_RTO_DEBUG                   DBG_OFF
//#define TCP_REXMIT_DEBUG                DBG_OFF
//#define TCP_CWND_DEBUG                  DBG_OFF
//#define TCP_WND_DEBUG                   DBG_OFF
//#define TCP_OUTPUT_DEBUG                DBG_OFF
//#define TCP_RST_DEBUG                   DBG_OFF
//#define TCP_QLEN_DEBUG                  DBG_OFF
//#define UDP_DEBUG                       DBG_OFF
//#define TCPIP_DEBUG                     DBG_OFF
//#define PPP_DEBUG                       DBG_OFF
//#define SLIP_DEBUG                      DBG_OFF
//#define DHCP_DEBUG                      DBG_OFF
//#define DBG_MIN_LEVEL                   DBG_LEVEL_OFF


#endif /* __LWIPOPTS_H__ */

