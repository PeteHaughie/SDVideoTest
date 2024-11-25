# Standard Definition Video Test

Footage courtesy of "Free Background Videos - No Copyright"
https://www.youtube.com/@freebackgroundvideos-nocop2570

Before running on a Pi you might want to convert the video to Prores format or it will be a slideshow:

`ffmpeg -i in.mp4 -vf "scale=640:480:force_original_aspect_ratio=increase,crop=640:480" -c:v prores -profile:v 3 -qscale:v 9 -an out.mov`

Change line 5 of `ofApp.cpp` to `player.load("rain.mov");`
