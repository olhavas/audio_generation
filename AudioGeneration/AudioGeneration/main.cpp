//
//  main.cpp
//  AudioGeneration
//
//  Created by Olha Vasylyshyn on 16/01/2025.
//

#include <torch/torch.h>
#include <torch/script.h>
//#include <essentia/algorithmfactory.h>
//#include <essentia/essentia.h>
//#include <essentia/streaming/algorithm.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "options.h"




// Function to load a WAV file and extract melody features
//std::vector<float> extractMelodyFeatures(const std::string& filename) {
//    
//}



int main(int argc, const char * argv[]) {
    auto tensor =torch::rand({3,3});
    std::cout<<"Tensor\n"<< tensor<<"\n";
    const std::string inputAudio = "hummed_melody.wav";
   // const std::string modelPath = "music_generator.pt";
   // const std::string outputMIDI = "generated_music.mid";
   // const std::string outputSheetMusic = "sheet_music.xml";
     
     // Prompt user for instrument choice
     std::cout << "Choose an instrument:\n";
     std::cout << "1. Piano\n2. Guitar (Acoustic)\n3. Violin\n4. Flute\n";
     std::cout << "5. Electric Guitar\n6. Bass Guitar\n7. Drums\n";
     int instrumentID;
     std::cin >> instrumentID;
    
    
     
    switch(static_cast<Instrument>(instrumentID))
    {
         case Instrument::PIANO:
             //here is midiinstrument choice. Class with audio information is needed.
             break;
         case Instrument::GUITAR:
             
             break;
         case Instrument::VIOLIN:
             
             break;
         case Instrument::FLUTE:
             
             break;
         case Instrument::ELECTRIC_GUITAR:
             
             break;
         case Instrument::ELECTRIC_BASS:
             
             break;
         case Instrument::DRUMS:
             break;
         default:
             //piano
             break;
    }
     


     
  
     // Step 1: Extract melody features from audio
    // std::vector<float> melodyFeatures = extractMelodyFeatures(inputAudio);
     
//     if (melodyFeatures.empty()) {
//     std::cerr << "Failed to extract melody features\n";
//     return -1;
//     }
     
    
     
     
    return 0;
}
