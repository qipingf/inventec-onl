#ifndef __PORT_INFO_CONFIG_BANYAN_8T_SKU1
#define __PORT_INFO_CONFIG_BANYAN_8T_SKU1

struct port_info_map_t banyan8T_sku1_port_info_map[] = {
    {0, QSFP56_TYPE, "port1"},
    {1, QSFP56_TYPE, "port2"},
    {2, QSFP56_TYPE, "port3"},
    {3, QSFP56_TYPE, "port4"},
    {4, QSFP56_TYPE, "port5"},
    {5, QSFP56_TYPE, "port6"},
    {6, QSFP56_TYPE, "port7"},
    {7, QSFP56_TYPE, "port8"},
    {8, QSFP56_TYPE, "port9"},
    {9, QSFP56_TYPE, "port10"},
    {10, QSFP56_TYPE, "port11"},
    {11, QSFP56_TYPE, "port12"},
    {12, QSFP56_TYPE, "port13"},
    {13, QSFP56_TYPE, "port14"},
    {14, QSFP56_TYPE, "port15"},
    {15, QSFP56_TYPE, "port16"},
    {16, QSFP56_TYPE, "port17"},
    {17, QSFP56_TYPE, "port18"},
    {18, QSFP56_TYPE, "port19"},
    {19, QSFP56_TYPE, "port20"},
    {20, QSFP56_TYPE, "port21"},
    {21, QSFP56_TYPE, "port22"},
    {22, QSFP56_TYPE, "port23"},
    {23, QSFP_DD_TYPE, "port24"},
    {24, QSFP_DD_TYPE, "port25"},
    {25, QSFP_DD_TYPE, "port26"},
    {26, QSFP_DD_TYPE, "port27"},
    {27, QSFP_DD_TYPE, "port28"},
    {28, QSFP_DD_TYPE, "port29"},
    {29, QSFP_DD_TYPE, "port30"},
    {30, QSFP_DD_TYPE, "port31"},
    {31, QSFP_DD_TYPE, "port32"},
};

struct port_info_table_t banyan8T_sku1_port_info_table = {
    .map =  banyan8T_sku1_port_info_map,
    .size = ARRAY_SIZE(banyan8T_sku1_port_info_map),
};

#endif /*__PORT_INFO_CONFIG_BANYAN_8T_SKU1*/
