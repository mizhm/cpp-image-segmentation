//
// Created by minh on 11/7/24.
//

#include "image_util.h"

namespace image_util {
    cv::Mat load_image(const std::string &file_path) {
        cv::Mat image = cv::imread(file_path);
        if (image.empty()) {
            std::cerr << "Could not read the image: " << file_path << std::endl;
            exit(1);
        }
        return image;
    }

    void save_image(const cv::Mat &image, const std::string &file_path) {
        cv::imwrite(file_path, image);
    }

    void show_image(const cv::Mat &image, const std::string &window_name) {
        cv::namedWindow(window_name);
        cv::imshow(window_name, image);
        cv::waitKey(0);
        cv::destroyWindow(window_name);
    }


}
