export module MyModule;

export int num { 35 };

export int MyFunc();

export enum class HwColors
{
    YELLOW,
    BROWN,
    BLUE
};

export HwColors hwColors { HwColors::YELLOW };

export struct A
{
    int MemberFunc();
};
