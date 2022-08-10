# f_timer
timer functions for non interrupting tasks on arduino (like blink without "delay()")

# description
the timer class will work in the background using the millis() function, but will only occupy computational power when asked for *isExpired()*, for example. Therefore it is non-blocking and can be used to blink an LED while simultaneously doing something else.

# usage example: blink led without delay

first, we need to create an instance of the timer class:

`ftimer ledTimer;`

then we need to tell the timer how long the timer should run
