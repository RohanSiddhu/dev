// MergeSort.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

#ifdef _WIN64
#include <Windows.h>
#endif

#ifdef __linux__
#include <ctime>
#endif


#ifdef _WIN64
class Time {
private:
	LARGE_INTEGER start, end, frequency, duration;
public:
	Time() {
		QueryPerformanceFrequency(&frequency);
		QueryPerformanceCounter(&start);
	}

	~Time() {
		QueryPerformanceCounter(&end);
		duration.QuadPart = end.QuadPart - start.QuadPart;
		duration.QuadPart *= 1000000;
		duration.QuadPart /= frequency.QuadPart;

		std::cout << "Time: " << (double)duration.QuadPart / 1000000 << "s\n";
	}
};
#elif defined __linux__
class Time {
private:
	timespec start, end, duration;
public:
	Time() {
		clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &start);
	}

	~Time() {
		clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);
		if ((end.tv_nsec - start.tv_nsec) < 0) {
			duration.tv_sec = end.tv_sec - start.tv_sec - 1;
			duration.tv_nsec = 1000000000 + end.tv_nsec - start.tv_nsec;
		}
		else {
			duration.tv_sec = end.tv_sec - start.tv_sec;
			duration.tv_nsec = end.tv_nsec - start.tv_nsec;
		}

		std::cout << "Time: " << duration.tv_sec << "." << duration.tv_nsec << "s\n";
	}
};
#endif
