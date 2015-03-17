/*
    Crashing Trashing Bots is a 3D game in freeglut
    Copyright (C) 2015 Mladen Markovic,Tamara Plazinic,Nikola Banjac

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef DISPLAY_H
#define DISPLAY_H


#include "glut.h"


#define MODUS_MENI 0
#define MODUS_1 1
#define MODUS_2 2
#define MODUS_3 3
#define MODUS_4 4
#define MODUS_5 5
#define MODUS_6 6
#define MODUS_7 7


class Display
{
public:
    void show();

    void meni();
    void prozor2();

    int get_modus();
    void set_modus(int modus);
private:
    int modus=MODUS_MENI;
};


#endif // DISPLAY_H