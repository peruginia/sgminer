#ifndef PASCALSOLO_H
#define PASCALSOLO_H

#include "miner.h"

extern int pascalsolo_test(unsigned char *pdata, const unsigned char *ptarget, uint32_t nonce);
extern void pascalsolo_prepare_work(dev_blk_ctx *blk, uint32_t *state, uint32_t *pdata);
extern void pascalsolo_midstate(struct work *work);
extern void pascalsolo_regenhash(struct work *work);

#endif /* PASCAL_H */