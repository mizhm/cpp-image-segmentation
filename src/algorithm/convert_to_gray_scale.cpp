//
// Created by minh on 11/7/24.
//

#include "image_processing.h"

namespace image_processing {
    cv::Mat convert_to_gray_scale(const cv::Mat &image) {
        cv::Mat gray_image(image.rows, image.cols, CV_8UC1);
        for (int i = 0; i < image.rows; i++) {
            for (int j = 0; j < image.cols; j++) {
                const auto &pixel = image.at<cv::Vec3b>(i, j);
                const auto gray_pixel = static_cast<uchar>(
                    (0.299 * pixel[0]) + (0.587 * pixel[1]) + (0.114 * pixel[2]));
                gray_image.at<uchar>(i, j) = gray_pixel;
            }
        }
        return gray_image;
    }
}
