#ifndef JHA_GATE_H__
#define JHA_GATE_H__

#include "algo-gate-api.h"
#include <stdint.h>


#if defined(FOUR_WAY) && defined(__AVX2__) && !defined(NO_AES_NI)
  #define JHA_4WAY
#endif

//#if defined JHA_4WAY
//void jha_hash_4way( void *state, const void *input );

//int scanhash_jha_4way( int thr_id, struct work *work, uint32_t max_nonce,
//                       uint64_t *hashes_done );
//#else

void jha_hash( void *state, const void *input );

int scanhash_jha( int thr_id, struct work *work, uint32_t max_nonce,
                     uint64_t *hashes_done );

//#endif

#endif

