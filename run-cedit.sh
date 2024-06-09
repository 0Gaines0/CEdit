#!/bin/bash

cd "$(dirname "$0")/build" || exit 1

make || { echo "Build failed"; exit 1; }

./MyQtApp || { echo "Failed to start MyQtApp"; exit 1; }
