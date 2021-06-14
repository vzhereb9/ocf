/*
 * Copyright(c) 2012-2021 Intel Corporation
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#ifndef __EVICTION_FIFO_H__
#define __EVICTION_FIFO_H__

#include "eviction.h"
#include "fifo_structs.h"

struct ocf_user_part;
struct ocf_request;

void evp_fifo_init_cline(struct ocf_cache *cache, ocf_cache_line_t cline);
void evp_fifo_rm_cline(struct ocf_cache *cache, ocf_cache_line_t cline);
bool evp_fifo_can_evict(struct ocf_cache *cache);
uint32_t evp_fifo_req_clines(struct ocf_request *req,
		struct ocf_user_part *part, uint32_t cline_no);
void evp_fifo_hot_cline(struct ocf_cache *cache, ocf_cache_line_t cline);
void evp_fifo_init_evp(struct ocf_cache *cache, struct ocf_user_part *part);
void evp_fifo_dirty_cline(struct ocf_cache *cache, struct ocf_user_part *part,
		uint32_t cline);
void evp_fifo_clean_cline(struct ocf_cache *cache, struct ocf_user_part *part,
		uint32_t cline);
void evp_fifo_clean(ocf_cache_t cache, struct ocf_user_part *part,
		ocf_queue_t io_queue, uint32_t count);
#endif
