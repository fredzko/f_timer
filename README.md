# f_timer
timer functions for non interrupting tasks on arduino (like blink without "delay()")

## description
the timer class will work in the background using the millis() function, but will only occupy computational power when asked for *isExpired()*, for example. Therefore it is non-blocking and can be used to blink an LED while simultaneously doing something else.

## usage example: blink led without delay

first, we need to create an instance of the timer class:

`ftimer ledTimer;`

then (e.g. inside the setup) we need to tell the timer how long the timer should run. this can be altered at any time. the duration is in milliseconds

`ledTimer.setDuration(1000);`

*note: the timer does not expire by itself, the timer only has an effect when periodically asked wether it is expired yet or not. e.g. changing the duretion 2000ms after the start of the timer to 1000ms, nothing will happen unless isExpired() is called!*

the timer then has to be started, eg. at the end of the setup:

`ledTimer.startNow()`

if we have a `bool ledState` that we want to toggle every 1000ms to turn the built in LED on and off at 0,5Hz, we can use the timer inside the loop:
```
void loop(){
  if(ledTimer.isExpired()){
    ledState = !ledState;
    digitalWrite(LED_BUILTIN, ledState);
    ledTimer.startNow();
  }
  //do other stuff here
}
```
