#code by Arjun
#date:30-09-2026

import numpy as np
print("Enter hours, minutes and seconds: ")
hours, minutes, seconds = map(int, input().split())

total_seconds = (hours * 3600) + (minutes * 60) + seconds
print(total_seconds)



