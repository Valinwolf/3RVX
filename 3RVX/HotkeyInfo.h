#pragma once

#include <vector>

class HotkeyInfo {
public:
    enum HotkeyActions {
        IncreaseVolume,
        DecreaseVolume,
        SetVolume,
        Mute,
        VolumeSlider,
        RunApp,
        Settings,
        Exit,
    };
    static std::vector<std::wstring> ActionNames;

public:
    int keyCombination;
    int action;

};