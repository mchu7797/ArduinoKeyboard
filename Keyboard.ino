#include <Keyboard.h>

#define MapLength 7

int[] pinMap = {3, 4, 5, 6, 7, 8, 9};
char[] keyMap = {'s', 'd', 'f', ' ', 'j', 'k', 'l'};

void setup() {
    for (int i = 0; i < MapLength; i++) {
        pinMode(pinMap[i], INPUT);
    }
    Keyboard.begin();
}

void loop() {
    if (digitalRead(pinMap[0]) == LOW) {
        Keyboard.press(keyMap[0]);
    } else {
        Keyboard.release(keyMap[0]);
    }
    if (digitalRead(pinMap[1]) == LOW) {
        Keyboard.press(keyMap[1]);
    } else {
        Keyboard.release(keyMap[1]);
    }
    if (digitalRead(pinMap[2]) == LOW) {
        Keyboard.press(keyMap[2]);
    } else {
        Keyboard.release(keyMap[2]);
    }
    if (digitalRead(pinMap[3]) == LOW) {
        Keyboard.press(keyMap[3]);
    } else {
        Keyboard.release(keyMap[3]);
    }
    if (digitalRead(pinMap[4]) == LOW) {
        Keyboard.press(keyMap[4]);
    } else {
        Keyboard.release(keyMap[4]);
    }
    if (digitalRead(pinMap[5]) == LOW) {
        Keyboard.press(keyMap[5]);
    } else {
        Keyboard.release(keyMap[5]);
    }
    if (digitalRead(pinMap[6]) == LOW) {
        Keyboard.press(keyMap[6]);
    } else {
        Keyboard.release(keyMap[6]);
    }
    delay(1);
}
