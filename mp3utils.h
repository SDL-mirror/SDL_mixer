/*
  SDL_mixer:  An audio mixer library based on the SDL library
  Copyright (C) 1997-2012 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#ifndef MP3UTILS_H_
#define MP3UTILS_H_

struct mp3file_t {
  SDL_RWops *rw;
  int start, length, pos;
};

extern int mp3_skiptags(struct mp3file_t *fil);
extern int MP3_RWinit(struct mp3file_t *fil, SDL_RWops *src);
extern int MP3_RWread(struct mp3file_t *fil, void *ptr, int size, int maxnum);
extern int MP3_RWseek(struct mp3file_t *fil, int offset, int whence);

#endif /* MP3UTILS_H_ */
