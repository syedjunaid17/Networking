/*
Filename:  tcpconst.h
Description:  This file defines all standard Constants used by TCPIP stack
*/

#ifndef __TCPCONST__
#define __TCPCONST__

/*Specified in ethernet_hdr->type*/
#define ARP_BROAD_REQ   1
#define ARP_REPLY       2
#define ARP_MSG         806
#define BROADCAST_MAC   0xFFFFFFFFFFFF
#define ETH_IP          0x0800
#define ICMP_PRO        1
#define ICMP_ECHO_REQ   8
#define ICMP_ECHO_REP   0
#define MTCP            20
#define USERAPP1        21
#define VLAN_8021Q_PROTO    0x8100
#define IP_IN_IP        4
#endif /* __TCPCONST__ */
