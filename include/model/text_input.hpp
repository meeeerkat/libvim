#ifndef __VIM_MODEL_TEXTINPUT_HPP__
#define __VIM_MODEL_TEXTINPUT_HPP__

#include <stdint.h>
#include <string>


namespace Vim::Model {
    class TextInput {

        public:
            enum InputState { WaitingInput, Canceled, Sent };

            TextInput();
            InputState handle_input(uint16_t code);

            void reset();
            void set_value(const std::string &new_text);
            const std::string get_value() const;

            uint16_t get_cursor() const;

        private:
            std::string value;
            uint16_t cursor;

            void insert_char(char c);
    };
}

#endif
