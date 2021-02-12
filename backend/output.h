/*  output.h - Common routines for raster/vector

    libzint - the open source barcode library
    Copyright (C) 2020 Robin Stuart <rstuart114@gmail.com>

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:

    1. Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
    3. Neither the name of the project nor the names of its contributors
       may be used to endorse or promote products derived from this software
       without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
    ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
    FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
    DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
    OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
    HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
    LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
    OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
    SUCH DAMAGE.
 */
/* vim: set ts=4 sw=4 et : */

#ifndef OUTPUT_H
#define OUTPUT_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

INTERNAL int output_check_colour_options(struct zint_symbol *symbol);
INTERNAL void output_set_whitespace_offsets(struct zint_symbol *symbol, int *xoffset, int *yoffset, int *roffset, int *boffset);
INTERNAL int output_process_upcean(struct zint_symbol *symbol, int *p_main_width, int *p_comp_offset, unsigned char addon[6], int *p_addon_gap);
INTERNAL double output_large_bar_height(struct zint_symbol *symbol);
INTERNAL void output_upcean_split_text(int upceanflag, unsigned char text[],
                unsigned char textpart1[], unsigned char textpart2[], unsigned char textpart3[], unsigned char textpart4[]);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* OUTPUT_H */
