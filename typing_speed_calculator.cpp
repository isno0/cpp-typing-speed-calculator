#include<iostream>
#include<chrono>
#include<string>

int main(){
    std ::string prompt = "Type the following sentence as fast as you can:\n";
    std::string paragraph = "On quiet mornings, the laptop’s fan hums like a metronome while the cursor blinks with patient resolve, daring the hands to keep a steady rhythm across the keys. Errors arrive as tiny stumbles, yet each corrected word becomes a reminder that speed follows accuracy, not the other way around. Breathe, relax the shoulders, and let the eyes stay one phrase ahead, trusting muscle memory to bridge the distance between thought and text. With practice, sentences begin to flow like a well-tuned algorithm, precise, efficient, and quietly satisfying.\n";

    std::string user_input;

    std::cout << prompt << std::endl;
    std::cout << paragraph << std::endl;

    std::cout << "you can now start typing below , please press Enter when you finish:\n";

    auto start_time = std::chrono::high_resolution_clock::now();

    std::getline(std::cin, user_input);

    auto end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> time_taken = end_time - start_time;
    double seconds_taken = time_taken.count();

    double wpm = (user_input.length()/5.0)/(seconds_taken/60.0);

    std::cout << "it took you " << seconds_taken << " seconds to type.\n";
    std::cout << "Your typing speed is " << wpm << " words per minute.\n";













}


