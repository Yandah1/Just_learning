#!/bin/bash

pid_max=$(cat /proc/sys/kernel/pid_max)
echo "The maximun process ID can be: $pid_max"
