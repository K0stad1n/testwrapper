#pragma once
#include <stdint.h>

void cicuta_virosa(void);

uint64_t read_64(uint64_t addr);

uint32_t read_32(uint64_t addr);

void write_20(uint64_t addr, const void* buf);

void write_32(uint64_t addr, const void* buf);

void write_64(uint64_t addr, const void* buf);
