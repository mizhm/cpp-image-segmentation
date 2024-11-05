#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("demo.jpg");
    if (image.empty()) {
        std::cerr << "Could not open or find the image!" << std::endl;
        return -1;
    }
    cv::imshow("Display Window", image);
    cv::waitKey(0);
    return 0;
}
