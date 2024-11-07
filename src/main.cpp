#include <opencv2/opencv.hpp>
#include <iostream>

#include "util/image_util.h"

using namespace image_util;

int main() {

    // Load image
    cv::Mat image = load_image("../image/1-01.png");

    // Convert to gray scale
    cv::Mat gray_scale_image = convert_to_gray_scale(image);

    // Show image
    show_image(gray_scale_image, "demo");
    return 0;
}
