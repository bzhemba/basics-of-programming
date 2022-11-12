#include <stdio.h>
#include <stdlib.h>

struct MP3player{
    unsigned playback: 1;
    unsigned pause: 1;
    unsigned recording: 1;
};
union Byte{
    unsigned int value;
    struct MP3player bitfield;
};

int main() {
    union Byte condition;
    scanf("%x", &condition.value);
    printf(" playback: %d\n pause: %d\n recording: %d\n ", condition.bitfield.playback, condition.bitfield.pause, condition.bitfield.recording);
    return 0;
}
