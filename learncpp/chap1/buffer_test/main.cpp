#include <iostream>
#include <chrono>
#include <vector>

/* Testing how fast buffered output (\n) compares to non-buffered (std::endl)
 * by executing many couts,
 * printing time taken, difference, and percentage speedup
 */

int main()
{
	std::vector<int> trials {100, 1000, 10000, 100000, 1000000, 10000000};
	std::vector<int> millisecondsTakenUnbuffered {};
	std::vector<int> millisecondsDifference;
	
	for (auto &numTrials : trials) 
	{
		// buffer output by using \n
		auto start = std::chrono::high_resolution_clock::now();
		for (int i = 0; i < numTrials; i++)
		{
			std::cout << "test\n";	
		}
		auto finish = std::chrono::high_resolution_clock::now();
		int bufferedMilliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start).count();
	
		// flush buffer with std::endl
		start = std::chrono::high_resolution_clock::now();
		for (int i = 0; i < numTrials; i++)
		{
			std::cout << "test" << std::endl;
		}
		finish = std::chrono::high_resolution_clock::now();
		int unBufferedMilliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start).count();

		// store results
		
		// add 1 to avoid potential divide by zero
		millisecondsTakenUnbuffered.push_back(unBufferedMilliseconds + 1);
		millisecondsDifference.push_back(unBufferedMilliseconds - bufferedMilliseconds);
	}

	
	// print results
	
	for (int i = 0; i < trials.size(); i++)
	{
		std::cout << trials[i] << " trials:\n";
		std::cout << "Time taken unbuffered: " << millisecondsTakenUnbuffered[i] << "\n";
		std::cout << "Speedup from buffering: " << millisecondsDifference[i] << "\n";
		std::cout << "percentage" << (double)millisecondsDifference[i] / millisecondsTakenUnbuffered[i] * 100 << "%\n\n";
		
	}

	return 0;
}

