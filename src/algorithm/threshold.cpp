//
// Created by minh on 11/7/24.
//

#include "image_processing.h"

namespace image_processing {
    cv::Mat threshold(const cv::Mat &image, const int threshold_value) {
        cv::Mat thresholded_image(image.rows, image.cols, image.type());

        for (int i = 0; i < image.rows; i++) {
            for (int j = 0; j < image.cols; j++) {
                if (image.at<uchar>(i, j) > threshold_value) {
                    thresholded_image.at<uchar>(i, j) = 255;
                } else {
                    thresholded_image.at<uchar>(i, j) = 0;
                }
            }
        }
        return thresholded_image;
    }
} // image_processing namespace
