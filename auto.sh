#!/bin/bash
filename=$(git diff --cached --name-only | head -n 1)
git add .
git commit -m "${filename%.*}번 풀이"
git push origin main
