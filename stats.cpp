#include "stats.h"
#include <limits>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<double>& values ) {
	if (values.empty()) {
		   double nan = std::numeric_limits<double>::quiet_NaN();
		   return Statistics::Stats(nan, nan, nan);
	   }
	
		double sum = 0.0;
		double minVal = values[0];
		double maxVal = values[0];

		for (double val : values) {
			sum += val;
			if (val < minVal) minVal = val;
			if (val > maxVal) maxVal = val;
		}

		double avg = sum / values.size();
		return Statistics::Stats(avg, minVal, maxVal);
}
