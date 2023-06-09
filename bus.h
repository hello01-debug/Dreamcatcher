#pragma once

#include <cstdint>
#include <string>

namespace Bus
{
    
void LoadRoms(std::string bootRom, std::string flashRom);

void Dump();

uint8_t Read8(uint32_t addr);
uint16_t Read16(uint32_t addr);
uint32_t Read32(uint32_t addr);

void Write8(uint32_t addr, uint8_t data);
void Write16(uint32_t addr, uint16_t data);
void Write32(uint32_t addr, uint32_t data);

}