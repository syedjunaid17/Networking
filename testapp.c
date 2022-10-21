/*
Filename:  testapp.c
Description:  This file represents the Test application to test graph topology creation
*/

/* Visit my Website for more wonderful assignments and projects :
 * https://csepracticals.wixsite.com/csepracticals
 * if above URL dont work, then try visit : https://csepracticals.com*/

#include "graph.h"
#include <stdio.h>
#include "CommandParser/libcli.h"

extern graph_t *build_first_topo();
extern graph_t *build_simple_l2_switch_topo();
extern graph_t *build_square_topo();
extern graph_t *build_linear_topo();
extern graph_t *build_dualswitch_topo();
extern graph_t *linear_3_node_topo();
extern graph_t *L2_loop_topo();
extern void nw_init_cli();

graph_t *topo = NULL;

int 
main(int argc, char **argv){

    nw_init_cli();
	show_help_handler(0, 0, MODE_UNKNOWN);
    topo = build_square_topo();
    start_shell(); 
    return 0;
}
