#pragma once

#include "types.h"

typedef struct time_state {
    f32 delta; // time between frames
    f32 now; // time of the current frame
    f32 last; // time of the last frame

    f32 frame_last; // last time the fps was calculated
    f32 frame_delay; // max amount of time a frame should take
    f32 frame_time; // how long the current frame took

    f32 frame_rate; // the amount of frame per second we are running at
    f32 frame_count; // helps us calculate the frame rate
} Time_State;

void time_init(u32 frame_rate);
void time_update(void);
void time_update_late(void);