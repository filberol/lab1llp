#ifndef LAB1LLP_SECTOR_UTILS_H
#define LAB1LLP_SECTOR_UTILS_H

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include "../../include/sectors/sectors.h"
#include "../../include/types/file_static_header.h"
#include "../../include/utils/static_header_utils.h"

uint32_t allocate_sector(FILE* file, int alloc_size, uint32_t prev_sector, uint32_t next_sector);
void deallocate_sector(FILE* file, uint32_t sector_number);

int read_sector_header_by_index(FILE *file, uint32_t sector_number, struct SectorHeader *header);
int write_sector_header_by_index(FILE *file, uint32_t sector_number, struct SectorHeader *header);

#endif //LAB1LLP_SECTOR_UTILS_H
