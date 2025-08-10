#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#ifndef DEBUG_UTILS_H
#define DEBUG_UTILS_H


void buffer_init(StringBuffer* buf);
void buffer_add(StringBuffer* buf, const char* str) ;
void buffer_print(const StringBuffer* buf) ;
void buffer_free(StringBuffer* buf) ;


// // 🧪 Example use
// int main() {
//     StringBuffer log_buf;
//     buffer_init(&log_buf);

//     int id = 1;
//     int max_xlen = 64;
//     uint64_t pc = 0x80000000;
//     uint64_t bits = 0xdeadbeef;

//     char log_line[MAX_LOG_LEN];

//     for (int i = 0; i < 25; i++) {
//         snprintf(log_line, MAX_LOG_LEN,
//                  "core %3d: 0x%0*llx (0x%08llx) %s\n",
//                  id, max_xlen/4, pc + i*4, bits + i,
//                  disassemble(bits + i));
//         buffer_add(&log_buf, log_line);
//     }

//     buffer_print(&log_buf);
//     buffer_free(&log_buf);
//     return 0;
// }
#endif