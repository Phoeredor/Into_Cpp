# 🚀 Into C++

My first-year undergraduate C++ projects, from basic syntax and control flow to search algorithms, pointers, and binary file I/O.

---

## 📁 Structure

Each topic folder contains standalone programs. Start with the [program index](#program-index) to find a specific exercise.

| Folder | Topic | Programs |
|--------|-------|---------:|
| [`01_basics/`](01_basics/) | Types, loops, conditionals, and switches | 12 |
| [`02_arrays_and_strings/`](02_arrays_and_strings/) | Arrays, matrices, string comparisons, and range-based loops | 9 |
| [`03_math_and_algorithms/`](03_math_and_algorithms/) | Numerical exercises, sorting, and searching | 21 |
| [`04_pointers_and_memory/`](04_pointers_and_memory/) | Passing values through pointers and references | 2 |
| [`05_file_io/`](05_file_io/) | Text and binary file operations with sample data | 2 |
| [`06_random_numbers/`](06_random_numbers/) | Random values, guessing games, and dice rolls | 4 |

---

## 🔧 Build and run on Linux

Use GNU Make and a compiler with C++17 support. The Makefile uses `g++` by default. Run these commands from the repository root.

```bash
make
./build/03_math_and_algorithms/fibonacci_sequence.out
make clean
```

Executables appear in `build/` under the matching topic. To build a single exercise, pass its executable path to Make.

```bash
make build/02_arrays_and_strings/palindrome_checks.out
```

The file I/O examples take paths as arguments. The bitmap example writes a new copy, so the output path must be available. The sample schedule contains three entries for Calculus II.

```bash
printf '3\n' | ./build/05_file_io/count_schedule_entries.out \
  05_file_io/samples/weekly_schedule.csv

./build/05_file_io/randomize_bitmap_bytes.out \
  05_file_io/samples/sample.bmp build/randomized_sample.bmp
```

---

## Program index

<details>
<summary>01 · Basics</summary>

| Program | What it demonstrates |
|---------|----------------------|
| [`age_check.cpp`](01_basics/age_check.cpp) | Branching on an age and validating its range |
| [`ascii_and_byte_values.cpp`](01_basics/ascii_and_byte_values.cpp) | Printing byte codes as characters, including control bytes |
| [`continuous_counter.cpp`](01_basics/continuous_counter.cpp) | Counting from −18 in a loop that runs until interrupted with Ctrl+C |
| [`even_or_odd.cpp`](01_basics/even_or_odd.cpp) | Using the remainder operator to classify integers |
| [`mass_categories.cpp`](01_basics/mass_categories.cpp) | Classifying a value at fixed thresholds |
| [`print_hello_1000_times.cpp`](01_basics/print_hello_1000_times.cpp) | Printing a numbered greeting 1,000 times |
| [`print_hello_and_pi.cpp`](01_basics/print_hello_and_pi.cpp) | Repeating a greeting alongside a constant |
| [`print_hello_within_bounds.cpp`](01_basics/print_hello_within_bounds.cpp) | Printing greetings from zero through the larger input |
| [`print_one_to_ten.cpp`](01_basics/print_one_to_ten.cpp) | Using a counted loop |
| [`print_pi.cpp`](01_basics/print_pi.cpp) | Printing numbered copies of pi |
| [`switch_choices.cpp`](01_basics/switch_choices.cpp) | Mapping lowercase keys to switch cases |
| [`type_sizes_and_limits.cpp`](01_basics/type_sizes_and_limits.cpp) | Inspecting byte sizes and numeric bounds on the current platform |

</details>

<details>
<summary>02 · Arrays and strings</summary>

| Program | What it demonstrates |
|---------|----------------------|
| [`array_extrema.cpp`](02_arrays_and_strings/array_extrema.cpp) | Reporting extrema and all their positions in a fixed array |
| [`hobby_list_with_flag.cpp`](02_arrays_and_strings/hobby_list_with_flag.cpp) | Reading a bounded list and stopping with a boolean flag |
| [`hobby_list_with_sentinel.cpp`](02_arrays_and_strings/hobby_list_with_sentinel.cpp) | Letting the stop marker participate in the loop condition |
| [`matrix_row_filter.cpp`](02_arrays_and_strings/matrix_row_filter.cpp) | Traversing a matrix and masking even values in one row |
| [`palindrome_checks.cpp`](02_arrays_and_strings/palindrome_checks.cpp) | Comparing the outer characters of one word and all mirrored pairs of another |
| [`range_based_for.cpp`](02_arrays_and_strings/range_based_for.cpp) | Iterating by value, reference, and const reference |
| [`river_lookup_with_sentinel.cpp`](02_arrays_and_strings/river_lookup_with_sentinel.cpp) | Searching parallel arrays with a sentinel slot |
| [`substring_comparison.cpp`](02_arrays_and_strings/substring_comparison.cpp) | Comparing slices of two strings with `std::string::compare` |
| [`vowel_or_consonant.cpp`](02_arrays_and_strings/vowel_or_consonant.cpp) | Classifying a letter with direct comparisons and string lookup |

</details>

<details>
<summary>03 · Math and algorithms</summary>

| Program | What it demonstrates |
|---------|----------------------|
| [`arithmetic_progression.cpp`](03_math_and_algorithms/arithmetic_progression.cpp) | Comparing successive differences between three numbers |
| [`average_of_three.cpp`](03_math_and_algorithms/average_of_three.cpp) | Comparing integer and floating-point averages |
| [`binary_search_index.cpp`](03_math_and_algorithms/binary_search_index.cpp) | Bubble-sorting a vector and returning an index in the sorted data |
| [`binary_search_with_dynamic_array.cpp`](03_math_and_algorithms/binary_search_with_dynamic_array.cpp) | Testing membership in a sorted, dynamically allocated array |
| [`bubble_sort_descending.cpp`](03_math_and_algorithms/bubble_sort_descending.cpp) | Sorting floating-point values in descending order |
| [`euro_dollar_comparison.cpp`](03_math_and_algorithms/euro_dollar_comparison.cpp) | Comparing currency amounts at a fixed rate with a tolerance |
| [`euro_to_dollar_converter.cpp`](03_math_and_algorithms/euro_to_dollar_converter.cpp) | Converting an amount with a user-supplied integer rate |
| [`fibonacci_sequence.cpp`](03_math_and_algorithms/fibonacci_sequence.cpp) | Generating successive terms from the two previous values |
| [`integers_in_range.cpp`](03_math_and_algorithms/integers_in_range.cpp) | Printing all integers between two endpoints |
| [`leap_year.cpp`](03_math_and_algorithms/leap_year.cpp) | Applying the Gregorian leap-year rules |
| [`linear_search_with_dynamic_array.cpp`](03_math_and_algorithms/linear_search_with_dynamic_array.cpp) | Testing membership by scanning an array in order |
| [`maximum_of_three.cpp`](03_math_and_algorithms/maximum_of_three.cpp) | Identifying ties and computing the maximum in two ways |
| [`multiples_of_seven_in_range.cpp`](03_math_and_algorithms/multiples_of_seven_in_range.cpp) | Filtering an inclusive interval by divisibility |
| [`next_day_on_another_planet.cpp`](03_math_and_algorithms/next_day_on_another_planet.cpp) | Rolling a date forward in an 18-month calendar |
| [`point_on_x_axis.cpp`](03_math_and_algorithms/point_on_x_axis.cpp) | Parsing an integer and locating it relative to a fixed point |
| [`prime_check.cpp`](03_math_and_algorithms/prime_check.cpp) | Trying candidate divisors |
| [`range_membership.cpp`](03_math_and_algorithms/range_membership.cpp) | Testing whether a real number lies in a closed interval |
| [`selection_sort.cpp`](03_math_and_algorithms/selection_sort.cpp) | Finding and moving the next minimum in a fixed array |
| [`sort_three_integers.cpp`](03_math_and_algorithms/sort_three_integers.cpp) | Ordering three inputs with pairwise swaps |
| [`summation_until_plus.cpp`](03_math_and_algorithms/summation_until_plus.cpp) | Accumulating values until the `+` stop marker |
| [`triangle_classification.cpp`](03_math_and_algorithms/triangle_classification.cpp) | Comparing side lengths to classify a triangle |

</details>

<details>
<summary>04 · Pointers and memory</summary>

| Program | What it demonstrates |
|---------|----------------------|
| [`stream_extrema_through_pointers.cpp`](04_pointers_and_memory/stream_extrema_through_pointers.cpp) | Returning two extrema through pointer parameters |
| [`swap_by_reference.cpp`](04_pointers_and_memory/swap_by_reference.cpp) | Swapping variables through reference parameters |

</details>

<details>
<summary>05 · File I/O</summary>

| Program | What it demonstrates |
|---------|----------------------|
| [`count_schedule_entries.cpp`](05_file_io/count_schedule_entries.cpp) | Reading a schedule line by line and counting subject names |
| [`randomize_bitmap_bytes.cpp`](05_file_io/randomize_bitmap_bytes.cpp) | Seeking to an offset in a binary file and modifying a byte range |

</details>

<details>
<summary>06 · Random numbers</summary>

| Program | What it demonstrates |
|---------|----------------------|
| [`computer_guesses_number.cpp`](06_random_numbers/computer_guesses_number.cpp) | Narrowing a random guessing interval over ten attempts |
| [`fill_array_with_random_numbers.cpp`](06_random_numbers/fill_array_with_random_numbers.cpp) | Filling an array through references in a range-based loop |
| [`guess_random_number.cpp`](06_random_numbers/guess_random_number.cpp) | Repeating guesses until they match a generated target |
| [`roll_all_die_faces.cpp`](06_random_numbers/roll_all_die_faces.cpp) | Tracking which die faces have appeared |

</details>

---

## 📖 About

I wrote these projects during the first year of my bachelor's degree. Some were exercises for the computer science course, and others were experiments I wrote on my own to learn C++. Each program focuses on one small problem and can be built and run on its own.

The source comments point out several original choices that affect results. For example, the prime exercise accepts numbers below two, the triangle exercise passes when any of its three inequalities holds, and the pointer-based minimum starts at zero. The summation draft was completed using the `+` sentinel advertised in its prompt.

The range-based loop exercise is adapted from [Microsoft Learn's range-based `for` example](https://learn.microsoft.com/en-us/cpp/cpp/range-based-for-statement-cpp?view=msvc-170).
