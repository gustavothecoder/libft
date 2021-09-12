CC = gcc
G_STDLIB_FILES = ./lib/g_stdlib/g_memset.c \
				 ./lib/g_stdlib/g_bzero.c

compile_g_stdlib_tests:
	@echo "Compiling g_stdlib tests..."
	$(CC) -o g_stdlib_tests.out \
		./tests/c_tester.c \
		./tests/g_stdlib_tests.c \
		./tests/g_stdlib/g_memset_tests.c \
		./tests/g_stdlib/g_bzero_tests.c \
		$(G_STDLIB_FILES)

run_g_stdlib_tests: compile_g_stdlib_tests
	@echo ""
	@echo "Running g_stdlib tests..."
	./g_stdlib_tests.out

run_examples:
	$(CC) -o examples.out ./examples.c $(G_STDLIB_FILES)
	./examples.out
