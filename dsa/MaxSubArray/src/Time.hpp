#pragma once

#include <iostream>
#include <iomanip>


#ifdef __linux__

#include <ctime>


class Time {
private:
    clockid_t clockid;
    timespec start, end, duration;
public:
    Time(clockid_t clockid = CLOCK_PROCESS_CPUTIME_ID) {
        this->clockid = clockid;
        clock_gettime(clockid, &start);
    }

    ~Time() {
        clock_gettime(clockid, &end);

        if (end.tv_nsec < start.tv_nsec) {
            duration.tv_sec = end.tv_sec - start.tv_sec - 1;
            duration.tv_nsec = (long)1e9 + end.tv_nsec -start.tv_nsec;
        }
        else {
            duration.tv_sec = end.tv_sec - start.tv_sec;
            duration.tv_nsec = end.tv_nsec - start.tv_nsec;
        }

        std::cout << duration.tv_sec << "." << std::setw(9) << std::setfill('0') << duration.tv_nsec << "s" << std::endl;
    }
};
#elif defined _WIN64

#include <Windows.h>


class Time {

};
#endif