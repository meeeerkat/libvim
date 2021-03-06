#ifndef __VIM_INPUT_HANDLER_HPP__
#define __VIM_INPUT_HANDLER_HPP__

#include <ncurses.h>
#include <string>

namespace Vim {

// Only handles shortcuts (in the normal mode)
// Command writing or page form filling input is
// taken care of in the widgets themselves
class InputHandler {
    public:
        InputHandler();
        ~InputHandler();
        uint16_t get_input();
        void wait_for_input();

    private:
        WINDOW *fake_window;
};

}

#endif
