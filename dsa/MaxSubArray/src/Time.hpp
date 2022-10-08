#pragma once

#include <iostream>
#include <iomanip>


#ifdef __linux__

#include <ctime>


class Time {
private:
    clockid_t clockid;
    timespec startTime, endTime, duration;
public:
    void start(clockid_t clockid = CLOCK_PROCESS_CPUTIME_ID) {
        this->clockid = clockid;
        clock_gettime(clockid, &startTime);
    }

    void end() {
        clock_gettime(clockid, &endTime);

        if (endTime.tv_nsec < startTime.tv_nsec) {
            duration.tv_sec = endTime.tv_sec - startTime.tv_sec - 1;
            duration.tv_nsec = (long)1e9 + endTime.tv_nsec -startTime.tv_nsec;
        }
        else {
            duration.tv_sec = endTime.tv_sec - startTime.tv_sec;
            duration.tv_nsec = endTime.tv_nsec - startTime.tv_nsec;
        }

        // std::cout << duration.tv_sec << "." << std::setw(9) << std::setfill('0') << duration.tv_nsec << "s" << std::endl;
    }

    timespec getTime() { return duration; }
};
#elif defined _WIN64

#include <Windows.h>


class Time {

};
#endif