module;

export module logging;

import <iostream>;

#define MAGIC_LOGGER
#include "log_helper.hpp"

export namespace logging
{
	inline void info()
	{
		_log();
	}
}
