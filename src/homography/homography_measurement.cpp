#include "homography/homography_measurement.hpp"

using namespace cv;

HomographyMeasurement::HomographyMeasurement(Point2f src, Point2f dst) : src(src), dst(dst) {}