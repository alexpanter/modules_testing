export module partitioned_module :part2;

import some_module;
import :part;

export int get_magic_2() {
	return get_magic() + 2;
}
