import time
from datetime import date

current_time = time.time()
seconds_since = '{:,.5f}'.format(current_time)
scientific_seconds_since = '{:.2e}'.format(current_time)
#Unix Time
print("Seconds since January 1, 1970: " + seconds_since + " or " + scientific_seconds_since + " in scientific notation")

format_date = date.today().strftime("%b %d %Y")
print(format_date)
