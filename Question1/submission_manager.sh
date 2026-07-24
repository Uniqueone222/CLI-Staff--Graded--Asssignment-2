#!/bin/bash

duplicates=0
processed=0
backedup=0

> report.txt
> error.log

declare -A hashes

for file in submissions/*; do
    if [ -f "$file" ]; then
        ((processed++))

        hash=$(md5sum "$file" 2>>error.log | awk '{print $1}')

        if [[ -n "${hashes[$hash]}" ]]; then
            ((duplicates++))
        else
            hashes[$hash]=1
            cp "$file" backup/ 2>>error.log
            ((backedup++))
        fi
    fi
done

echo "Files Processed: $processed" > report.txt
echo "Duplicate Files: $duplicates" >> report.txt
echo "Files Backed Up: $backedup" >> report.txt
echo "Processing completed."
