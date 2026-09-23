#code by Arjun

from datetime import date


def days_elapsed(day: int, month: int) -> int:
    #Use a dummy non-leap year (e.g., 2023)
    d = date(2023, month, day)

    #Built-in timetuple attribute for day of year
    return d.timetuple().tm_yday


day, month = map(int, input().split())
print(days_elapsed(day, month))

