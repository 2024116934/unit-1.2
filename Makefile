# Makefile for building and testing the six Unit 1.2 activities.
# Run "make test" to see the available tests.
# Run "make test1", "make test2", and so on to test one activity.
# Run "make clean" to delete all compiled .out files.
#
# Programs include debug information for the VS Code Run and Debug panel.
# Note to students: You do not need to fully understand this Makefile!

CC := gcc
CFLAGS := -Wall -Wextra -Wpedantic -std=c11 -g -O0

.PHONY: test test1 test2 test3 test4 test5 test6 clean

test:
	@echo "Choose an activity test:"
	@echo "  make test1  Activity 1: Arrays"
	@echo "  make test2  Activity 2: 2D Arrays"
	@echo "  make test3  Activity 3: Strings"
	@echo "  make test4  Activity 4: More Strings: Palindrome Checker"
	@echo "  make test5  Activity 5: Enum and Switch"
	@echo "  make test6  Activity 6: Debug Practice"

test1: activity1_arrays.out
	@bash activity1_test.sh

test2: activity2_2d_arrays.out
	@bash activity2_test.sh

test3: activity3_strings.out
	@bash activity3_test.sh

test4: activity4_more_strings.out
	@bash activity4_test.sh

test5: activity5_enum_switch.out
	@bash activity5_test.sh

test6: activity6_debug_practice.out
	@bash activity6_test.sh

activity1_arrays.out: activity1_arrays.c
	$(CC) $(CFLAGS) $< -o $@

activity2_2d_arrays.out: activity2_2d_arrays.c
	$(CC) $(CFLAGS) $< -o $@

activity3_strings.out: activity3_strings.c
	$(CC) $(CFLAGS) $< -o $@

activity4_more_strings.out: activity4_more_strings.c
	$(CC) $(CFLAGS) $< -o $@

activity5_enum_switch.out: activity5_enum_switch.c
	$(CC) $(CFLAGS) $< -o $@

activity6_debug_practice.out: activity6_debug_practice.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.out
