#include "dw_ddr.h"
in5cb256m8bn_cg_freq400_cl6_bl8()
{
// configuration for in5cb256m8bn_cg, frequency is 400, 
// cl is 6, bl is 8, cs is 2 
REG_WRITE(DDR_BASE_ADDR + 0x0, 0x00000600);
REG_WRITE(DDR_BASE_ADDR + 0x8, 0x00000004);
REG_WRITE(DDR_BASE_ADDR + 0x18, 0x00013880);
REG_WRITE(DDR_BASE_ADDR + 0x1c, 0x00030d40);
REG_WRITE(DDR_BASE_ADDR + 0x20, 0x0404050c);
REG_WRITE(DDR_BASE_ADDR + 0x24, 0x040f1404);
REG_WRITE(DDR_BASE_ADDR + 0x28, 0x0c040406);
REG_WRITE(DDR_BASE_ADDR + 0x2c, 0x03006d60);
REG_WRITE(DDR_BASE_ADDR + 0x30, 0x01000004);
REG_WRITE(DDR_BASE_ADDR + 0x34, 0x0c060601);
REG_WRITE(DDR_BASE_ADDR + 0x38, 0x060c0300);
REG_WRITE(DDR_BASE_ADDR + 0x40, 0x00004001);
REG_WRITE(DDR_BASE_ADDR + 0x44, 0x00000c28);
REG_WRITE(DDR_BASE_ADDR + 0x48, 0x000a0003);
REG_WRITE(DDR_BASE_ADDR + 0x4c, 0x00440200);
REG_WRITE(DDR_BASE_ADDR + 0x50, 0x00010000);
REG_WRITE(DDR_BASE_ADDR + 0x54, 0x00050500);
REG_WRITE(DDR_BASE_ADDR + 0x78, 0x00460420);
REG_WRITE(DDR_BASE_ADDR + 0x84, 0x00042000);
REG_WRITE(DDR_BASE_ADDR + 0x88, 0x00000046);
REG_WRITE(DDR_BASE_ADDR + 0x94, 0x01010000);
REG_WRITE(DDR_BASE_ADDR + 0xa4, 0x01000200);
REG_WRITE(DDR_BASE_ADDR + 0xa8, 0x02000040);
REG_WRITE(DDR_BASE_ADDR + 0xb0, 0x00000100);
REG_WRITE(DDR_BASE_ADDR + 0xb4, 0xffff0a00);
REG_WRITE(DDR_BASE_ADDR + 0xb8, 0x01010101);
REG_WRITE(DDR_BASE_ADDR + 0xbc, 0x01010101);
REG_WRITE(DDR_BASE_ADDR + 0xc0, 0x00000303);
REG_WRITE(DDR_BASE_ADDR + 0xc4, 0x00000c03);
REG_WRITE(DDR_BASE_ADDR + 0xcc, 0x00000100);
REG_WRITE(DDR_BASE_ADDR + 0x104, 0x02010102);
REG_WRITE(DDR_BASE_ADDR + 0x108, 0x02020001);
REG_WRITE(DDR_BASE_ADDR + 0x10c, 0x01010201);
REG_WRITE(DDR_BASE_ADDR + 0x110, 0x00000200);
REG_WRITE(DDR_BASE_ADDR + 0x114, 0x00000101);
REG_WRITE(DDR_BASE_ADDR + 0x120, 0x281a0000);
REG_WRITE(DDR_BASE_ADDR + 0x12c, 0x00010001);
REG_WRITE(DDR_BASE_ADDR + 0x130, 0x00010001);
REG_WRITE(DDR_BASE_ADDR + 0x144, 0x00212100);
REG_WRITE(DDR_BASE_ADDR + 0x148, 0x00000001);
REG_WRITE(DDR_BASE_ADDR + 0x154, 0x00012121);
REG_WRITE(DDR_BASE_ADDR + 0x160, 0x00212100);
REG_WRITE(DDR_BASE_ADDR + 0x164, 0x00000001);
REG_WRITE(DDR_BASE_ADDR + 0x170, 0x00012121);
REG_WRITE(DDR_BASE_ADDR + 0x174, 0x08085555);
REG_WRITE(DDR_BASE_ADDR + 0x180, 0x00000700);
REG_WRITE(DDR_BASE_ADDR + 0x184, 0x000c2800);
REG_WRITE(DDR_BASE_ADDR + 0x188, 0x02000200);
REG_WRITE(DDR_BASE_ADDR + 0x18c, 0x02000200);
REG_WRITE(DDR_BASE_ADDR + 0x190, 0x00000c28);
REG_WRITE(DDR_BASE_ADDR + 0x194, 0x00003cc8);
REG_WRITE(DDR_BASE_ADDR + 0x198, 0x00020506);
REG_WRITE(DDR_BASE_ADDR + 0x19c, 0x03800001);
REG_WRITE(DDR_BASE_ADDR + 0x1a0, 0x00040703);
REG_WRITE(DDR_BASE_ADDR + 0x1a4, 0x0000000a);
REG_WRITE(DDR_BASE_ADDR + 0x1b0, 0x0010ffff);
REG_WRITE(DDR_BASE_ADDR + 0x1b4, 0x12070303);
REG_WRITE(DDR_BASE_ADDR + 0x1b8, 0x0000000f);
REG_WRITE(DDR_BASE_ADDR + 0x1d0, 0x00000204);
REG_WRITE(DDR_BASE_ADDR + 0x1dc, 0x00000001);
REG_WRITE(DDR_BASE_ADDR + 0x1e0, 0x00000040);
REG_WRITE(DDR_BASE_ADDR + 0x1e4, 0x01010100);
REG_WRITE(DDR_BASE_ADDR + 0x1e8, 0x00000004);
REG_WRITE(DDR_BASE_ADDR + 0x200, 0x26122612);
REG_WRITE(DDR_BASE_ADDR + 0x204, 0x26142614);
REG_WRITE(DDR_BASE_ADDR + 0x208, 0x00d90060);
REG_WRITE(DDR_BASE_ADDR + 0x20c, 0x0012195d);
REG_WRITE(DDR_BASE_ADDR + 0x210, 0x20202020);
REG_WRITE(DDR_BASE_ADDR + 0x240, 0x26122612);
REG_WRITE(DDR_BASE_ADDR + 0x244, 0x26142614);
REG_WRITE(DDR_BASE_ADDR + 0x248, 0x00d90060);
REG_WRITE(DDR_BASE_ADDR + 0x24c, 0x0012195d);
REG_WRITE(DDR_BASE_ADDR + 0x250, 0x20202020);
REG_WRITE(DDR_BASE_ADDR + 0x280, 0x26122612);
REG_WRITE(DDR_BASE_ADDR + 0x284, 0x26142614);
REG_WRITE(DDR_BASE_ADDR + 0x288, 0x00d90060);
REG_WRITE(DDR_BASE_ADDR + 0x28c, 0x0012195d);
REG_WRITE(DDR_BASE_ADDR + 0x290, 0x20202020);
REG_WRITE(DDR_BASE_ADDR + 0x2c0, 0x26122612);
REG_WRITE(DDR_BASE_ADDR + 0x2c4, 0x26142614);
REG_WRITE(DDR_BASE_ADDR + 0x2c8, 0x00d90060);
REG_WRITE(DDR_BASE_ADDR + 0x2cc, 0x0012195d);
REG_WRITE(DDR_BASE_ADDR + 0x2d0, 0x20202020);
REG_WRITE(DDR_BASE_ADDR + 0x300, 0x26122612);
REG_WRITE(DDR_BASE_ADDR + 0x304, 0x26142614);
REG_WRITE(DDR_BASE_ADDR + 0x308, 0x00d90060);
REG_WRITE(DDR_BASE_ADDR + 0x30c, 0x0012195d);
REG_WRITE(DDR_BASE_ADDR + 0x310, 0x20202020);
REG_WRITE(DDR_BASE_ADDR + 0x344, 0x00005004);
REG_WRITE(DDR_BASE_ADDR + 0x348, 0x40004000);
REG_WRITE(DDR_BASE_ADDR + 0x34c, 0x7fff7fff);
REG_WRITE(DDR_BASE_ADDR + 0x350, 0x7fff7fff);
REG_WRITE(DDR_BASE_ADDR + 0x354, 0x7fff7fff);
REG_WRITE(DDR_BASE_ADDR + 0x358, 0x40004000);
REG_WRITE(DDR_BASE_ADDR + 0x35c, 0x40004000);
REG_WRITE(DDR_BASE_ADDR + 0x360, 0x40004000);
REG_WRITE(DDR_BASE_ADDR + 0x364, 0x7fff7fff);
REG_WRITE(DDR_BASE_ADDR + 0x368, 0x7fff7fff);
REG_WRITE(DDR_BASE_ADDR + 0x36c, 0x7fff7fff);
REG_WRITE(DDR_BASE_ADDR + 0x370, 0x40004000);
REG_WRITE(DDR_BASE_ADDR + 0x374, 0x40004000);
REG_WRITE(DDR_BASE_ADDR + 0x378, 0x40004000);
}
