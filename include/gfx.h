#ifndef _GFX_H_
#define _GFX_H_

#define REG_DISPCNT (*(unsigned int*)0x04000000)
#define SET_VIDEO_MODE(mode) REG_DISPCNT = (mode)

//Vertical refresh register
#define REG_DISPSTAT (*(volatile unsigned short*)0x04000004)

#define BG0_ENABLE 0x100
#define BG1_ENABLE 0x200
#define BG2_ENABLE 0x400
#define BG3_ENABLE 0x800

//
#define OBJ_MAP_2D 0x0
#define OBJ_MAP_1D 0x40
#define OBJ_ENABLE 0x1000

//
#define MEM_SPRITE_PAL ((unsigned short*)0x05000200)
#define MEM_SPRITE_DATA ((unsigned short*)0x06010000)
#define MEM_SPRITE_ATTR ((unsigned short*)0x07000000)

//
#define COLOR_16			0x0000
#define COLOR_256			0x2000

//
#define SIZE_8              0x0
#define SIZE_16             0x4000
#define SIZE_32             0x8000
#define SIZE_64             0xC000

typedef struct
{
	unsigned short x;
	unsigned short y;
	unsigned short attr2;
	unsigned short attr3;
} SpriteAttr;

#endif