#include "PluginEditor.h"

namespace audio_plugin {
    AudioPluginAudioProcessorEditor::AudioPluginAudioProcessorEditor(
        AudioPluginAudioProcessor &p) : AudioProcessorEditor(&p),
                                        processorRef(p) {
        setSize(400, 500);
    }

    AudioPluginAudioProcessorEditor::~AudioPluginAudioProcessorEditor() {
    }

    void AudioPluginAudioProcessorEditor::paint(juce::Graphics &g) {
        g.fillAll(juce::Colours::darkgrey);
    }

    void AudioPluginAudioProcessorEditor::resized() {
    }
}
