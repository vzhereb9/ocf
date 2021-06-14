/*
 * Copyright(c) 2012-2021 Intel Corporation
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#ifndef __EVICTION_LRU_NO_BALANCE_STRUCTS_H__

#define __EVICTION_LRU_NO_BALANCE_STRUCTS_H__

struct lru_no_balance_eviction_policy_meta {
    /* LRU NO_BALANCE pointers 2*4=8 bytes */
	uint32_t prev;
	uint32_t next;
} __attribute__((packed));

struct ocf_lru_no_balance_list {
	uint32_t num_nodes;
	uint32_t head;
	uint32_t tail;
};

struct lru_no_balance_eviction_policy {
    struct ocf_lru_no_balance_list clean;
    struct ocf_lru_no_balance_list dirty;
};

#endif
