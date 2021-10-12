export module partitioned_module :part;

// ERROR:
// Try removing ´export´,
// Then building main.cpp will fail!
export import some_module;

export int get_magic() {
	return magic_number();
}
