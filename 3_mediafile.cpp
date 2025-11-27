// Create an abstract class MediaFile with pure virtual function play(). Derive AudioFile and VideoFile and override play(). Demonstrate polymorphism.#include <iostream>
#include<iostream>
using namespace std;

class MediaFile {
public:
    virtual void play() = 0;
};

class AudioFile : public MediaFile {
public:
    void play() override {
        cout << "Playing Audio File" << endl;
    }
};

class VideoFile : public MediaFile {
public:
    void play() override {
        cout << "Playing Video File" << endl;
    }
};

int main() {
    MediaFile* m;

    AudioFile a;
    VideoFile v;

    m = &a;
    m->play();

    m = &v;
    m->play();

    return 0;
}