module;
#include "xxhash.hpp"

export module xxhashwrapper;
import <cstdint>;


export namespace hashing
{
	uint64_t Hash(const char* str)
	{
		// Obtain seed using xxhash3.
		// There is a third, optional parameter 'seed = 0' which we omit
		// here, since we need string hashing to be deterministic here.
		xxh::hash_t<64> hash = xxh::xxhash3<64>((void*)str, strlen(str));
		return hash;
	}
}
