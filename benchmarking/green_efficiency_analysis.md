# Green Efficiency Analysis

## Measurement Methodology

To evaluate the efficiency of different algorithms and their potential environmental impact, we conducted a series of timing experiments on three provided C programs: `baseline_loop.c`, `comparison_algorithms.c`, and `instrumentation_lab.c`. Each program was executed three times consecutively to account for variability in execution time. Timing was measured using the `clock()` function from `<time.h>`, and the elapsed CPU cycles were converted to seconds using `CLOCKS_PER_SEC`. This method provides a deterministic measurement of CPU usage for each computation phase, allowing us to establish a reliable baseline for performance comparisons.

In `baseline_loop.c`, a loop of 100,000,000 iterations was executed. The observed times for the three runs were 0.102412 seconds, 0.133655 seconds, and 0.127095 seconds. 

For `comparison_algorithms.c`, two implementations of counting even numbers in an array of size 50,000 were tested. The naive algorithm uses nested loops to repeatedly check all elements up to the current index, while the single-pass algorithm iterates through the array once. Each version was executed three times, and the results were recorded to calculate average execution times. The Naive algorithm averaged 0.419577 seconds, whereas the single-pass approach completed in 0.00000333 seconds on average, highlighting a significant performance difference.

Finally, `instrumentation_lab.c` was executed with phase-level instrumentation, measuring the time to build, process, and reduce a dataset. The dataset size was fixed at 50,000 elements, and the results were recorded in seconds using `clock()` and `CLOCKS_PER_SEC`.


## Observed Performance Differences

The most striking difference was observed in the `comparison_algorithms.c` experiment. The naive algorithm’s average time of 0.419577 seconds is roughly 126,000 times slower than the single-pass algorithm, which averaged 0.00000333 seconds. This massive difference illustrates the impact of algorithmic efficiency: a seemingly small change in loop structure dramatically reduces computation time. 

In the instrumentation experiment, the phases had the following approximate timings: building the dataset took a fraction of a second, processing the dataset was the most time-consuming phase, and reducing the dataset to a checksum required less time than processing but more than building. These measured times confirm that algorithmic complexity directly correlates with execution time.


## Relation Between Runtime and Energy Consumption

Execution time is a practical proxy for energy consumption. Longer CPU usage generally implies more power consumed, as the processor remains active for a longer duration. Therefore, the naive algorithm, with its excessive nested loops, would be far less energy-efficient compared to the single-pass implementation. The instrumentation measurements further suggest that optimization of the processing phase has the highest potential for reducing energy usage. By minimizing CPU cycles in critical sections, developers can achieve “green” gains in computational efficiency, reducing both runtime and energy footprint.


## Limitations of the Experiment

While the measurements provide a clear comparison of execution time, there are notable limitations. First, the energy consumption was inferred from CPU time rather than measured with hardware or software power meters, meaning exact power usage cannot be quantified. Second, the experiments were performed on a single machine with a fixed CPU, so results may differ on other hardware. Third, the dataset size was fixed and relatively small, which limits generalization to larger or more complex datasets. Lastly, external factors such as background processes or operating system scheduling could introduce minor variability.


## Practical Engineering Takeaway

From an engineering perspective, these experiments underscore the importance of algorithmic efficiency. Choosing the right approach can lead to orders-of-magnitude improvements in both execution time and potential energy consumption. For instance, avoiding nested loops when a single-pass solution suffices can drastically reduce computational workload. Additionally, phase-level instrumentation allows engineers to identify performance bottlenecks, guiding targeted optimizations. Ultimately, the combination of measured execution times and careful analysis provides a quantitative basis for developing energy-efficient software, aligning performance optimization with sustainability goals.

**Word count:** 527