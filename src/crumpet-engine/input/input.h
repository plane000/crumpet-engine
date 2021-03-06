#ifndef _INPUT_INPUT_H_
#define _INPUT_INPUT_H_

#include <vector>
#include <SDL2/SDL.h>

#include "../renderengine/renderer.h"
#include "keyboard.h"
#include "mouse.h"

class Input {
public:
    Input(Renderer* renderer);

    Keyboard keyboard;

    void poll();

    virtual ~Input();
private:
    SDL_Event m_event;
    Renderer* m_renderer;
};

#endif
