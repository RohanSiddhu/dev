# KModule
***Description:*** A simple linux kernel module. It logs "Loading Module" and "Removing Module" to
the kernel ring buffer on loading and removing the module.

## Build Instructions
### Tools
1. GNU Make
### Dependencies
1. Kernel Development Package
### Build Command
In project's root directory, run: ```make```
### Loading/Removing Module
List Modules: ```lsmod```

Load: ```sudo insmod simple.ko```

Remove: ```sudo rmmod simple```

Print kernel ring buffer: ```dmesg```

## References
*Operating System Concepts 9th edition, Wiley -> Chapter 2 -> Programming Project 1 -> Assignment 1.*
