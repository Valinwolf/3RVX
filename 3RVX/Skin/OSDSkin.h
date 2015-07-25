#pragma once

#pragma comment(lib, "gdiplus.lib")

#include <Windows.h>
#include <gdiplus.h>
#include <vector>

class Meter;
class SoundPlayer;

class OSDSkin {
public:
    OSDSkin(Gdiplus::Bitmap *background, Gdiplus::Bitmap *mask,
        std::vector<Meter *> meters, std::vector<HICON> iconset,
        SoundPlayer *sound) :
    background(background),
    mask(mask),
    meters(meters),
    iconset(iconset),
    sound(sound) {

    }

    Gdiplus::Bitmap *background;
    Gdiplus::Bitmap *mask;
    std::vector<Meter *> meters;
    std::vector<HICON> iconset;
    SoundPlayer *sound = NULL;
};