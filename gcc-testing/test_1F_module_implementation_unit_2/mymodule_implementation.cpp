module MyModule;

import <iostream>;

int MyFunc()
{
    return 33;
}

int A::MemberFunc()
{
    if( num == 35 )
    {
        std::cout << "num is 35\n";
    }

    num = MyFunc();

    if( hwColors == HwColors::YELLOW )
    {
        std::cout << "hwColor is YELLOW\n";
    }

    return 44;
}
