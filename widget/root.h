//
// Created by Feed on 5/29/2020.
//

#pragma once

#include "common.h"
#include "widget.h"
#include "editor.h"

#include "glm/glm.hpp"

class Root : public Widget {
public:
    Root();
    void onCodepoint(const Event::Codepoint& codepoint);
    void onMacro(const Event::Macro& macro);
    void onWindowResize(const Event::WindowResize& window_resize);
    void draw(Draw::CallQueue& draw_buffer);
private:
    Editor m_editor;
};
