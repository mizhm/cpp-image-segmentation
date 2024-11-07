//
// Created by minh on 11/7/24.
//

#ifndef IMAGE_PROCESSING_H
#define IMAGE_PROCESSING_H

#include <opencv2/core.hpp>

namespace image_processing {
    cv::Mat threshold(const cv::Mat &image, int threshold_value);

    cv::Mat edge_detection(const cv::Mat &image);

    cv::Mat image_segmentation(const cv::Mat &image);
};
#endif //IMAGE_PROCESSING_H
