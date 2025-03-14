//
//  options.h
//  AudioGeneration
//
//  Created by Olha Vasylyshyn on 16/01/2025.
//

#ifndef options_h
#define options_h


enum MIDIInstrumentID
{
    AcousticGrandPiano = 1,  // Acoustic Grand Piano
    AcousticGuitar = 25, // Acoustic Guitar (Steel)
    ElectricGuitar = 30, // Electric Guitar (Clean)
    ElectricBass = 33,  // Electric Bass (Finger)
    Violin = 41,  // Violin
    Flute = 74,  // Flute
    Drums = 128  // Drums (Channel 10)
};

enum Instrument
{
    PIANO=1,
    GUITAR,    
    VIOLIN,
    FLUTE,
    ELECTRIC_GUITAR,
    ELECTRIC_BASS,
    DRUMS
};

#endif /* options_h */
