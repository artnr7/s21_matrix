#!/bin/bash

data=$(date "+%d.%m.%Y %H:%M")

while ! cd .. >/dev/null 2>&1; do
    echo "cd..."
    sleep 2
done

while ! git add . >/dev/null 2>&1; do
    echo "add..."
    sleep 2
done


while ! git commit -m "$data" >/dev/null 2>&1; do
    echo "commit..."
    sleep 2
done

while ! git push origin develop >/dev/null 2>&1; do
    echo "push..."
    sleep 2
done

echo "Done."

