#!/usr/bin/env bash
set -euo pipefail
clang -std=c11 -Wall -Wextra -Werror length.c -o length
echo "Mila" | ./length
