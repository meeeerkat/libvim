#ifndef __VIM_WIDGETS_WIDGET_HPP__
#define __VIM_WIDGETS_WIDGET_HPP__

namespace Vim::Widgets {

    class Widget {

        public:
            Widget();
            void set_refresh_policy(bool can_refresh);
            bool can_refresh() const;

        private:
            bool _can_refresh;
    };

}

#endif
