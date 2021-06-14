/*
 * Copyright(c) 2012-2021 Intel Corporation
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#ifndef __EVICTION_LFU_H__
#define __EVICTION_LFU_H__

#include "eviction.h"
#include "lfu_structs.h"

struct ocf_user_part;
struct ocf_request;

void evp_lfu_init_cline(struct ocf_cache *cache, ocf_cache_line_t cline);
void evp_lfu_rm_cline(struct ocf_cache *cache, ocf_cache_line_t cline);
bool evp_lfu_can_evict(struct ocf_cache *cache);
uint32_t evp_lfu_req_clines(struct ocf_request *req,
		struct ocf_user_part *part, uint32_t cline_no);
void evp_lfu_hot_cline(struct ocf_cache *cache, ocf_cache_line_t cline);
void evp_lfu_init_evp(struct ocf_cache *cache, struct ocf_user_part *part);
void evp_lfu_dirty_cline(struct ocf_cache *cache, struct ocf_user_part *part,
		uint32_t cline);
void evp_lfu_clean_cline(struct ocf_cache *cache, struct ocf_user_part *part,
		uint32_t cline);
void evp_lfu_clean(ocf_cache_t cache, struct ocf_user_part *part,
		ocf_queue_t io_queue, uint32_t count);
#endif
