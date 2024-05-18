#pragma once

#include <stdbool.h>

#define LK_BASE 0x41e00000
#define STACK_END 0x41e4941c
#define PAYLOAD_DST STACK_END + 0x7C // 0x41e49498

#define APP_CALLER 0x41e108ac
#define PLATFORM_INIT_CALLER 0x41e0fbb2

int app();
void platform_init();
bool mtk_detect_key(unsigned short key);
void kaeru_late_init();
void kaeru_early_init();
