# Face Enhancer - C++ Assignment

## Requirements
- OpenCV installed on your system.

## Instructions to Run
1. Place your blurred face image in the `images` folder and name it `blurred_face.jpg`.
2. Build the project using:
   ```bash
   g++ src/main.cpp -o faceEnhancer `pkg-config --cflags --libs opencv4`
   ```
3. Run the program:
   ```bash
   ./faceEnhancer
   ```
4. The enhanced image will be saved in the `output` folder as `enhanced_face.jpg`.

## Files Included
- `src/main.cpp` → Main source code
- `images/blurred_face.jpg` → Sample blurred image (add your own)
- `output/enhanced_face.jpg` → Generated enhanced image
- `README.md` → Instructions
