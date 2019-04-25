@echo off
:loop
python rand.py > in.txt
ac < in.txt > ac.txt
"%1.exe" < in.txt > "%1.txt"
fc ac.txt "%1.txt" > nul
if not errorlevel 1 goto loop
