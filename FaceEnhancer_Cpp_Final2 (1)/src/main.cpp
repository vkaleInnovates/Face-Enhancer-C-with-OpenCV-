#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;

int main() {
    // Load blurred image
    Mat img = imread("images/blurred_face.jpg");
    if(img.empty()) {
        std::cout << "Could not read the image." << std::endl;
        return -1;
    }

    // Sharpening kernel
    Mat kernel = (Mat_<float>(3,3) <<
                   0, -1,  0,
                  -1,  5, -1,
                   0, -1,  0);

    Mat sharpened;
    filter2D(img, sharpened, img.depth(), kernel);

    // Save output
    imwrite("output/enhanced_face.jpg", sharpened);

    // Show results (optional)
    imshow("Blurred Image", img);
    imshow("Enhanced Image", sharpened);
    waitKey(0);

    return 0;
}
