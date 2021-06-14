/*
 * Copyright(c) 2012-2021 Intel Corporation
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#ifndef __EVICTION_lfu_no_balance_STRUCTS_H__

#define __EVICTION_lfu_no_balance_STRUCTS_H__

struct lfu_no_balance_eviction_policy_meta {
	uint32_t prev;
	uint32_t next;
	uint32_t num_requests;
} __attribute__((packed));

struct ocf_lfu_no_balance_list {
	uint32_t num_nodes;
	uint32_t head;
	uint32_t tail;
};

struct lfu_no_balance_eviction_policy {
	struct ocf_lfu_no_balance_list clean;
	struct ocf_lfu_no_balance_list dirty;
};

#define OCF_lfu_no_balance_HOT_RATIO 2

#endif
