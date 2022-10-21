/*
Filename:  utils.h
Description:  This file contains the decalaration of all enumerations used in this file
*/
/* Visit my Website for more wonderful assignments and projects :
 * https://csepracticals.wixsite.com/csepracticals
 * if above URL dont work, then try visit : https://csepracticals.com*/

#ifndef __UTILS__
#define __UTILS__

#include <stdint.h>

typedef enum{

  FALSE,
  TRUE 
} bool_t;


#define IS_BIT_SET(n, pos)      ((n & (1 << (pos))) != 0)
#define TOGGLE_BIT(n, pos)      (n = n ^ (1 << (pos)))
#define COMPLEMENT(num)         (num = num ^ 0xFFFFFFFF)
#define UNSET_BIT(n, pos)       (n = n & ((1 << pos) ^ 0xFFFFFFFF))
#define SET_BIT(n, pos)         (n = n | 1 << pos)

void
apply_mask(char *prefix, char mask, char *str_prefix);

void
layer2_fill_with_broadcast_mac(char *mac_array);

#define IS_MAC_BROADCAST_ADDR(mac)   \
    (mac[0] == 0xFF  &&  mac[1] == 0xFF && mac[2] == 0xFF && \
     mac[3] == 0xFF  &&  mac[4] == 0xFF && mac[5] == 0xFF)

char *
tcp_ip_covert_ip_n_to_p(uint32_t ip_addr,
        char *output_buffer);

uint32_t
tcp_ip_covert_ip_p_to_n(char *ip_addr);


#endif /* __UTILS__ */
