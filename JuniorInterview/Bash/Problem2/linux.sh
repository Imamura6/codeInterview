# Prepare test
export TEST_DIR="bash_test_dir";
mkdir -p "$TEST_DIR";
mkdir -p "$TEST_DIR/subdir";
echo "this is a test file" > "$TEST_DIR/file1.txt";
echo "another test here" > "$TEST_DIR/subdir/file2.txt";
echo "no match here" > "$TEST_DIR/file3.txt";
echo "test test test" > "$TEST_DIR/subdir/file4.txt";
# ---------------------------------------------
# Implement solution here

# ---------------------------------------------
# Validation
errors=0;
grep -r 'test' "$TEST_DIR" && { echo "Found 'test' in files"; ((errors++)); };
grep -r 'local' "$TEST_DIR" | grep -q 'local' && echo "Found expected 'local' replacements";
[ $errors -eq 0 ] && echo "Test passed!"
[ $errors -ne 0 ] && echo "Test failed!"
