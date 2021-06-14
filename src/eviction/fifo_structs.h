/*
 * Copyright(c) 2012-2021 Intel Corporation
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#ifndef __EVICTION_FIFO_STRUCTS_H__

#define __EVICTION_FIFO_STRUCTS_H__

struct fifo_eviction_policy_meta {
	uint32_t prev;
	uint32_t next;
	uint8_t hot;
} __attribute__((packed));

struct ocf_fifo_list {
	uint32_t num_nodes;
	uint32_t head;
	uint32_t tail;
	uint32_t num_hot;
	uint32_t last_hot;
};

struct fifo_eviction_policy {
	struct ocf_fifo_list clean;
	struct ocf_fifo_list dirty;
};

#define OCF_FIFO_HOT_RATIO 2

#endif
