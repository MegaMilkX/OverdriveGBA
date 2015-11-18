#ifndef _DMA_H_
#define _DMA_H_

#define REG_DMA3SAD (*(volatile unsigned int*)0x040000D4)
#define REG_DMA3DAD (*(volatile unsigned int*)0x040000D8)
#define REG_DMA3CNT (*(volatile unsigned int*)0x040000DC)
#define DMA_ENABLE 0x80000000
#define DMA_TIMING_IMMEDIATE 0x0
#define DMA_16 0x0
#define DMA_32 0x04000000
#define DMA_32NOW (DMA_ENABLE | DMA_TIMING_IMMEDIATE | DMA_32)
#define DMA_16NOW (DMA_ENABLE | DMA_TIMING_IMMEDIATE | DMA_16)

void DMAFastCopy(const void* source, void* dest, unsigned int count, unsigned int mode);

#endif