//
// Created by minh on 11/7/24.
//

#ifndef IMAGE_UTIL_H
#define IMAGE_UTIL_H

#include <opencv2/opencv.hpp>


namespace image_util {
    cv::Mat load_image(const std::string &file_path);

    void save_image(const cv::Mat &image, const std::string &file_path);

    void show_image(const cv::Mat &image, const std::string &window_name);
};


#endif //IMAGE_UTIL_H
