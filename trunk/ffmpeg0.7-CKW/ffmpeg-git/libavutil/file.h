/*
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

//****************************************************************************//
//libavutil\file.h, libavutil\file.c
//	
//学习的地方：
//1.offsetof宏的简介: 该宏用于求结构体中一个成员在该结构体中的偏移量
//2.fstat：fstat() 函数返回关于打开文件的信息，提示：本函数与 stat() 函数相似，不同的是，它是作用于已打开的文件指针而不是文件名
//附录：
//****************************************************************************//

#ifndef AVUTIL_FILE_H
#define AVUTIL_FILE_H

#include "avutil.h"

/**
 * @file misc file utilities
 */

/**
 * Read the file with name filename, and put its content in a newly
 * allocated buffer or map it with mmap() when available.
 * In case of success set *bufptr to the read or mmapped buffer, and
 * *size to the size in bytes of the buffer in *bufptr.
 * The returned buffer must be released with av_file_unmap().
 *
 * @param log_offset loglevel offset used for logging
 * @param log_ctx context used for logging
 * @return a non negative number in case of success, a negative value
 * corresponding to an AVERROR error code in case of failure
 */
FFMPEGLIB_API int av_file_map(const char *filename, uint8_t **bufptr, size_t *size,
                              int log_offset, void *log_ctx);

/**
 * Unmap or free the buffer bufptr created by av_file_map().
 *
 * @param size size in bytes of bufptr, must be the same as returned
 * by av_file_map()
 */
FFMPEGLIB_API void av_file_unmap(uint8_t *bufptr, size_t size);

#endif /* AVUTIL_FILE_H */
