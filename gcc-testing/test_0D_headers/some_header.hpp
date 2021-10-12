#pragma once

#define GREAT_VALUE 42


int great_function()
{
	return GREAT_VALUE;
}

template<typename T>
bool is_greater(T a, T b) {
	return a > b;
}
