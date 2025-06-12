#include <iostream>
#include <array>
#include <numeric>

// Function to print the contents of an integer array
void print_array(const int arr[], size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << "arr[" << i << "] : " << arr[i] << std::endl;
    }
}

int main()
{

    // Declare an array of ints
    //  int scores [10]; // Junk data

    // Read data

    // std:: cout << " scores [0] : " << scores[0] << std::endl;
    // std:: cout << " scores [1] : " << scores[1] << std::endl;

    // Read with a loop
    /*
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    */

    /*
     scores[0] = 20;
     scores[1] = 21;
     scores[2] = 22;

     //Print the data out
     for( size_t i {0} ; i < 10 ; ++i){
         std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
     }
     */

    // Write data in a loop
    /*
    for(size_t i{0}; i < 10 ; ++i){
        scores[i] = i * 10;
    }

     //Print the data out
     for( size_t i {0} ; i < 10 ; ++i){
         std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
     }
     */

    // Declare and initialize at the same time
    /*
    double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

    for(size_t i{0}; i < 5; ++i){
        std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
    }
    */

    // If you don't initialize all the elements, those you leave out
    // are initialized to 0
    /*
    int families[5] {12, 7, 5};

    for(size_t i{0}; i < 5; ++i){
        std::cout << "families[" << i << "] : " << families[i] << std::endl;
    }
    */

    // Omit the size of the array at declaration
    /*
     int class_sizes[] {10,12,15,11,18,17,23,56};

     // Will print this with a range based for loop
     for(auto value : class_sizes){
         std::cout << "value : " << value << std::endl;
     }
     */

    // Read only arrays
    /*
    const int birds[] {10,12,15,11,18,17,23,56};
    birds[2] = 8;
    */

    // Sum up scores array, store result in sum

    int scores[]{2, 5, 8, 2, 5, 6, 9};
    int sum{0};

    // Print the contents of the scores array
    print_array(scores, sizeof(scores) / sizeof(scores[0]));

    for (int element : scores)
    {
        sum += element;
    }
    std::cout << "Score sum : " << sum << std::endl;

    // Example: Using std::array to create and reduce an integer array
    std::array<int, 7> arr{{2, 5, 8, 2, 5, 6, 9}};
    int arr_sum = std::accumulate(arr.begin(), arr.end(), 0);
    std::cout << "std::array contents:" << std::endl;
    for (size_t i = 0; i < arr.size(); ++i)
    {
        std::cout << "arr[" << i << "] : " << arr[i] << std::endl;
    }
    std::cout << "std::array sum : " << arr_sum << std::endl;

    return 0;
}