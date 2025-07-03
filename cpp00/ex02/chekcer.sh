#!/bin/bash

awk '{ $1=""; print }' 19920104_091532.log > log1_no_ts.log
awk '{ $1=""; print }' my_log.log > log2_no_ts.log


if diff -u log1_no_ts.log log2_no_ts.log > /dev/null; then
    # No differences: print green
    echo -e "\033[0;32mFiles match! No differences found.\033[0m"
else
    # Differences found: print red and show diff
    echo -e "\033[0;31mDifferences found:\033[0m"
    diff -u log1_no_ts.log log2_no_ts.log
fi