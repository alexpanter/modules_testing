#pragma once

import <iostream>;


inline void _log()
{
#ifdef MAGIC_LOGGER
	std::cout << "magic logger\n";
#else
	std::cout << "normal logger\n";
#endif
}

