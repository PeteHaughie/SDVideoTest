# Standard Definition Video Test

Footage courtesy of "Free Background Videos - No Copyright"
https://www.youtube.com/@freebackgroundvideos-nocop2570

Before running on a Pi you might want to convert the video to Prores format or it will be a slideshow:

`ffmpeg -i rain.mp4 -c:v prores_ks -profile:v 4 -vendor apl0 -bits_per_mb 8000 -pix_fmt yuva444p10le -qscale: 9 -an rain.mov`

Change line 5 of `ofApp.cpp` to `player.load("rain.mov");`