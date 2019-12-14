/*   -*- buffer-read-only: t -*- vi: set ro:
 *
 *  DO NOT EDIT THIS FILE   (save-flags.h)
 *
 *  It has been AutoGen-ed
 *  From the definitions    /tmp/.ag-ufBbQe/save-flags.def
 *  and the template file   str2enum
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name ``Bruce Korb'' nor the name of any other
 *    contributor may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * str2enum IS PROVIDED BY Bruce Korb ``AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL Bruce Korb OR ANY OTHER CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Command/Keyword Dispatcher
 */
#ifndef STR2ENUM_SAVE_FLAGS_H_GUARD
#define STR2ENUM_SAVE_FLAGS_H_GUARD 1
#include <sys/types.h>
#include <inttypes.h>

/** integral type for holding save_flags masks */
typedef uint32_t save_flags_mask_t;

/** bits defined for save_flags_mask_t */
/** include default values in commentary */
#define SVFL_DEFAULT            0x0001U
/** include usage text in commentary */
#define SVFL_USAGE              0x0002U
/** replace or append state */
#define SVFL_UPDATE             0x0004U

/** bits in USAGE_DEFAULT mask:
 *  usage   default */
#define SVFL_USAGE_DEFAULT_MASK 0x0003U

/** all bits in save_flags_mask_t masks */
#define SVFL_MASK_ALL           0x0007U

/** no bits in save_flags_mask_t */
#define SVFL_NONE               0x0000U

/** buffer size needed to hold all bit names for save_flags_mask_t masks */
#define MAX_SAVE_FLAGS_NAME_SIZE 21

extern save_flags_mask_t
save_flags_str2mask(char const * str, save_flags_mask_t old);

#endif /* STR2ENUM_SAVE_FLAGS_H_GUARD */
/* end of save-flags.h */