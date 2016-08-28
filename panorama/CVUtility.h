#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/nonfree/features2d.hpp>
#include <Eigen/Dense>

void combineMat(cv::Mat &out, const cv::Mat& left, const cv::Mat& right);
void displayMat(const cv::Mat& display);
void getColorSubpixelRGB(const cv::Mat &image, float x, float y, int width, int height, uchar& r, uchar& g, uchar& b);
void detectSiftMatchWithOpenCV(const char* img1_path, const char* img2_path, Eigen::MatrixXf &match);
