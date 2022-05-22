# KModule
Description: A simple linux kernel module. It logs "Loading Module" and "Removing Module" to
the kernel ring buffer on loading and removing the module.

## Build Instructions
### Dependencies
1. Linux Headers
2. Kernel Development Package
### Build Command
In project directory run:
```make```
### Loading/Removing Module
Load: ```sudo insmod simple.ko```
Remove: ```sudo rmmod simple```
Print kernel ring buffer: ```dmesg```

Operating System Concepts, Wiley -> Chapter 2 -> Programming Project 1 -> Assignment 1.
