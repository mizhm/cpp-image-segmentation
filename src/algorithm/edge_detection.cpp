//
// Created by minh on 11/7/24.
//

#include "image_processing.h"

namespace image_processing {
    //This func using sobel method
    //https://en.wikipedia.org/wiki/Sobel_operator
    cv::Mat edge_detection(const cv::Mat &image) {
        cv::Mat edge_image(image.rows, image.cols, image.type());
        for (int i = 0; i < image.rows; i++) {
            for (int j = 0; j < image.cols; j++) {
                const double val0 = image.at<uchar>(i, j);
                const double val1 = image.at<uchar>(i + 1, j);
                const double val2 = image.at<uchar>(i + 2, j);
                const double val3 = image.at<uchar>(i, j + 1);
                const double val5 = image.at<uchar>(i + 2, j + 1);
                const double val6 = image.at<uchar>(i, j + 2);
                const double val7 = image.at<uchar>(i + 1, j + 2);
                const double val8 = image.at<uchar>(i + 2, j + 2);

                //Apply sobel kernels
                const double gx = (-1 * val0) + (-2 * val3) + (-1 * val6) + val2 + (2 * val5) + val8;
                const double gy = (-1 * val0) + (-2 * val1) + (-1 * val2) + val6 + (2 * val7) + val8;
                double mag = sqrt(gx * gx + gy * gy);

                if (mag > 255) {
                    mag = 255;
                }

                edge_image.at<uchar>(i, j) = mag;
            }
        }
        return edge_image;
    }
}
