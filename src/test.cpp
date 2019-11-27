#include <vector>

#include "test_ransac.hpp"
#include "ransac.hpp"

using namespace std;

int main() {
    ransac<TestModel, TestMeasurement, TestComputeModel>(vector<TestMeasurement>());
}