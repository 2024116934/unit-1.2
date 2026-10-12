#!/bin/bash
# Bash shell script to run tests. 
# Runs the test and then compares the output to what is expected
# Single .c file, which expects user inputs, and then prints a final output which is checked
# This tests multiple different inputs and outputs
#
# Note to students: You dont need to fully understand this! 


echo "#####################################"
echo "       d[o_0]b ELEC2645 Bot          "
echo "#####################################"
echo "Running tests..."
echo

echo "Checking for errors..."

# User input 
# Array of different inputs to test, each input is a single string, with \n for new lines (for different scanf)
# Order of inputs should match order of expected outputs
inputs=(
  $'1\n2\n3\n4\n5\n'
  $'5\n5\n5\n5\n5\n'
  $'100\n100\n100\n100\n100\n'
  $'-1\n1\n-1\n1\n-1\n'
)

#Expected output of the *final* line of output, should match order of inputs
expected_outputs=(
  'Sum = 55'
  'Sum = 125'
  'Sum = 50000'
  'Sum = 5'
)

failed=0


for i in "${!inputs[@]}"; do
  input="${inputs[$i]}"
  expected="${expected_outputs[$i]}"

  # run program, capture stdout+stderr
  output=$(echo "$input" | ./activity1_arrays.out 2>&1)
  status=$?

  # remove CRs that can break matching (Windows line endings)
  clean=$(printf '%s' "$output" | tr -d '\r')

  # get the final line of output
  final_line=$(echo "$clean" | tail -n 1 | sed 's/^ *//;s/ *$//')

  if [ $status -ne 0 ]; then
    echo "Fail: crashed (exit $status) for input -> $(echo "$input" | tr '\n' ' ')"
    echo "  Raw output: $clean"
    failed=1
    continue
  fi

  if [ "$final_line" = "$expected" ]; then
    echo "Pass: $(echo "$input" | tr '\n' ' ') => $final_line"
  else
    echo "Fail: $(echo "$input" | tr '\n' ' ')"
    echo "  Got:      $final_line"
    echo "  Expected: $expected"
    echo "  Raw output: $clean"
    failed=1
  fi
done

echo
if [ $failed -eq 0 ]; then
  echo "#####################################"
  echo "     d[o_0]b All tests passed :D    "
  echo "#####################################"
  exit 0
else
  echo "#####################################"
  echo "     d[o_0]b Some tests failed :(   "
  echo "#####################################"
  exit 1
fi
