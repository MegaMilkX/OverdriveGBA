#include "dma.h"

void DMAFastCopy(const void* source, void* dest, unsigned int count, unsigned int mode)
{
	REG_DMA3SAD = (unsigned int)source;
	REG_DMA3DAD = (unsigned int)dest;
	REG_DMA3CNT = count | mode;
}