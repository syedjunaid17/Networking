/*
Filename:  layer4.c
Description:  This file implemets the routines for Transport Layer
 */

#include "graph.h"

/*Public APIs to be used by Lower layers of TCP/IP Stack to promote
 * the pkt to Layer 4*/
void
promote_pkt_to_layer4(node_t *node, interface_t *recv_intf,
                      char *l4_hdr, unsigned int pkt_size,
                      int L4_protocol_number){ /*= TCP/UDP or what */


}

/* Public APIs to be used by Higher/Application layers of TCP/IP Stack to demote
* the pkt to Layer 4*/
void
demote_pkt_to_layer4(node_t *node,
        char *pkt, unsigned int pkt_size,
        int L4_protocol_number){  /*L5 (The application) need to tell L4-layer which transport layer protcocol to be used - UDP or TCP or other*/

}
