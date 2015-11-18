#include "gfx.h"
#include "dma.h"

#include "girl.h"

int main()
{
	
	SET_VIDEO_MODE(0 
	| BG0_ENABLE 
	| BG1_ENABLE 
	| BG2_ENABLE 
	| BG3_ENABLE
	| OBJ_ENABLE
	| OBJ_MAP_1D);
	
	SpriteAttr sprite_attr;
	sprite_attr.x = COLOR_256 | 60;
	sprite_attr.y = SIZE_32 | 100;
	sprite_attr.attr2 = 0;
	sprite_attr.attr3 = 0;
	
	//((SpriteAttr*)MEM_SPRITE_ATTR)[0] = sprite_attr;
	
	DMAFastCopy(&sprite_attr, MEM_SPRITE_ATTR, sizeof(sprite_attr), DMA_16NOW);
	
	DMAFastCopy(GIRLPalette, MEM_SPRITE_PAL, sizeof(GIRLPalette), DMA_16NOW);
	
	DMAFastCopy((void*)GIRLData, MEM_SPRITE_DATA, sizeof(GIRLData), DMA_16NOW);
	
	
	while(1)
	{
		while((REG_DISPSTAT & 1));
	}
}