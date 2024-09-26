#include <set>
#include <utility>

class MyCalendar {
private:
    std::set<std::pair<int, int>> bookings; // Store the start and end of booked events

public:
    MyCalendar() = default;

    bool book(int start, int end) {
        // Find the first booking that overlaps with the new booking
        auto it = bookings.lower_bound({start, end});

        // Check if there's an overlap with the previous booking
        if (it != bookings.begin()) {
            auto prev = std::prev(it);
            if (prev->second > start) {
                return false; // Overlap detected
            }
        }

        // Check if there's an overlap with the next booking
        if (it != bookings.end() && it->first < end) {
            return false; // Overlap detected
        }

        // If no overlap, add the event to bookings
        bookings.insert({start, end});
        return true;
    }
};

//leetcode -  729