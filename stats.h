#include <vector>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
struct Stats
{
	double average;
	double min;
	double max;
	Stats(double avg = 0.0, double minVal = 0.0, double maxVal = 0.0)
		   : average(avg), min(minVal), max(maxVal) {}
};
    
    Stats ComputeStatistics(const std::vector<double>& );
}
