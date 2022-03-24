{ pkgs }: {
	deps = [
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
		pkgs.nano
		pkgs.cmake
		pkgs.python39Packages.pip
	];
}
