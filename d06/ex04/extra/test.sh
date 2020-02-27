#!/bin/bash

cat list | tr ' ' '\n' | sort -d > sort.out
