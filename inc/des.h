#pragma once
#include <stdint.h>
int32_t fill_text_buffer(uint64_t *pdata);
void print_binary8(uint8_t value);
void print_binary32(uint32_t value);
void print_binary64(uint64_t value);

uint64_t key_permutation(uint64_t key);
void shifting_key_pairs(uint32_t shifted_key_pairs[16][2], uint64_t key_permutated);
uint64_t join_half_keys(uint32_t keyleft, uint32_t keyright) ;
void form_keys48b(uint32_t shifted_key_pairs[16][2], uint64_t *keys48b);
void key_gen(uint64_t *keys48b, uint64_t key);

uint64_t initial_permutation(uint64_t data_block);
void div_block64_to_blocks32(uint32_t* left, uint32_t* right, uint64_t block64);
void sblock_fill(uint8_t sblock6b[8], uint64_t block64b);
uint8_t sblock_resolve(uint8_t sblock6b, int i);
uint32_t join4b_to_32b(uint8_t sblock4b[8]);
uint32_t permutation(uint32_t sblock_joined);
uint64_t concat_blocks32_to64(uint32_t left_block32, uint32_t right_block32);
uint64_t final_permutation(uint64_t block64);
uint64_t encrypt_DES(uint64_t data_block, uint64_t keys48b[16]);
uint64_t* reverse_array(const uint64_t arr[], int size);
void printchars(uint64_t value);
