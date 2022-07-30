/*
 * Copyright (c) 2022, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

class Square {
public:
    Square(int x, int y);
    int get_value() const { return m_value; };
    int get_x() const { return m_x; };
    int get_y() const { return m_y; };
    void set_value(int value);
    void set_fixed(bool is_fixed) { m_fixed = is_fixed; };
    bool is_fixed() const { return m_fixed; };
    void set_answer(int value);
    bool is_correct() const;

private:
    int m_x;
    int m_y;
    bool m_fixed { false };
    int m_value { 0 };
    int m_answer { 0 };
};
