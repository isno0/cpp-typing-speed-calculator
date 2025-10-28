#include<iostream>
#include<chrono>
#include<string>
//Calculates the accuracy of the user's input compared to the original paragraph
double accuracy(const std::string& paragraph , const std::string& user_input){
    int correct = 0;
    for(int i =0 ; i<user_input.length();i++){
        if(user_input[i] == paragraph[i]){
            correct++;
        }
    }
    //Calculates accuracy as a percentage
    double accuracy = (static_cast<double>(correct) / user_input.length()) * 100.0; 
    return accuracy;
}


int main(){
    std ::string prompt = "Type the following sentence as fast as you can:\n"; //Prompts the user to type the given paragraph
    std::string paragraph = "On quiet mornings, the laptop’s fan hums like a metronome while the cursor blinks with patient resolve, daring the hands to keep a steady rhythm across the keys. Errors arrive as tiny stumbles, yet each corrected word becomes a reminder that speed follows accuracy, not the other way around. Breathe, relax the shoulders, and let the eyes stay one phrase ahead, trusting muscle memory to bridge the distance between thought and text. With practice, sentences begin to flow like a well-tuned algorithm, precise, efficient, and quietly satisfying.\n";
                            //the paragraph on which the typing speed is calculated
    std::string user_input; // empty string to store the user's input

    std::cout << prompt << std::endl; 
    std::cout << paragraph << std::endl;

    std::cout << "you can now start typing below , please press Enter when you finish:\n";

    auto start_time = std::chrono::high_resolution_clock::now(); // Starts the timer 

    std::getline(std::cin, user_input); //Pauses the program and waits for the user's input

    auto end_time = std::chrono::high_resolution_clock::now(); // Ends the timer

    std::chrono::duration<double> time_taken = end_time - start_time; // Calculates the time taken to type the paragraph
    double seconds_taken = time_taken.count(); 

    double wpm = (user_input.length()/5.0)/(seconds_taken/60.0); //Calculates the Words Per Minute (WPM)

    std::cout << "it took you " << seconds_taken << " seconds to type.\n";
    std::cout << "Your typing speed is " << wpm << " words per minute.\n";
    std::cout<<"your accuracy is >>";
    std::cout << accuracy(paragraph, user_input) << "%\n";













}


