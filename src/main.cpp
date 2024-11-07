#include <opencv2/opencv.hpp>
#include <iostream>

#include "algorithm/image_processing.h"
#include "util/image_util.h"

using namespace image_util;

int main() {
    // Load image
    const cv::Mat image = load_image("../image/1-01.png");

    //Gray scale
    const cv::Mat gray_image = image_processing::convert_to_gray_scale(image);

    //Threshold
    const cv::Mat edge_image = image_processing::edge_detection(gray_image);

    // Show image
    show_image(edge_image, "demo");
    return 0;
}
