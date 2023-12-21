cmake -B build
cmake --build build

python3 -m pytest

python3 main.py
