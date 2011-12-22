/*
 * SVQ1 Encoder
 * Copyright (C) 2004 Mike Melanson <melanson@pcisys.net>
 *
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

/**
 * @file
 * svq1 code books.
 */

#ifndef AVCODEC_SVQ1ENC_CB_H
#define AVCODEC_SVQ1ENC_CB_H

#include <stdint.h>

static const int8_t svq1_inter_codebook_sum[4][16*6] =
{
    {
        -1,  1, -2,  0,  1, -1, -1, -1, -2, -1,  1, -1, -1,  0, -1, -1,
        0, -1, -1, -1, -1,  0, -1,  0,  0,  0, -3,  1, -1,  0,  1, -1,
        1, -1,  2,  2,  1,  1,  2,  0,  0,  0, -1,  1,  1,  0,  0,  0,
        1, -1,  0,  1, -1,  1,  1,  0,  1,  0, -1,  1,  1,  0,  0,  0,
        -2,  0,  0, -2,  0,  0, -2,  0, -2, -1, -2, -1,  0,  0, -1,  0,
        1,  0,  1, -1,  2,  2,  1,  2,  2,  1,  0,  1,  1,  0,  1,  1,
    }, {
        -2,  1, -1, -1,  1,  0,  1, -1, -1, -1,  1, -1,  0, -1,  0, -1,
        0,  0,  0, -2,  0,  1,  0, -1, -1,  0,  2, -3,  1, -2,  3, -1,
        2,  0,  2,  1,  1, -1,  1,  1,  0,  0,  1,  1,  2, -2,  1,  0,
        -2, -1,  2, -2, -2,  0, -3,  0, -1,  0, -1,  0, -1,  0, -2, -3,
        1, -2, -2, -1,  1, -1, -1,  1, -1,  1,  1,  0, -2,  0,  1,  1,
        1,  1,  2,  1,  0,  0, -1,  0,  0,  1,  0,  1, -1,  1,  0,  2,
    }, {
        0,  0,  0, -3,  1,  1,  1, -3,  0, -1,  0, -3,  1, -3,  0, -2,
        1,  2, -1, -3,  0, -3,  1, -1,  0, -1,  0,  0,  1,  2,  1,  1,
        -1,  2, -3,  3,  1,  0, -5,  1,  0, -1, -3,  1,  0,  2,  0, -3,
        4,  2,  0, -2,  1, -2,  3, -2,  1,  1,  0, -1,  2,  5,  3,  1,
        -1,  0,  2, -3, -2,  0,  0, -2,  2, -3, -1, -1,  2,  1,  0, -2,
        3, -1,  1, -1,  2,  4,  0,  1,  0,  1,  0, -1, -3, -2, -1,  0,
    }, {
        0,  2, -1, -1,  2, -4, -2,  3,  0, -1, -5,  1,  0,  1,  0,  6,
        -2,  2,  0,  1,  1, -1, -1, -2,  1, -2, -1,  0,  2, -2, -2, -1,
        -4,  2, -1, -3, -1, -2,  2, -1,  2, -1,  2,  0,  3, -3, -3,  0,
        -3,  0,  0, -2,  4, -4,  0, -1,  4,  0, -2, -2,  3, -2,  0,  4,
        5,  0,  1,  0, -3,  3,  3,  2,  0,  0,  1,  2, -5, -2, -3,  0,
        -3,  2, -2,  2, -2,  4,  7, -3,  4,  2,  3,  2, -1,  0, -3,  1,
    }
};

static const int8_t svq1_intra_codebook_sum[4][16*6] =
{
    {
        0,  0,  0, -1, -1, -1, -1, -2,  0, -1, -1,  0, -1,  0,  1,  0,
        1,  0, -1,  1,  0,  0, -1,  1, -1,  0,  0,  0, -1,  1,  0,  0,
        -1,  0,  0,  1, -1,  1,  0, -1, -1,  0,  1,  1,  0,  0, -1,  1,
        0,  1,  0,  0,  1, -1,  0,  0,  0, -1,  1,  0,  1,  0, -2,  1,
        0, -1,  1,  0,  0,  0,  1,  0, -1,  0,  0,  0, -1,  0,  0,  0,
        0,  1,  1,  0,  0, -1,  0,  1,  0,  0,  0,  0, -1,  1,  1, -1,
    }, {
        -1, -2,  0, -1,  1,  0, -1,  0, -1, -4, -1, -2, -1, -2,  1, -2,
        0,  0,  4, -2, -1,  1,  1,  0,  2,  1,  1,  0,  2,  0,  0,  0,
        1,  1,  0, -1, -1, -1,  1,  0, -1, -3, -3,  1, -1,  1, -2, -1,
        1, -1,  0,  1,  2,  1, -1, -1,  1,  1,  1,  2,  1,  0,  1, -2,
        -2,  0, -1, -2, -2,  0, -1, -1, -1,  0,  1,  0, -1, -1,  0, -1,
        0,  2,  1,  2,  2,  1, -1,  1,  0,  2,  0, -1,  1,  0,  0,  0,
    }, {
        -2,  0, -1, -1,  1,  1, -2,  0, -2,  0,  1, -2, -2,  1, -1, -1,
        3, -2,  0, -3, -4, -3,  2,  1,  0,  3, -2,  2,  3,  2,  2, -1,
        -3,  1,  0,  1,  0,  0,  0,  1, -2,  1, -2, -2, -1, -2, -2,  2,
        0, -4,  0,  2, -1,  0,  2,  2,  2,  1,  0, -1, -1,  1, -3,  2,
        2,  1,  0,  3,  1, -1,  1,  3,  1,  0,  1,  1,  2, -1,  1, -1,
        -2, -1,  0, -1,  1, -1,  1, -2, -2, -1, -1, -3,  1, -4, -3,  1,
    }, {
        -2,  0, -2,  3, -1, -1,  0,  2,  2, -1, -3,  2,  1,  0, -2, -1,
        -3, -2, -2,  1,  2, -3,  0,  1, -5, -2, -3,  0, -2, -1,  2,  0,
        -1, -1,  0, -2,  1,  3, -7, -2, -2, -1,  2, -1,  0,  3,  1,  3,
        1,  0,  0,  1,  2,  3,  1,  2,  0, -2, -2,  1,  1,  2,  2,  3,
        4,  1, -1,  2, -2,  4,  0,  0,  0,  4,  2,  0, -2, -2,  2, -4,
        -1,  5, -2, -2, -3,  2, -3, -1,  3, -3,  0,  4,  3,  0,  1, -2,
    }
};

#endif /* AVCODEC_SVQ1ENC_CB_H */
