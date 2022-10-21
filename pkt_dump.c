/*
 Filename:  pkt_dump.c
 Description:  This file implements the routine to dump packet content field by field
*/

#include "Layer2/layer2.h"
#include "tcpconst.h"
#include <stdio.h>

/* Implement below function to print all necessary headers
 * of the packet including : 
 * Ethernet Hdr
 * ARP hdr
 * IP Hdr
 * For Unknown payload type (application data) , just
 * print the offset and size of payload in the frame.
 * 
 * We shall be using below API to verify our code changes
 * are correct or not for catching early bugs !!
 * */

void
pkt_dump(ethernet_hdr_t *ethernet_hdr, 
         unsigned int pkt_size){

    /*Assignment*/    
}

