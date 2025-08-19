#!/bin/bash
git add .
filename=$(git diff --cached --name-only | head -n 1)
git commit -m "${filename%.*}번 풀이"
git push origin main
