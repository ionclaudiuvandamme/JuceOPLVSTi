/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginGui.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
void PluginGui::updateFromParameters()
{
	sineImageButton->setToggleState(false, false);
	halfsineImageButton->setToggleState(false, false);
	abssineImageButton->setToggleState(false, false);
	quartersineImageButton->setToggleState(false, false);
	alternatingsineImageButton->setToggleState(false, false);
	camelsineImageButton->setToggleState(false, false);
	squareImageButton->setToggleState(false, false);
	logsawImageButton->setToggleState(false, false);
	switch(processor->getEnumParameter("Modulator Wave")) {
		case 0: sineImageButton->setToggleState(true, false); break;
		case 1: halfsineImageButton->setToggleState(true, false); break;
		case 2: abssineImageButton->setToggleState(true, false); break;
		case 3: quartersineImageButton->setToggleState(true, false); break;
		case 4: alternatingsineImageButton->setToggleState(true, false); break;
		case 5: camelsineImageButton->setToggleState(true, false); break;
		case 6: squareImageButton->setToggleState(true, false); break;
		case 7: logsawImageButton->setToggleState(true, false); break;

	}
	sineImageButton2->setToggleState(false, false);
	halfsineImageButton2->setToggleState(false, false);
	abssineImageButton2->setToggleState(false, false);
	quartersineImageButton2->setToggleState(false, false);
	alternatingsineImageButton2->setToggleState(false, false);
	camelsineImageButton2->setToggleState(false, false);
	squareImageButton2->setToggleState(false, false);
	logsawImageButton2->setToggleState(false, false);
	switch(processor->getEnumParameter("Carrier Wave")) {
		case 0: sineImageButton2->setToggleState(true, false); break;
		case 1: halfsineImageButton2->setToggleState(true, false); break;
		case 2: abssineImageButton2->setToggleState(true, false); break;
		case 3: quartersineImageButton2->setToggleState(true, false); break;
		case 4: alternatingsineImageButton2->setToggleState(true, false); break;
		case 5: camelsineImageButton2->setToggleState(true, false); break;
		case 6: squareImageButton2->setToggleState(true, false); break;
		case 7: logsawImageButton2->setToggleState(true, false); break;
	}

	frequencyComboBox->setSelectedItemIndex(processor->getEnumParameter("Modulator Frequency Multiplier"), true);
	frequencyComboBox2->setSelectedItemIndex(processor->getEnumParameter("Carrier Frequency Multiplier"), true);

	attenuationSlider->setValue(processor->getEnumParameter("Modulator Attenuation") * -0.75, NotificationType::dontSendNotification);
	attenuationSlider2->setValue(processor->getEnumParameter("Carrier Attenuation") * -0.75, NotificationType::dontSendNotification);

	aSlider->setValue(processor->getIntParameter("Modulator Attack"), NotificationType::dontSendNotification);
	dSlider->setValue(processor->getIntParameter("Modulator Decay"), NotificationType::dontSendNotification);
	sSlider->setValue(processor->getIntParameter("Modulator Sustain Level"), NotificationType::dontSendNotification);
	rSlider->setValue(processor->getIntParameter("Modulator Release"), NotificationType::dontSendNotification);
	aSlider2->setValue(processor->getIntParameter("Carrier Attack"), NotificationType::dontSendNotification);
	dSlider2->setValue(processor->getIntParameter("Carrier Decay"), NotificationType::dontSendNotification);
	sSlider2->setValue(processor->getIntParameter("Carrier Sustain Level"), NotificationType::dontSendNotification);
	rSlider2->setValue(processor->getIntParameter("Carrier Release"), NotificationType::dontSendNotification);

	keyscaleAttenuationComboBox->setSelectedItemIndex(processor->getEnumParameter("Modulator Keyscale Level"), true);
	keyscaleAttenuationComboBox2->setSelectedItemIndex(processor->getEnumParameter("Carrier Keyscale Level"), true);


	if (processor->getEnumParameter("Modulator Tremolo")) tremoloButton->setToggleState(true, false);
	if (processor->getEnumParameter("Modulator Vibrato")) vibratoButton->setToggleState(true, false);
	if (processor->getEnumParameter("Modulator Sustain")) sustainButton->setToggleState(true, false);
	if (processor->getEnumParameter("Modulator Keyscale Rate")) keyscaleEnvButton->setToggleState(true, false);

	if (processor->getEnumParameter("Carrier Tremolo")) tremoloButton2->setToggleState(true, false);
	if (processor->getEnumParameter("Carrier Vibrato")) vibratoButton2->setToggleState(true, false);
	if (processor->getEnumParameter("Carrier Sustain")) sustainButton2->setToggleState(true, false);
	if (processor->getEnumParameter("Carrier Keyscale Rate")) keyscaleEnvButton2->setToggleState(true, false);

	vibratoSlider->setValue(processor->getEnumParameter("Vibrato Depth") * 7.0 + 7.0, NotificationType::dontSendNotification);
	tremoloSlider->setValue(processor->getEnumParameter("Tremolo Depth") * 3.8 + 1.0, NotificationType::dontSendNotification);
	feedbackSlider->setValue(processor->getIntParameter("Modulator Feedback"), NotificationType::dontSendNotification);

	velocityComboBox->setSelectedItemIndex(processor->getEnumParameter("Modulator Velocity Sensitivity"), true);
	velocityComboBox2->setSelectedItemIndex(processor->getEnumParameter("Carrier Velocity Sensitivity"), true);

	algorithmComboBox->setSelectedItemIndex(processor->getEnumParameter("Algorithm"), true);

}
//[/MiscUserDefs]

//==============================================================================
PluginGui::PluginGui (JuceOplvstiAudioProcessor* ownerFilter)
    : AudioProcessorEditor (ownerFilter)
{
    addAndMakeVisible (groupComponent = new GroupComponent ("new group",
                                                            "Modulator"));
    groupComponent->setTextLabelPosition (Justification::centredLeft);
    groupComponent->setColour (GroupComponent::outlineColourId, Colour (0xff007f00));
    groupComponent->setColour (GroupComponent::textColourId, Colour (0xff007f00));

    addAndMakeVisible (frequencyComboBox = new ComboBox ("frequency combo box"));
    frequencyComboBox->setEditableText (false);
    frequencyComboBox->setJustificationType (Justification::centredLeft);
    frequencyComboBox->setTextWhenNothingSelected (String::empty);
    frequencyComboBox->setTextWhenNoChoicesAvailable ("(no choices)");
    frequencyComboBox->addListener (this);

    addAndMakeVisible (frequencyLabel = new Label ("frequency label",
                                                   "Frequency"));
    frequencyLabel->setFont (Font (15.00f, Font::plain));
    frequencyLabel->setJustificationType (Justification::centredLeft);
    frequencyLabel->setEditable (false, false, false);
    frequencyLabel->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (aSlider = new Slider ("a slider"));
    aSlider->setTooltip ("Envelope attack rate");
    aSlider->setRange (0, 15, 1);
    aSlider->setSliderStyle (Slider::LinearVertical);
    aSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    aSlider->setColour (Slider::thumbColourId, Colour (0xff00af00));
    aSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    aSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    aSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    aSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    aSlider->addListener (this);

    addAndMakeVisible (aLabel = new Label ("a label",
                                           "A"));
    aLabel->setFont (Font (15.00f, Font::plain));
    aLabel->setJustificationType (Justification::centred);
    aLabel->setEditable (false, false, false);
    aLabel->setColour (Label::textColourId, Colour (0xff007f00));
    aLabel->setColour (TextEditor::textColourId, Colours::black);
    aLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dSlider = new Slider ("d slider"));
    dSlider->setTooltip ("Envelope decay rate");
    dSlider->setRange (0, 15, 1);
    dSlider->setSliderStyle (Slider::LinearVertical);
    dSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    dSlider->setColour (Slider::thumbColourId, Colour (0xff00af00));
    dSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    dSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    dSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    dSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    dSlider->addListener (this);

    addAndMakeVisible (dLabel = new Label ("d label",
                                           "D"));
    dLabel->setFont (Font (15.00f, Font::plain));
    dLabel->setJustificationType (Justification::centred);
    dLabel->setEditable (false, false, false);
    dLabel->setColour (Label::textColourId, Colour (0xff007f00));
    dLabel->setColour (TextEditor::textColourId, Colours::black);
    dLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sSlider = new Slider ("s slider"));
    sSlider->setTooltip ("Envelope sustain level");
    sSlider->setRange (0, 15, 1);
    sSlider->setSliderStyle (Slider::LinearVertical);
    sSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    sSlider->setColour (Slider::thumbColourId, Colour (0xff00af00));
    sSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    sSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    sSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    sSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    sSlider->addListener (this);

    addAndMakeVisible (dLabel2 = new Label ("d label",
                                            "S"));
    dLabel2->setFont (Font (15.00f, Font::plain));
    dLabel2->setJustificationType (Justification::centred);
    dLabel2->setEditable (false, false, false);
    dLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    dLabel2->setColour (TextEditor::textColourId, Colours::black);
    dLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (rSlider = new Slider ("r slider"));
    rSlider->setTooltip ("Envelope release rate");
    rSlider->setRange (0, 15, 1);
    rSlider->setSliderStyle (Slider::LinearVertical);
    rSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    rSlider->setColour (Slider::thumbColourId, Colour (0xff00af00));
    rSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    rSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    rSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    rSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    rSlider->addListener (this);

    addAndMakeVisible (rLabel = new Label ("r label",
                                           "R"));
    rLabel->setFont (Font (15.00f, Font::plain));
    rLabel->setJustificationType (Justification::centred);
    rLabel->setEditable (false, false, false);
    rLabel->setColour (Label::textColourId, Colour (0xff007f00));
    rLabel->setColour (TextEditor::textColourId, Colours::black);
    rLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (attenuationSlider = new Slider ("attenuation slider"));
    attenuationSlider->setRange (-47.25, 0, 0.75);
    attenuationSlider->setSliderStyle (Slider::LinearVertical);
    attenuationSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 64, 20);
    attenuationSlider->setColour (Slider::thumbColourId, Colour (0xff00af00));
    attenuationSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    attenuationSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    attenuationSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    attenuationSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    attenuationSlider->addListener (this);

    addAndMakeVisible (attenuationLabel = new Label ("attenuation label",
                                                     "Attenuation"));
    attenuationLabel->setFont (Font (15.00f, Font::plain));
    attenuationLabel->setJustificationType (Justification::centred);
    attenuationLabel->setEditable (false, false, false);
    attenuationLabel->setColour (Label::textColourId, Colour (0xff007f00));
    attenuationLabel->setColour (TextEditor::textColourId, Colours::black);
    attenuationLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dbLabel = new Label ("db label",
                                            "dB"));
    dbLabel->setFont (Font (15.00f, Font::plain));
    dbLabel->setJustificationType (Justification::centred);
    dbLabel->setEditable (false, false, false);
    dbLabel->setColour (Label::textColourId, Colour (0xff007f00));
    dbLabel->setColour (Label::outlineColourId, Colour (0x00000000));
    dbLabel->setColour (TextEditor::textColourId, Colours::black);
    dbLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sineImageButton = new ImageButton ("sine image button"));
    sineImageButton->setTooltip ("sine");
    sineImageButton->setButtonText ("Sine");
    sineImageButton->setRadioGroupId (1);
    sineImageButton->addListener (this);

    sineImageButton->setImages (false, true, true,
                                ImageCache::getFromMemory (full_sine_png, full_sine_pngSize), 0.500f, Colour (0x00000000),
                                Image(), 0.500f, Colour (0x00000000),
                                Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (halfsineImageButton = new ImageButton ("half sine image button"));
    halfsineImageButton->setTooltip ("half sine");
    halfsineImageButton->setButtonText ("Half Sine");
    halfsineImageButton->setRadioGroupId (1);
    halfsineImageButton->addListener (this);

    halfsineImageButton->setImages (false, true, true,
                                    ImageCache::getFromMemory (half_sine_png, half_sine_pngSize), 0.500f, Colour (0x00000000),
                                    Image(), 0.500f, Colour (0x00000000),
                                    Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (abssineImageButton = new ImageButton ("abs sine image button"));
    abssineImageButton->setTooltip ("abs sine");
    abssineImageButton->setButtonText ("Abs Sine");
    abssineImageButton->setRadioGroupId (1);
    abssineImageButton->addListener (this);

    abssineImageButton->setImages (false, true, true,
                                   ImageCache::getFromMemory (abs_sine_png, abs_sine_pngSize), 0.500f, Colour (0x00000000),
                                   Image(), 0.500f, Colour (0x00000000),
                                   Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (quartersineImageButton = new ImageButton ("quarter sine image button"));
    quartersineImageButton->setTooltip ("quarter sine");
    quartersineImageButton->setButtonText ("Quarter Sine");
    quartersineImageButton->setRadioGroupId (1);
    quartersineImageButton->addListener (this);

    quartersineImageButton->setImages (false, true, true,
                                       ImageCache::getFromMemory (quarter_sine_png, quarter_sine_pngSize), 0.500f, Colour (0x00000000),
                                       Image(), 0.500f, Colour (0x00000000),
                                       Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (waveLabel = new Label ("wave label",
                                              "Wave"));
    waveLabel->setFont (Font (15.00f, Font::plain));
    waveLabel->setJustificationType (Justification::centredLeft);
    waveLabel->setEditable (false, false, false);
    waveLabel->setColour (Label::textColourId, Colour (0xff007f00));
    waveLabel->setColour (TextEditor::textColourId, Colours::black);
    waveLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (tremoloButton = new ToggleButton ("tremolo button"));
    tremoloButton->setButtonText ("Tremolo");
    tremoloButton->addListener (this);
    tremoloButton->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (vibratoButton = new ToggleButton ("vibrato button"));
    vibratoButton->setButtonText ("Vibrato");
    vibratoButton->addListener (this);
    vibratoButton->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (sustainButton = new ToggleButton ("sustain button"));
    sustainButton->setButtonText ("Sustain");
    sustainButton->addListener (this);
    sustainButton->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (keyscaleEnvButton = new ToggleButton ("keyscale env button"));
    keyscaleEnvButton->setButtonText ("Keyscale Envelope Rate");
    keyscaleEnvButton->addListener (this);
    keyscaleEnvButton->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (frequencyLabel2 = new Label ("frequency label",
                                                    "Keyscale Attenuation"));
    frequencyLabel2->setFont (Font (15.00f, Font::plain));
    frequencyLabel2->setJustificationType (Justification::centred);
    frequencyLabel2->setEditable (false, false, false);
    frequencyLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel2->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dbLabel2 = new Label ("db label",
                                             "dB/8ve\n"));
    dbLabel2->setFont (Font (15.00f, Font::plain));
    dbLabel2->setJustificationType (Justification::centred);
    dbLabel2->setEditable (false, false, false);
    dbLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    dbLabel2->setColour (Label::outlineColourId, Colour (0x00000000));
    dbLabel2->setColour (TextEditor::textColourId, Colours::black);
    dbLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (groupComponent2 = new GroupComponent ("new group",
                                                             "Carrier"));
    groupComponent2->setTextLabelPosition (Justification::centredLeft);
    groupComponent2->setColour (GroupComponent::outlineColourId, Colour (0xff007f00));
    groupComponent2->setColour (GroupComponent::textColourId, Colour (0xff007f00));

    addAndMakeVisible (frequencyComboBox2 = new ComboBox ("frequency combo box"));
    frequencyComboBox2->setEditableText (false);
    frequencyComboBox2->setJustificationType (Justification::centredLeft);
    frequencyComboBox2->setTextWhenNothingSelected (String::empty);
    frequencyComboBox2->setTextWhenNoChoicesAvailable ("(no choices)");
    frequencyComboBox2->addListener (this);

    addAndMakeVisible (frequencyLabel3 = new Label ("frequency label",
                                                    "Frequency"));
    frequencyLabel3->setFont (Font (15.00f, Font::plain));
    frequencyLabel3->setJustificationType (Justification::centredLeft);
    frequencyLabel3->setEditable (false, false, false);
    frequencyLabel3->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel3->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (aSlider2 = new Slider ("a slider"));
    aSlider2->setRange (0, 15, 1);
    aSlider2->setSliderStyle (Slider::LinearVertical);
    aSlider2->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    aSlider2->setColour (Slider::thumbColourId, Colour (0xff00af00));
    aSlider2->setColour (Slider::trackColourId, Colour (0x7f007f00));
    aSlider2->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    aSlider2->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    aSlider2->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    aSlider2->addListener (this);

    addAndMakeVisible (aLabel2 = new Label ("a label",
                                            "A"));
    aLabel2->setFont (Font (15.00f, Font::plain));
    aLabel2->setJustificationType (Justification::centred);
    aLabel2->setEditable (false, false, false);
    aLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    aLabel2->setColour (TextEditor::textColourId, Colours::black);
    aLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dSlider2 = new Slider ("d slider"));
    dSlider2->setRange (0, 15, 1);
    dSlider2->setSliderStyle (Slider::LinearVertical);
    dSlider2->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    dSlider2->setColour (Slider::thumbColourId, Colour (0xff00af00));
    dSlider2->setColour (Slider::trackColourId, Colour (0x7f007f00));
    dSlider2->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    dSlider2->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    dSlider2->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    dSlider2->addListener (this);

    addAndMakeVisible (dLabel3 = new Label ("d label",
                                            "D"));
    dLabel3->setFont (Font (15.00f, Font::plain));
    dLabel3->setJustificationType (Justification::centred);
    dLabel3->setEditable (false, false, false);
    dLabel3->setColour (Label::textColourId, Colour (0xff007f00));
    dLabel3->setColour (TextEditor::textColourId, Colours::black);
    dLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sSlider2 = new Slider ("s slider"));
    sSlider2->setRange (0, 15, 1);
    sSlider2->setSliderStyle (Slider::LinearVertical);
    sSlider2->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    sSlider2->setColour (Slider::thumbColourId, Colour (0xff00af00));
    sSlider2->setColour (Slider::trackColourId, Colour (0x7f007f00));
    sSlider2->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    sSlider2->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    sSlider2->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    sSlider2->addListener (this);

    addAndMakeVisible (dLabel4 = new Label ("d label",
                                            "S"));
    dLabel4->setFont (Font (15.00f, Font::plain));
    dLabel4->setJustificationType (Justification::centred);
    dLabel4->setEditable (false, false, false);
    dLabel4->setColour (Label::textColourId, Colour (0xff007f00));
    dLabel4->setColour (TextEditor::textColourId, Colours::black);
    dLabel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (rSlider2 = new Slider ("r slider"));
    rSlider2->setRange (0, 15, 1);
    rSlider2->setSliderStyle (Slider::LinearVertical);
    rSlider2->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    rSlider2->setColour (Slider::thumbColourId, Colour (0xff00af00));
    rSlider2->setColour (Slider::trackColourId, Colour (0x7f007f00));
    rSlider2->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    rSlider2->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    rSlider2->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    rSlider2->addListener (this);

    addAndMakeVisible (rLabel2 = new Label ("r label",
                                            "R"));
    rLabel2->setFont (Font (15.00f, Font::plain));
    rLabel2->setJustificationType (Justification::centred);
    rLabel2->setEditable (false, false, false);
    rLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    rLabel2->setColour (TextEditor::textColourId, Colours::black);
    rLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (attenuationSlider2 = new Slider ("attenuation slider"));
    attenuationSlider2->setRange (-47.25, 0, 0.75);
    attenuationSlider2->setSliderStyle (Slider::LinearVertical);
    attenuationSlider2->setTextBoxStyle (Slider::TextBoxBelow, false, 64, 20);
    attenuationSlider2->setColour (Slider::thumbColourId, Colour (0xff00af00));
    attenuationSlider2->setColour (Slider::trackColourId, Colour (0x7f007f00));
    attenuationSlider2->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    attenuationSlider2->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    attenuationSlider2->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    attenuationSlider2->addListener (this);

    addAndMakeVisible (attenuationLabel2 = new Label ("attenuation label",
                                                      "Attenuation"));
    attenuationLabel2->setFont (Font (15.00f, Font::plain));
    attenuationLabel2->setJustificationType (Justification::centred);
    attenuationLabel2->setEditable (false, false, false);
    attenuationLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    attenuationLabel2->setColour (TextEditor::textColourId, Colours::black);
    attenuationLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dbLabel3 = new Label ("db label",
                                             "dB"));
    dbLabel3->setFont (Font (15.00f, Font::plain));
    dbLabel3->setJustificationType (Justification::centred);
    dbLabel3->setEditable (false, false, false);
    dbLabel3->setColour (Label::textColourId, Colour (0xff007f00));
    dbLabel3->setColour (Label::outlineColourId, Colour (0x00000000));
    dbLabel3->setColour (TextEditor::textColourId, Colours::black);
    dbLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sineImageButton2 = new ImageButton ("sine image button"));
    sineImageButton2->setTooltip ("sine");
    sineImageButton2->setButtonText ("Sine");
    sineImageButton2->setRadioGroupId (2);
    sineImageButton2->addListener (this);

    sineImageButton2->setImages (false, true, true,
                                 ImageCache::getFromMemory (full_sine_png, full_sine_pngSize), 0.500f, Colour (0x00000000),
                                 Image(), 0.500f, Colour (0x00000000),
                                 Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (halfsineImageButton2 = new ImageButton ("half sine image button"));
    halfsineImageButton2->setTooltip ("half sine");
    halfsineImageButton2->setButtonText ("Half Sine");
    halfsineImageButton2->setRadioGroupId (2);
    halfsineImageButton2->addListener (this);

    halfsineImageButton2->setImages (false, true, true,
                                     ImageCache::getFromMemory (half_sine_png, half_sine_pngSize), 0.500f, Colour (0x00000000),
                                     Image(), 0.500f, Colour (0x00000000),
                                     Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (abssineImageButton2 = new ImageButton ("abs sine image button"));
    abssineImageButton2->setTooltip ("abs sine");
    abssineImageButton2->setButtonText ("Abs Sine");
    abssineImageButton2->setRadioGroupId (2);
    abssineImageButton2->addListener (this);

    abssineImageButton2->setImages (false, true, true,
                                    ImageCache::getFromMemory (abs_sine_png, abs_sine_pngSize), 0.500f, Colour (0x00000000),
                                    Image(), 0.500f, Colour (0x00000000),
                                    Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (quartersineImageButton2 = new ImageButton ("quarter sine image button"));
    quartersineImageButton2->setTooltip ("quarter sine");
    quartersineImageButton2->setButtonText ("Quarter Sine");
    quartersineImageButton2->setRadioGroupId (2);
    quartersineImageButton2->addListener (this);

    quartersineImageButton2->setImages (false, true, true,
                                        ImageCache::getFromMemory (quarter_sine_png, quarter_sine_pngSize), 0.500f, Colour (0x00000000),
                                        Image(), 0.500f, Colour (0x00000000),
                                        Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (waveLabel2 = new Label ("wave label",
                                               "Wave"));
    waveLabel2->setFont (Font (15.00f, Font::plain));
    waveLabel2->setJustificationType (Justification::centredLeft);
    waveLabel2->setEditable (false, false, false);
    waveLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    waveLabel2->setColour (TextEditor::textColourId, Colours::black);
    waveLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (tremoloButton2 = new ToggleButton ("tremolo button"));
    tremoloButton2->setButtonText ("Tremolo");
    tremoloButton2->addListener (this);
    tremoloButton2->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (vibratoButton2 = new ToggleButton ("vibrato button"));
    vibratoButton2->setButtonText ("Vibrato");
    vibratoButton2->addListener (this);
    vibratoButton2->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (sustainButton2 = new ToggleButton ("sustain button"));
    sustainButton2->setButtonText ("Sustain");
    sustainButton2->addListener (this);
    sustainButton2->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (keyscaleEnvButton2 = new ToggleButton ("keyscale env button"));
    keyscaleEnvButton2->setButtonText ("Keyscale Envelope Rate");
    keyscaleEnvButton2->addListener (this);
    keyscaleEnvButton2->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (frequencyLabel4 = new Label ("frequency label",
                                                    "Keyscale Attenuation"));
    frequencyLabel4->setFont (Font (15.00f, Font::plain));
    frequencyLabel4->setJustificationType (Justification::centred);
    frequencyLabel4->setEditable (false, false, false);
    frequencyLabel4->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel4->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (groupComponent3 = new GroupComponent ("new group",
                                                             "Common"));
    groupComponent3->setTextLabelPosition (Justification::centredLeft);
    groupComponent3->setColour (GroupComponent::outlineColourId, Colour (0xff007f00));
    groupComponent3->setColour (GroupComponent::textColourId, Colour (0xff007f00));

    addAndMakeVisible (tremoloSlider = new Slider ("tremolo slider"));
    tremoloSlider->setRange (1, 4.8, 3.8);
    tremoloSlider->setSliderStyle (Slider::LinearHorizontal);
    tremoloSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 44, 20);
    tremoloSlider->setColour (Slider::thumbColourId, Colour (0xff00af00));
    tremoloSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    tremoloSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    tremoloSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    tremoloSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    tremoloSlider->addListener (this);

    addAndMakeVisible (frequencyLabel5 = new Label ("frequency label",
                                                    "Tremolo Depth\n"));
    frequencyLabel5->setFont (Font (15.00f, Font::plain));
    frequencyLabel5->setJustificationType (Justification::centred);
    frequencyLabel5->setEditable (false, false, false);
    frequencyLabel5->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel5->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dbLabel5 = new Label ("db label",
                                             "dB"));
    dbLabel5->setFont (Font (15.00f, Font::plain));
    dbLabel5->setJustificationType (Justification::centred);
    dbLabel5->setEditable (false, false, false);
    dbLabel5->setColour (Label::textColourId, Colour (0xff007f00));
    dbLabel5->setColour (Label::outlineColourId, Colour (0x00000000));
    dbLabel5->setColour (TextEditor::textColourId, Colours::black);
    dbLabel5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (vibratoSlider = new Slider ("vibrato slider"));
    vibratoSlider->setRange (7, 14, 7);
    vibratoSlider->setSliderStyle (Slider::LinearHorizontal);
    vibratoSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 44, 20);
    vibratoSlider->setColour (Slider::thumbColourId, Colour (0xff00af00));
    vibratoSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    vibratoSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    vibratoSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    vibratoSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    vibratoSlider->addListener (this);

    addAndMakeVisible (frequencyLabel6 = new Label ("frequency label",
                                                    "Vibrato Depth"));
    frequencyLabel6->setFont (Font (15.00f, Font::plain));
    frequencyLabel6->setJustificationType (Justification::centred);
    frequencyLabel6->setEditable (false, false, false);
    frequencyLabel6->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel6->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dbLabel6 = new Label ("db label",
                                             "cents\n"));
    dbLabel6->setFont (Font (15.00f, Font::plain));
    dbLabel6->setJustificationType (Justification::centred);
    dbLabel6->setEditable (false, false, false);
    dbLabel6->setColour (Label::textColourId, Colour (0xff007f00));
    dbLabel6->setColour (Label::outlineColourId, Colour (0x00000000));
    dbLabel6->setColour (TextEditor::textColourId, Colours::black);
    dbLabel6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (feedbackSlider = new Slider ("feedback slider"));
    feedbackSlider->setRange (0, 7, 1);
    feedbackSlider->setSliderStyle (Slider::LinearHorizontal);
    feedbackSlider->setTextBoxStyle (Slider::TextBoxRight, false, 44, 20);
    feedbackSlider->setColour (Slider::thumbColourId, Colour (0xff00af00));
    feedbackSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    feedbackSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    feedbackSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    feedbackSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    feedbackSlider->addListener (this);

    addAndMakeVisible (frequencyLabel7 = new Label ("frequency label",
                                                    "Feedback"));
    frequencyLabel7->setFont (Font (15.00f, Font::plain));
    frequencyLabel7->setJustificationType (Justification::centredLeft);
    frequencyLabel7->setEditable (false, false, false);
    frequencyLabel7->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel7->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (velocityComboBox = new ComboBox ("velocity combo box"));
    velocityComboBox->setEditableText (false);
    velocityComboBox->setJustificationType (Justification::centredLeft);
    velocityComboBox->setTextWhenNothingSelected (String::empty);
    velocityComboBox->setTextWhenNoChoicesAvailable ("(no choices)");
    velocityComboBox->addItem ("Off", 1);
    velocityComboBox->addItem ("Light", 2);
    velocityComboBox->addItem ("Heavy", 3);
    velocityComboBox->addListener (this);

    addAndMakeVisible (attenuationLabel3 = new Label ("attenuation label",
                                                      "Velocity"));
    attenuationLabel3->setFont (Font (15.00f, Font::plain));
    attenuationLabel3->setJustificationType (Justification::centredLeft);
    attenuationLabel3->setEditable (false, false, false);
    attenuationLabel3->setColour (Label::textColourId, Colour (0xff007f00));
    attenuationLabel3->setColour (TextEditor::textColourId, Colours::black);
    attenuationLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (velocityComboBox2 = new ComboBox ("velocity combo box"));
    velocityComboBox2->setEditableText (false);
    velocityComboBox2->setJustificationType (Justification::centredLeft);
    velocityComboBox2->setTextWhenNothingSelected (String::empty);
    velocityComboBox2->setTextWhenNoChoicesAvailable ("(no choices)");
    velocityComboBox2->addItem ("Off", 1);
    velocityComboBox2->addItem ("Light", 2);
    velocityComboBox2->addItem ("Heavy", 3);
    velocityComboBox2->addListener (this);

    addAndMakeVisible (attenuationLabel4 = new Label ("attenuation label",
                                                      "Velocity"));
    attenuationLabel4->setFont (Font (15.00f, Font::plain));
    attenuationLabel4->setJustificationType (Justification::centredLeft);
    attenuationLabel4->setEditable (false, false, false);
    attenuationLabel4->setColour (Label::textColourId, Colour (0xff007f00));
    attenuationLabel4->setColour (TextEditor::textColourId, Colours::black);
    attenuationLabel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (alternatingsineImageButton = new ImageButton ("alternating sine image button"));
    alternatingsineImageButton->setTooltip ("alternating sine");
    alternatingsineImageButton->setButtonText ("Alternating Sine");
    alternatingsineImageButton->setRadioGroupId (1);
    alternatingsineImageButton->addListener (this);

    alternatingsineImageButton->setImages (false, true, true,
                                           ImageCache::getFromMemory (alternating_sine_png, alternating_sine_pngSize), 0.500f, Colour (0x00000000),
                                           Image(), 0.500f, Colour (0x00000000),
                                           Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (camelsineImageButton = new ImageButton ("camel sine image button"));
    camelsineImageButton->setTooltip ("camel sine");
    camelsineImageButton->setButtonText ("Camel Sine");
    camelsineImageButton->setRadioGroupId (1);
    camelsineImageButton->addListener (this);

    camelsineImageButton->setImages (false, true, true,
                                     ImageCache::getFromMemory (camel_sine_png, camel_sine_pngSize), 0.500f, Colour (0x00000000),
                                     Image(), 0.500f, Colour (0x00000000),
                                     Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (squareImageButton = new ImageButton ("square image button"));
    squareImageButton->setTooltip ("square");
    squareImageButton->setButtonText ("Square");
    squareImageButton->setRadioGroupId (1);
    squareImageButton->addListener (this);

    squareImageButton->setImages (false, true, true,
                                  ImageCache::getFromMemory (square_png, square_pngSize), 0.500f, Colour (0x00000000),
                                  Image(), 0.500f, Colour (0x00000000),
                                  Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (logsawImageButton = new ImageButton ("logsaw image button"));
    logsawImageButton->setTooltip ("logarithmic sawtooth");
    logsawImageButton->setButtonText ("Logarithmic Sawtooth");
    logsawImageButton->setRadioGroupId (1);
    logsawImageButton->addListener (this);

    logsawImageButton->setImages (false, true, true,
                                  ImageCache::getFromMemory (logarithmic_saw_png, logarithmic_saw_pngSize), 0.500f, Colour (0x00000000),
                                  Image(), 0.500f, Colour (0x00000000),
                                  Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (alternatingsineImageButton2 = new ImageButton ("alternating sine image button"));
    alternatingsineImageButton2->setTooltip ("alternating sine");
    alternatingsineImageButton2->setButtonText ("Alternating Sine");
    alternatingsineImageButton2->setRadioGroupId (2);
    alternatingsineImageButton2->addListener (this);

    alternatingsineImageButton2->setImages (false, true, true,
                                            ImageCache::getFromMemory (alternating_sine_png, alternating_sine_pngSize), 0.500f, Colour (0x00000000),
                                            Image(), 0.500f, Colour (0x00000000),
                                            Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (camelsineImageButton2 = new ImageButton ("camel sine image button"));
    camelsineImageButton2->setTooltip ("camel sine");
    camelsineImageButton2->setButtonText ("Camel Sine");
    camelsineImageButton2->setRadioGroupId (2);
    camelsineImageButton2->addListener (this);

    camelsineImageButton2->setImages (false, true, true,
                                      ImageCache::getFromMemory (camel_sine_png, camel_sine_pngSize), 0.500f, Colour (0x00000000),
                                      Image(), 0.500f, Colour (0x00000000),
                                      Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (squareImageButton2 = new ImageButton ("square image button"));
    squareImageButton2->setTooltip ("square");
    squareImageButton2->setButtonText ("Square");
    squareImageButton2->setRadioGroupId (2);
    squareImageButton2->addListener (this);

    squareImageButton2->setImages (false, true, true,
                                   ImageCache::getFromMemory (square_png, square_pngSize), 0.500f, Colour (0x00000000),
                                   Image(), 0.500f, Colour (0x00000000),
                                   Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (logsawImageButton2 = new ImageButton ("logsaw image button"));
    logsawImageButton2->setTooltip ("logarithmic sawtooth");
    logsawImageButton2->setButtonText ("Logarithmic Sawtooth");
    logsawImageButton2->setRadioGroupId (2);
    logsawImageButton2->addListener (this);

    logsawImageButton2->setImages (false, true, true,
                                   ImageCache::getFromMemory (logarithmic_saw_png, logarithmic_saw_pngSize), 0.500f, Colour (0x00000000),
                                   Image(), 0.500f, Colour (0x00000000),
                                   Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (algorithmComboBox = new ComboBox ("algorithm combo box"));
    algorithmComboBox->setEditableText (false);
    algorithmComboBox->setJustificationType (Justification::centredLeft);
    algorithmComboBox->setTextWhenNothingSelected (String::empty);
    algorithmComboBox->setTextWhenNoChoicesAvailable ("(no choices)");
    algorithmComboBox->addItem ("FM", 1);
    algorithmComboBox->addItem ("Additive", 2);
    algorithmComboBox->addListener (this);

    addAndMakeVisible (frequencyLabel8 = new Label ("frequency label",
                                                    "Algorithm"));
    frequencyLabel8->setFont (Font (15.00f, Font::plain));
    frequencyLabel8->setJustificationType (Justification::centredLeft);
    frequencyLabel8->setEditable (false, false, false);
    frequencyLabel8->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel8->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dbLabel4 = new Label ("db label",
                                             "dB/8ve\n"));
    dbLabel4->setFont (Font (15.00f, Font::plain));
    dbLabel4->setJustificationType (Justification::centred);
    dbLabel4->setEditable (false, false, false);
    dbLabel4->setColour (Label::textColourId, Colour (0xff007f00));
    dbLabel4->setColour (Label::outlineColourId, Colour (0x00000000));
    dbLabel4->setColour (TextEditor::textColourId, Colours::black);
    dbLabel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (keyscaleAttenuationComboBox2 = new ComboBox ("keyscale combo box"));
    keyscaleAttenuationComboBox2->setEditableText (false);
    keyscaleAttenuationComboBox2->setJustificationType (Justification::centredLeft);
    keyscaleAttenuationComboBox2->setTextWhenNothingSelected (String::empty);
    keyscaleAttenuationComboBox2->setTextWhenNoChoicesAvailable ("(no choices)");
    keyscaleAttenuationComboBox2->addItem ("-0.0", 1);
    keyscaleAttenuationComboBox2->addItem ("-3.0", 2);
    keyscaleAttenuationComboBox2->addItem ("-1.5", 3);
    keyscaleAttenuationComboBox2->addItem ("-6.0", 4);
    keyscaleAttenuationComboBox2->addListener (this);

    addAndMakeVisible (keyscaleAttenuationComboBox = new ComboBox ("keyscale combo box"));
    keyscaleAttenuationComboBox->setEditableText (false);
    keyscaleAttenuationComboBox->setJustificationType (Justification::centredLeft);
    keyscaleAttenuationComboBox->setTextWhenNothingSelected (String::empty);
    keyscaleAttenuationComboBox->setTextWhenNoChoicesAvailable ("(no choices)");
    keyscaleAttenuationComboBox->addItem ("-0.0", 1);
    keyscaleAttenuationComboBox->addItem ("-3.0", 2);
    keyscaleAttenuationComboBox->addItem ("-1.5", 3);
    keyscaleAttenuationComboBox->addItem ("-6.0", 4);
    keyscaleAttenuationComboBox->addListener (this);


    //[UserPreSize]
	frequencyComboBox->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	frequencyComboBox->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	frequencyComboBox->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	frequencyComboBox->setColour (ComboBox::buttonColourId, Colours::black);
	frequencyComboBox->setColour (ComboBox::backgroundColourId, Colours::black);

	frequencyComboBox->addItem ("x1/2", 16);		// can't use 0 :(
    frequencyComboBox->addItem ("x1", 1);
    frequencyComboBox->addItem ("x2", 2);
    frequencyComboBox->addItem ("x3", 3);
    frequencyComboBox->addItem ("x4", 4);
    frequencyComboBox->addItem ("x5", 5);
    frequencyComboBox->addItem ("x6", 6);
    frequencyComboBox->addItem ("x7", 7);
    frequencyComboBox->addItem ("x8", 8);
    frequencyComboBox->addItem ("x9", 9);
    frequencyComboBox->addItem ("x10", 10);
    frequencyComboBox->addItem ("x12", 12);
    frequencyComboBox->addItem ("x15", 15);

	frequencyComboBox2->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	frequencyComboBox2->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	frequencyComboBox2->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	frequencyComboBox2->setColour (ComboBox::buttonColourId, Colours::black);
	frequencyComboBox2->setColour (ComboBox::backgroundColourId, Colours::black);
	frequencyComboBox2->addItem ("x1/2", 16);		// can't use 0 :(
    frequencyComboBox2->addItem ("x1", 1);
    frequencyComboBox2->addItem ("x2", 2);
    frequencyComboBox2->addItem ("x3", 3);
    frequencyComboBox2->addItem ("x4", 4);
    frequencyComboBox2->addItem ("x5", 5);
    frequencyComboBox2->addItem ("x6", 6);
    frequencyComboBox2->addItem ("x7", 7);
    frequencyComboBox2->addItem ("x8", 8);
    frequencyComboBox2->addItem ("x9", 9);
    frequencyComboBox2->addItem ("x10", 10);
    frequencyComboBox2->addItem ("x12", 12);
    frequencyComboBox2->addItem ("x15", 15);

	velocityComboBox->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	velocityComboBox->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	velocityComboBox->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	velocityComboBox->setColour (ComboBox::buttonColourId, Colours::black);
	velocityComboBox->setColour (ComboBox::backgroundColourId, Colours::black);
	velocityComboBox2->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	velocityComboBox2->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	velocityComboBox2->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	velocityComboBox2->setColour (ComboBox::buttonColourId, Colours::black);
	velocityComboBox2->setColour (ComboBox::backgroundColourId, Colours::black);

	algorithmComboBox->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	algorithmComboBox->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	algorithmComboBox->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	algorithmComboBox->setColour (ComboBox::buttonColourId, Colours::black);
	algorithmComboBox->setColour (ComboBox::backgroundColourId, Colours::black);

	keyscaleAttenuationComboBox->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	keyscaleAttenuationComboBox->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	keyscaleAttenuationComboBox->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	keyscaleAttenuationComboBox->setColour (ComboBox::buttonColourId, Colours::black);
	keyscaleAttenuationComboBox->setColour (ComboBox::backgroundColourId, Colours::black);
	keyscaleAttenuationComboBox2->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	keyscaleAttenuationComboBox2->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	keyscaleAttenuationComboBox2->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	keyscaleAttenuationComboBox2->setColour (ComboBox::buttonColourId, Colours::black);
	keyscaleAttenuationComboBox2->setColour (ComboBox::backgroundColourId, Colours::black);

	sineImageButton->setClickingTogglesState(true);
	sineImageButton->setRepaintsOnMouseActivity(false);
	abssineImageButton->setClickingTogglesState(true);
	abssineImageButton->setRepaintsOnMouseActivity(false);
	halfsineImageButton->setClickingTogglesState(true);
	halfsineImageButton->setRepaintsOnMouseActivity(false);
	quartersineImageButton->setClickingTogglesState(true);
	quartersineImageButton->setRepaintsOnMouseActivity(false);
	alternatingsineImageButton->setClickingTogglesState(true);
	alternatingsineImageButton->setRepaintsOnMouseActivity(false);
	camelsineImageButton->setClickingTogglesState(true);
	camelsineImageButton->setRepaintsOnMouseActivity(false);
	squareImageButton->setClickingTogglesState(true);
	squareImageButton->setRepaintsOnMouseActivity(false);
	logsawImageButton->setClickingTogglesState(true);
	logsawImageButton->setRepaintsOnMouseActivity(false);

	sineImageButton2->setClickingTogglesState(true);
	sineImageButton2->setRepaintsOnMouseActivity(false);
	abssineImageButton2->setClickingTogglesState(true);
	abssineImageButton2->setRepaintsOnMouseActivity(false);
	halfsineImageButton2->setClickingTogglesState(true);
	halfsineImageButton2->setRepaintsOnMouseActivity(false);
	quartersineImageButton2->setClickingTogglesState(true);
	quartersineImageButton2->setRepaintsOnMouseActivity(false);
	alternatingsineImageButton2->setClickingTogglesState(true);
	alternatingsineImageButton2->setRepaintsOnMouseActivity(false);
	camelsineImageButton2->setClickingTogglesState(true);
	camelsineImageButton2->setRepaintsOnMouseActivity(false);
	squareImageButton2->setClickingTogglesState(true);
	squareImageButton2->setRepaintsOnMouseActivity(false);
	logsawImageButton2->setClickingTogglesState(true);
	logsawImageButton2->setRepaintsOnMouseActivity(false);

	tremoloButton->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	vibratoButton->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	keyscaleEnvButton->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	sustainButton->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	tremoloButton2->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	vibratoButton2->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	keyscaleEnvButton2->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	sustainButton2->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
    //[/UserPreSize]

    setSize (440, 810);


    //[Constructor] You can add your own custom stuff here..
	processor = ownerFilter;
    //[/Constructor]
}

PluginGui::~PluginGui()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    groupComponent = nullptr;
    frequencyComboBox = nullptr;
    frequencyLabel = nullptr;
    aSlider = nullptr;
    aLabel = nullptr;
    dSlider = nullptr;
    dLabel = nullptr;
    sSlider = nullptr;
    dLabel2 = nullptr;
    rSlider = nullptr;
    rLabel = nullptr;
    attenuationSlider = nullptr;
    attenuationLabel = nullptr;
    dbLabel = nullptr;
    sineImageButton = nullptr;
    halfsineImageButton = nullptr;
    abssineImageButton = nullptr;
    quartersineImageButton = nullptr;
    waveLabel = nullptr;
    tremoloButton = nullptr;
    vibratoButton = nullptr;
    sustainButton = nullptr;
    keyscaleEnvButton = nullptr;
    frequencyLabel2 = nullptr;
    dbLabel2 = nullptr;
    groupComponent2 = nullptr;
    frequencyComboBox2 = nullptr;
    frequencyLabel3 = nullptr;
    aSlider2 = nullptr;
    aLabel2 = nullptr;
    dSlider2 = nullptr;
    dLabel3 = nullptr;
    sSlider2 = nullptr;
    dLabel4 = nullptr;
    rSlider2 = nullptr;
    rLabel2 = nullptr;
    attenuationSlider2 = nullptr;
    attenuationLabel2 = nullptr;
    dbLabel3 = nullptr;
    sineImageButton2 = nullptr;
    halfsineImageButton2 = nullptr;
    abssineImageButton2 = nullptr;
    quartersineImageButton2 = nullptr;
    waveLabel2 = nullptr;
    tremoloButton2 = nullptr;
    vibratoButton2 = nullptr;
    sustainButton2 = nullptr;
    keyscaleEnvButton2 = nullptr;
    frequencyLabel4 = nullptr;
    groupComponent3 = nullptr;
    tremoloSlider = nullptr;
    frequencyLabel5 = nullptr;
    dbLabel5 = nullptr;
    vibratoSlider = nullptr;
    frequencyLabel6 = nullptr;
    dbLabel6 = nullptr;
    feedbackSlider = nullptr;
    frequencyLabel7 = nullptr;
    velocityComboBox = nullptr;
    attenuationLabel3 = nullptr;
    velocityComboBox2 = nullptr;
    attenuationLabel4 = nullptr;
    alternatingsineImageButton = nullptr;
    camelsineImageButton = nullptr;
    squareImageButton = nullptr;
    logsawImageButton = nullptr;
    alternatingsineImageButton2 = nullptr;
    camelsineImageButton2 = nullptr;
    squareImageButton2 = nullptr;
    logsawImageButton2 = nullptr;
    algorithmComboBox = nullptr;
    frequencyLabel8 = nullptr;
    dbLabel4 = nullptr;
    keyscaleAttenuationComboBox2 = nullptr;
    keyscaleAttenuationComboBox = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void PluginGui::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PluginGui::resized()
{
    groupComponent->setBounds (16, 8, 408, 336);
    frequencyComboBox->setBounds (128, 80, 72, 24);
    frequencyLabel->setBounds (32, 80, 80, 24);
    aSlider->setBounds (40, 208, 48, 72);
    aLabel->setBounds (40, 280, 48, 24);
    dSlider->setBounds (104, 208, 48, 72);
    dLabel->setBounds (104, 280, 48, 24);
    sSlider->setBounds (168, 208, 48, 72);
    dLabel2->setBounds (168, 280, 48, 24);
    rSlider->setBounds (232, 208, 48, 72);
    rLabel->setBounds (232, 280, 48, 24);
    attenuationSlider->setBounds (312, 200, 72, 96);
    attenuationLabel->setBounds (312, 304, 96, 24);
    dbLabel->setBounds (376, 272, 40, 24);
    sineImageButton->setBounds (88, 40, 34, 30);
    halfsineImageButton->setBounds (128, 40, 34, 30);
    abssineImageButton->setBounds (168, 40, 34, 30);
    quartersineImageButton->setBounds (208, 40, 34, 30);
    waveLabel->setBounds (32, 40, 48, 24);
    tremoloButton->setBounds (144, 120, 96, 24);
    vibratoButton->setBounds (40, 120, 96, 24);
    sustainButton->setBounds (40, 304, 96, 24);
    keyscaleEnvButton->setBounds (128, 304, 184, 24);
    frequencyLabel2->setBounds (248, 120, 152, 24);
    dbLabel2->setBounds (336, 96, 72, 16);
    groupComponent2->setBounds (16, 352, 408, 336);
    frequencyComboBox2->setBounds (128, 424, 72, 24);
    frequencyLabel3->setBounds (32, 424, 80, 24);
    aSlider2->setBounds (40, 552, 48, 72);
    aLabel2->setBounds (40, 624, 48, 24);
    dSlider2->setBounds (104, 552, 48, 72);
    dLabel3->setBounds (104, 624, 48, 24);
    sSlider2->setBounds (168, 552, 48, 72);
    dLabel4->setBounds (168, 624, 48, 24);
    rSlider2->setBounds (232, 552, 48, 72);
    rLabel2->setBounds (232, 624, 48, 24);
    attenuationSlider2->setBounds (312, 544, 72, 96);
    attenuationLabel2->setBounds (312, 648, 96, 24);
    dbLabel3->setBounds (376, 616, 40, 24);
    sineImageButton2->setBounds (88, 384, 34, 30);
    halfsineImageButton2->setBounds (128, 384, 34, 30);
    abssineImageButton2->setBounds (168, 384, 34, 30);
    quartersineImageButton2->setBounds (208, 384, 34, 30);
    waveLabel2->setBounds (32, 384, 48, 24);
    tremoloButton2->setBounds (152, 464, 96, 24);
    vibratoButton2->setBounds (40, 464, 96, 24);
    sustainButton2->setBounds (40, 648, 96, 24);
    keyscaleEnvButton2->setBounds (128, 648, 184, 24);
    frequencyLabel4->setBounds (248, 464, 152, 24);
    groupComponent3->setBounds (16, 696, 408, 96);
    tremoloSlider->setBounds (48, 728, 112, 24);
    frequencyLabel5->setBounds (48, 752, 152, 24);
    dbLabel5->setBounds (160, 720, 40, 40);
    vibratoSlider->setBounds (240, 728, 112, 24);
    frequencyLabel6->setBounds (240, 752, 152, 24);
    dbLabel6->setBounds (352, 720, 47, 40);
    feedbackSlider->setBounds (112, 168, 136, 24);
    frequencyLabel7->setBounds (32, 168, 80, 24);
    velocityComboBox->setBounds (336, 168, 72, 24);
    attenuationLabel3->setBounds (272, 168, 64, 24);
    velocityComboBox2->setBounds (336, 512, 72, 24);
    attenuationLabel4->setBounds (272, 512, 64, 24);
    alternatingsineImageButton->setBounds (288, 40, 34, 30);
    camelsineImageButton->setBounds (248, 40, 34, 30);
    squareImageButton->setBounds (328, 40, 34, 30);
    logsawImageButton->setBounds (368, 40, 34, 30);
    alternatingsineImageButton2->setBounds (290, 385, 34, 30);
    camelsineImageButton2->setBounds (250, 385, 34, 30);
    squareImageButton2->setBounds (330, 385, 34, 30);
    logsawImageButton2->setBounds (370, 385, 34, 30);
    algorithmComboBox->setBounds (128, 504, 112, 24);
    frequencyLabel8->setBounds (32, 504, 80, 24);
    dbLabel4->setBounds (336, 440, 72, 16);
    keyscaleAttenuationComboBox2->setBounds (264, 432, 72, 24);
    keyscaleAttenuationComboBox->setBounds (264, 88, 72, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void PluginGui::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]

    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == frequencyComboBox)
    {
        //[UserComboBoxCode_frequencyComboBox] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId();
		if (id > 15) id = 0;
		processor->setEnumParameter("Modulator Frequency Multiplier", id);
        //[/UserComboBoxCode_frequencyComboBox]
    }
    else if (comboBoxThatHasChanged == frequencyComboBox2)
    {
        //[UserComboBoxCode_frequencyComboBox2] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId();
		if (id > 15) id = 0;
		processor->setEnumParameter("Carrier Frequency Multiplier", id);
        //[/UserComboBoxCode_frequencyComboBox2]
    }
    else if (comboBoxThatHasChanged == velocityComboBox)
    {
        //[UserComboBoxCode_velocityComboBox] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId() - 1;
		processor->setEnumParameter("Modulator Velocity Sensitivity", id);
        //[/UserComboBoxCode_velocityComboBox]
    }
    else if (comboBoxThatHasChanged == velocityComboBox2)
    {
        //[UserComboBoxCode_velocityComboBox2] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId() - 1;
		processor->setEnumParameter("Carrier Velocity Sensitivity", id);
        //[/UserComboBoxCode_velocityComboBox2]
    }
    else if (comboBoxThatHasChanged == algorithmComboBox)
    {
        //[UserComboBoxCode_algorithmComboBox] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId() - 1;
		processor->setEnumParameter("Algorithm", id);
        //[/UserComboBoxCode_algorithmComboBox]
    }
    else if (comboBoxThatHasChanged == keyscaleAttenuationComboBox2)
    {
        //[UserComboBoxCode_keyscaleAttenuationComboBox2] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId() - 1;
		processor->setEnumParameter("Carrier Keyscale Level", id);
        //[/UserComboBoxCode_keyscaleAttenuationComboBox2]
    }
    else if (comboBoxThatHasChanged == keyscaleAttenuationComboBox)
    {
        //[UserComboBoxCode_keyscaleAttenuationComboBox] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId() - 1;
		processor->setEnumParameter("Modulator Keyscale Level", id);
        //[/UserComboBoxCode_keyscaleAttenuationComboBox]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void PluginGui::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == aSlider)
    {
        //[UserSliderCode_aSlider] -- add your slider handling code here..
		processor->setIntParameter("Modulator Attack", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_aSlider]
    }
    else if (sliderThatWasMoved == dSlider)
    {
        //[UserSliderCode_dSlider] -- add your slider handling code here..
		processor->setIntParameter("Modulator Decay", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_dSlider]
    }
    else if (sliderThatWasMoved == sSlider)
    {
        //[UserSliderCode_sSlider] -- add your slider handling code here..
		processor->setIntParameter("Modulator Sustain Level", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_sSlider]
    }
    else if (sliderThatWasMoved == rSlider)
    {
        //[UserSliderCode_rSlider] -- add your slider handling code here..
		processor->setIntParameter("Modulator Release", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_rSlider]
    }
    else if (sliderThatWasMoved == attenuationSlider)
    {
        //[UserSliderCode_attenuationSlider] -- add your slider handling code here..
		processor->setEnumParameter("Modulator Attenuation", -(int)(sliderThatWasMoved->getValue()/0.75));
        //[/UserSliderCode_attenuationSlider]
    }
    else if (sliderThatWasMoved == aSlider2)
    {
        //[UserSliderCode_aSlider2] -- add your slider handling code here..
		processor->setIntParameter("Carrier Attack", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_aSlider2]
    }
    else if (sliderThatWasMoved == dSlider2)
    {
        //[UserSliderCode_dSlider2] -- add your slider handling code here..
		processor->setIntParameter("Carrier Decay", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_dSlider2]
    }
    else if (sliderThatWasMoved == sSlider2)
    {
        //[UserSliderCode_sSlider2] -- add your slider handling code here..
		processor->setIntParameter("Carrier Sustain Level", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_sSlider2]
    }
    else if (sliderThatWasMoved == rSlider2)
    {
        //[UserSliderCode_rSlider2] -- add your slider handling code here..
		processor->setIntParameter("Carrier Release", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_rSlider2]
    }
    else if (sliderThatWasMoved == attenuationSlider2)
    {
        //[UserSliderCode_attenuationSlider2] -- add your slider handling code here..
		processor->setEnumParameter("Carrier Attenuation", -(int)(sliderThatWasMoved->getValue()/0.75));
        //[/UserSliderCode_attenuationSlider2]
    }
    else if (sliderThatWasMoved == tremoloSlider)
    {
        //[UserSliderCode_tremoloSlider] -- add your slider handling code here..
		processor->setEnumParameter("Tremolo Depth", sliderThatWasMoved->getValue() < 2.0 ? 0 : 1);
        //[/UserSliderCode_tremoloSlider]
    }
    else if (sliderThatWasMoved == vibratoSlider)
    {
        //[UserSliderCode_vibratoSlider] -- add your slider handling code here..
		processor->setEnumParameter("Vibrato Depth", sliderThatWasMoved->getValue() < 8.0 ? 0 : 1);
        //[/UserSliderCode_vibratoSlider]
    }
    else if (sliderThatWasMoved == feedbackSlider)
    {
        //[UserSliderCode_feedbackSlider] -- add your slider handling code here..
		processor->setIntParameter("Modulator Feedback", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_feedbackSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void PluginGui::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == sineImageButton)
    {
        //[UserButtonCode_sineImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 0);
        //[/UserButtonCode_sineImageButton]
    }
    else if (buttonThatWasClicked == halfsineImageButton)
    {
        //[UserButtonCode_halfsineImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 1);
        //[/UserButtonCode_halfsineImageButton]
    }
    else if (buttonThatWasClicked == abssineImageButton)
    {
        //[UserButtonCode_abssineImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 2);
        //[/UserButtonCode_abssineImageButton]
    }
    else if (buttonThatWasClicked == quartersineImageButton)
    {
        //[UserButtonCode_quartersineImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 3);
        //[/UserButtonCode_quartersineImageButton]
    }
    else if (buttonThatWasClicked == tremoloButton)
    {
        //[UserButtonCode_tremoloButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Tremolo", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_tremoloButton]
    }
    else if (buttonThatWasClicked == vibratoButton)
    {
        //[UserButtonCode_vibratoButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Vibrato", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_vibratoButton]
    }
    else if (buttonThatWasClicked == sustainButton)
    {
        //[UserButtonCode_sustainButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Sustain", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_sustainButton]
    }
    else if (buttonThatWasClicked == keyscaleEnvButton)
    {
        //[UserButtonCode_keyscaleEnvButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Keyscale Rate", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_keyscaleEnvButton]
    }
    else if (buttonThatWasClicked == sineImageButton2)
    {
        //[UserButtonCode_sineImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 0);
        //[/UserButtonCode_sineImageButton2]
    }
    else if (buttonThatWasClicked == halfsineImageButton2)
    {
        //[UserButtonCode_halfsineImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 1);
        //[/UserButtonCode_halfsineImageButton2]
    }
    else if (buttonThatWasClicked == abssineImageButton2)
    {
        //[UserButtonCode_abssineImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 2);
        //[/UserButtonCode_abssineImageButton2]
    }
    else if (buttonThatWasClicked == quartersineImageButton2)
    {
        //[UserButtonCode_quartersineImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 3);
        //[/UserButtonCode_quartersineImageButton2]
    }
    else if (buttonThatWasClicked == tremoloButton2)
    {
        //[UserButtonCode_tremoloButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Tremolo", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_tremoloButton2]
    }
    else if (buttonThatWasClicked == vibratoButton2)
    {
        //[UserButtonCode_vibratoButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Vibrato", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_vibratoButton2]
    }
    else if (buttonThatWasClicked == sustainButton2)
    {
        //[UserButtonCode_sustainButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Sustain", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_sustainButton2]
    }
    else if (buttonThatWasClicked == keyscaleEnvButton2)
    {
        //[UserButtonCode_keyscaleEnvButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Keyscale Rate", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_keyscaleEnvButton2]
    }
    else if (buttonThatWasClicked == alternatingsineImageButton)
    {
        //[UserButtonCode_alternatingsineImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 4);
        //[/UserButtonCode_alternatingsineImageButton]
    }
    else if (buttonThatWasClicked == camelsineImageButton)
    {
        //[UserButtonCode_camelsineImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 5);
        //[/UserButtonCode_camelsineImageButton]
    }
    else if (buttonThatWasClicked == squareImageButton)
    {
        //[UserButtonCode_squareImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 6);
        //[/UserButtonCode_squareImageButton]
    }
    else if (buttonThatWasClicked == logsawImageButton)
    {
        //[UserButtonCode_logsawImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 7);
        //[/UserButtonCode_logsawImageButton]
    }
    else if (buttonThatWasClicked == alternatingsineImageButton2)
    {
        //[UserButtonCode_alternatingsineImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 4);
        //[/UserButtonCode_alternatingsineImageButton2]
    }
    else if (buttonThatWasClicked == camelsineImageButton2)
    {
        //[UserButtonCode_camelsineImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 5);
        //[/UserButtonCode_camelsineImageButton2]
    }
    else if (buttonThatWasClicked == squareImageButton2)
    {
        //[UserButtonCode_squareImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 6);
        //[/UserButtonCode_squareImageButton2]
    }
    else if (buttonThatWasClicked == logsawImageButton2)
    {
        //[UserButtonCode_logsawImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 7);
        //[/UserButtonCode_logsawImageButton2]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
	//==============================================================================
    // These methods implement the FileDragAndDropTarget interface, and allow our component
    // to accept drag-and-drop of files..

    bool PluginGui::isInterestedInFileDrag (const StringArray& files)
    {
        return 1 == files.size() && files[0].toLowerCase().endsWith(".sbi");
    }

    void PluginGui::fileDragEnter (const StringArray& files, int x, int y)
    {
    }

    void PluginGui::fileDragMove (const StringArray& files, int x, int y)
    {
    }

    void PluginGui::fileDragExit (const StringArray& files)
    {
    }

    void PluginGui::filesDropped (const StringArray& files, int x, int y)
    {
		if (isInterestedInFileDrag(files)) {
			processor->loadInstrumentFromFile(files[0]);
		}
    }
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="PluginGui" componentName=""
                 parentClasses="public AudioProcessorEditor, public FileDragAndDropTarget, public DragAndDropContainer"
                 constructorParams="JuceOplvstiAudioProcessor* ownerFilter" variableInitialisers=" AudioProcessorEditor (ownerFilter)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.33"
                 fixedSize="0" initialWidth="440" initialHeight="810">
  <BACKGROUND backgroundColour="ff000000"/>
  <GROUPCOMPONENT name="new group" id="d2c7c07bf2d78c30" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="16 8 408 336" outlinecol="ff007f00"
                  textcol="ff007f00" title="Modulator" textpos="33"/>
  <COMBOBOX name="frequency combo box" id="4e65faf3d9442460" memberName="frequencyComboBox"
            virtualName="" explicitFocusOrder="0" pos="128 80 72 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="frequency label" id="7414532477c7f744" memberName="frequencyLabel"
         virtualName="" explicitFocusOrder="0" pos="32 80 80 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Frequency" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="a slider" id="1b9be27726a5b3ae" memberName="aSlider" virtualName=""
          explicitFocusOrder="0" pos="40 208 48 72" tooltip="Envelope attack rate"
          thumbcol="ff00af00" trackcol="7f007f00" textboxtext="ff007f00"
          textboxbkgd="ff000000" textboxhighlight="ff00af00" min="0" max="15"
          int="1" style="LinearVertical" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="a label" id="9dd0b13f00b4de42" memberName="aLabel" virtualName=""
         explicitFocusOrder="0" pos="40 280 48 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="A" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="d slider" id="d4cc8ddf2fc9cf2b" memberName="dSlider" virtualName=""
          explicitFocusOrder="0" pos="104 208 48 72" tooltip="Envelope decay rate"
          thumbcol="ff00af00" trackcol="7f007f00" textboxtext="ff007f00"
          textboxbkgd="ff000000" textboxhighlight="ff00af00" min="0" max="15"
          int="1" style="LinearVertical" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="d label" id="a7f17b098b85f10b" memberName="dLabel" virtualName=""
         explicitFocusOrder="0" pos="104 280 48 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="D" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="s slider" id="9bcadfc61e498bce" memberName="sSlider" virtualName=""
          explicitFocusOrder="0" pos="168 208 48 72" tooltip="Envelope sustain level"
          thumbcol="ff00af00" trackcol="7f007f00" textboxtext="ff007f00"
          textboxbkgd="ff000000" textboxhighlight="ff00af00" min="0" max="15"
          int="1" style="LinearVertical" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="d label" id="6467455c7573fefa" memberName="dLabel2" virtualName=""
         explicitFocusOrder="0" pos="168 280 48 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="S" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="r slider" id="5616976a8c5a3f5f" memberName="rSlider" virtualName=""
          explicitFocusOrder="0" pos="232 208 48 72" tooltip="Envelope release rate"
          thumbcol="ff00af00" trackcol="7f007f00" textboxtext="ff007f00"
          textboxbkgd="ff000000" textboxhighlight="ff00af00" min="0" max="15"
          int="1" style="LinearVertical" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="r label" id="ef30d2907e867666" memberName="rLabel" virtualName=""
         explicitFocusOrder="0" pos="232 280 48 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="R" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="attenuation slider" id="dfb943cd83b3977f" memberName="attenuationSlider"
          virtualName="" explicitFocusOrder="0" pos="312 200 72 96" thumbcol="ff00af00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="-47.25" max="0" int="0.75" style="LinearVertical"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="64"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="attenuation label" id="643f88854c82ca3e" memberName="attenuationLabel"
         virtualName="" explicitFocusOrder="0" pos="312 304 96 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Attenuation" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="db label" id="666be8c96c85c9f1" memberName="dbLabel" virtualName=""
         explicitFocusOrder="0" pos="376 272 40 24" textCol="ff007f00"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="dB"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <IMAGEBUTTON name="sine image button" id="5e72e0ec4fc09c1a" memberName="sineImageButton"
               virtualName="" explicitFocusOrder="0" pos="88 40 34 30" tooltip="sine"
               buttonText="Sine" connectedEdges="0" needsCallback="1" radioGroupId="1"
               keepProportions="1" resourceNormal="full_sine_png" opacityNormal="0.5"
               colourNormal="0" resourceOver="" opacityOver="0.5" colourOver="0"
               resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="half sine image button" id="bf9e0504c5e9e5d5" memberName="halfsineImageButton"
               virtualName="" explicitFocusOrder="0" pos="128 40 34 30" tooltip="half sine"
               buttonText="Half Sine" connectedEdges="0" needsCallback="1" radioGroupId="1"
               keepProportions="1" resourceNormal="half_sine_png" opacityNormal="0.5"
               colourNormal="0" resourceOver="" opacityOver="0.5" colourOver="0"
               resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="abs sine image button" id="1b0b532ac934edae" memberName="abssineImageButton"
               virtualName="" explicitFocusOrder="0" pos="168 40 34 30" tooltip="abs sine"
               buttonText="Abs Sine" connectedEdges="0" needsCallback="1" radioGroupId="1"
               keepProportions="1" resourceNormal="abs_sine_png" opacityNormal="0.5"
               colourNormal="0" resourceOver="" opacityOver="0.5" colourOver="0"
               resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="quarter sine image button" id="47d1bd1fd4ae011d" memberName="quartersineImageButton"
               virtualName="" explicitFocusOrder="0" pos="208 40 34 30" tooltip="quarter sine"
               buttonText="Quarter Sine" connectedEdges="0" needsCallback="1"
               radioGroupId="1" keepProportions="1" resourceNormal="quarter_sine_png"
               opacityNormal="0.5" colourNormal="0" resourceOver="" opacityOver="0.5"
               colourOver="0" resourceDown="" opacityDown="1" colourDown="0"/>
  <LABEL name="wave label" id="d35c942584ea52a6" memberName="waveLabel"
         virtualName="" explicitFocusOrder="0" pos="32 40 48 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Wave" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="tremolo button" id="1e6ab9b2f1fee312" memberName="tremoloButton"
                virtualName="" explicitFocusOrder="0" pos="144 120 96 24" txtcol="ff007f00"
                buttonText="Tremolo" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="vibrato button" id="a989eb6692e3dbd8" memberName="vibratoButton"
                virtualName="" explicitFocusOrder="0" pos="40 120 96 24" txtcol="ff007f00"
                buttonText="Vibrato" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="sustain button" id="e0ae2bc46ec1861c" memberName="sustainButton"
                virtualName="" explicitFocusOrder="0" pos="40 304 96 24" txtcol="ff007f00"
                buttonText="Sustain" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="keyscale env button" id="a3f62a22526b4b49" memberName="keyscaleEnvButton"
                virtualName="" explicitFocusOrder="0" pos="128 304 184 24" txtcol="ff007f00"
                buttonText="Keyscale Envelope Rate" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <LABEL name="frequency label" id="7898903168ad06c2" memberName="frequencyLabel2"
         virtualName="" explicitFocusOrder="0" pos="248 120 152 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Keyscale Attenuation"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="db label" id="b9b3cedf2b541262" memberName="dbLabel2" virtualName=""
         explicitFocusOrder="0" pos="336 96 72 16" textCol="ff007f00"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="dB/8ve&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <GROUPCOMPONENT name="new group" id="93b9aaeb75040aed" memberName="groupComponent2"
                  virtualName="" explicitFocusOrder="0" pos="16 352 408 336" outlinecol="ff007f00"
                  textcol="ff007f00" title="Carrier" textpos="33"/>
  <COMBOBOX name="frequency combo box" id="30b8c81b6bd2a17" memberName="frequencyComboBox2"
            virtualName="" explicitFocusOrder="0" pos="128 424 72 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="frequency label" id="65d58d2259c13bf1" memberName="frequencyLabel3"
         virtualName="" explicitFocusOrder="0" pos="32 424 80 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Frequency" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="a slider" id="d6d2f4556ea9394" memberName="aSlider2" virtualName=""
          explicitFocusOrder="0" pos="40 552 48 72" thumbcol="ff00af00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="0" max="15" int="1" style="LinearVertical"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="a label" id="9ec6412cc79720bc" memberName="aLabel2" virtualName=""
         explicitFocusOrder="0" pos="40 624 48 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="A" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="d slider" id="4a1f1b6038500f67" memberName="dSlider2" virtualName=""
          explicitFocusOrder="0" pos="104 552 48 72" thumbcol="ff00af00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="0" max="15" int="1" style="LinearVertical"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="d label" id="10231adaf9e23e14" memberName="dLabel3" virtualName=""
         explicitFocusOrder="0" pos="104 624 48 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="D" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="s slider" id="2fc057248a815958" memberName="sSlider2" virtualName=""
          explicitFocusOrder="0" pos="168 552 48 72" thumbcol="ff00af00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="0" max="15" int="1" style="LinearVertical"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="d label" id="5b881f2381defac" memberName="dLabel4" virtualName=""
         explicitFocusOrder="0" pos="168 624 48 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="S" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="r slider" id="5474ad005fb58e97" memberName="rSlider2" virtualName=""
          explicitFocusOrder="0" pos="232 552 48 72" thumbcol="ff00af00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="0" max="15" int="1" style="LinearVertical"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="r label" id="ca2834438bee82a9" memberName="rLabel2" virtualName=""
         explicitFocusOrder="0" pos="232 624 48 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="R" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="attenuation slider" id="edb48da87d7535dd" memberName="attenuationSlider2"
          virtualName="" explicitFocusOrder="0" pos="312 544 72 96" thumbcol="ff00af00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="-47.25" max="0" int="0.75" style="LinearVertical"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="64"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="attenuation label" id="958314f88253f461" memberName="attenuationLabel2"
         virtualName="" explicitFocusOrder="0" pos="312 648 96 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Attenuation" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="db label" id="7efc6195ef5e25d1" memberName="dbLabel3" virtualName=""
         explicitFocusOrder="0" pos="376 616 40 24" textCol="ff007f00"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="dB"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <IMAGEBUTTON name="sine image button" id="27e01d31ba835965" memberName="sineImageButton2"
               virtualName="" explicitFocusOrder="0" pos="88 384 34 30" tooltip="sine"
               buttonText="Sine" connectedEdges="0" needsCallback="1" radioGroupId="2"
               keepProportions="1" resourceNormal="full_sine_png" opacityNormal="0.5"
               colourNormal="0" resourceOver="" opacityOver="0.5" colourOver="0"
               resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="half sine image button" id="6e9afdb08dd4edac" memberName="halfsineImageButton2"
               virtualName="" explicitFocusOrder="0" pos="128 384 34 30" tooltip="half sine"
               buttonText="Half Sine" connectedEdges="0" needsCallback="1" radioGroupId="2"
               keepProportions="1" resourceNormal="half_sine_png" opacityNormal="0.5"
               colourNormal="0" resourceOver="" opacityOver="0.5" colourOver="0"
               resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="abs sine image button" id="361941cfa04130c1" memberName="abssineImageButton2"
               virtualName="" explicitFocusOrder="0" pos="168 384 34 30" tooltip="abs sine"
               buttonText="Abs Sine" connectedEdges="0" needsCallback="1" radioGroupId="2"
               keepProportions="1" resourceNormal="abs_sine_png" opacityNormal="0.5"
               colourNormal="0" resourceOver="" opacityOver="0.5" colourOver="0"
               resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="quarter sine image button" id="3fa62f49fdd1a41f" memberName="quartersineImageButton2"
               virtualName="" explicitFocusOrder="0" pos="208 384 34 30" tooltip="quarter sine"
               buttonText="Quarter Sine" connectedEdges="0" needsCallback="1"
               radioGroupId="2" keepProportions="1" resourceNormal="quarter_sine_png"
               opacityNormal="0.5" colourNormal="0" resourceOver="" opacityOver="0.5"
               colourOver="0" resourceDown="" opacityDown="1" colourDown="0"/>
  <LABEL name="wave label" id="c810628f3c772781" memberName="waveLabel2"
         virtualName="" explicitFocusOrder="0" pos="32 384 48 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Wave" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="tremolo button" id="a517934e39704073" memberName="tremoloButton2"
                virtualName="" explicitFocusOrder="0" pos="152 464 96 24" txtcol="ff007f00"
                buttonText="Tremolo" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="vibrato button" id="736b965a99641077" memberName="vibratoButton2"
                virtualName="" explicitFocusOrder="0" pos="40 464 96 24" txtcol="ff007f00"
                buttonText="Vibrato" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="sustain button" id="a3832cb840cae1f2" memberName="sustainButton2"
                virtualName="" explicitFocusOrder="0" pos="40 648 96 24" txtcol="ff007f00"
                buttonText="Sustain" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="keyscale env button" id="4cd968dae86d143c" memberName="keyscaleEnvButton2"
                virtualName="" explicitFocusOrder="0" pos="128 648 184 24" txtcol="ff007f00"
                buttonText="Keyscale Envelope Rate" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <LABEL name="frequency label" id="a1e2dd50c2835d73" memberName="frequencyLabel4"
         virtualName="" explicitFocusOrder="0" pos="248 464 152 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Keyscale Attenuation"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <GROUPCOMPONENT name="new group" id="7392f7d1c8cf6e74" memberName="groupComponent3"
                  virtualName="" explicitFocusOrder="0" pos="16 696 408 96" outlinecol="ff007f00"
                  textcol="ff007f00" title="Common" textpos="33"/>
  <SLIDER name="tremolo slider" id="ab64abee7ac8874b" memberName="tremoloSlider"
          virtualName="" explicitFocusOrder="0" pos="48 728 112 24" thumbcol="ff00af00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="1" max="4.8" int="3.8" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="44"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="frequency label" id="134ce8f87da62b88" memberName="frequencyLabel5"
         virtualName="" explicitFocusOrder="0" pos="48 752 152 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Tremolo Depth&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="db label" id="720df8e7c502dd91" memberName="dbLabel5" virtualName=""
         explicitFocusOrder="0" pos="160 720 40 40" textCol="ff007f00"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="dB"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="vibrato slider" id="b45a1f20f22cf5ca" memberName="vibratoSlider"
          virtualName="" explicitFocusOrder="0" pos="240 728 112 24" thumbcol="ff00af00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="7" max="14" int="7" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="44"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="frequency label" id="1412b9d14e37bcbe" memberName="frequencyLabel6"
         virtualName="" explicitFocusOrder="0" pos="240 752 152 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Vibrato Depth" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="db label" id="e13e0aff8b974a36" memberName="dbLabel6" virtualName=""
         explicitFocusOrder="0" pos="352 720 47 40" textCol="ff007f00"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="cents&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="feedback slider" id="f9d22e12f5e417e4" memberName="feedbackSlider"
          virtualName="" explicitFocusOrder="0" pos="112 168 136 24" thumbcol="ff00af00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="0" max="7" int="1" style="LinearHorizontal"
          textBoxPos="TextBoxRight" textBoxEditable="1" textBoxWidth="44"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="frequency label" id="880eaf14af62578a" memberName="frequencyLabel7"
         virtualName="" explicitFocusOrder="0" pos="32 168 80 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Feedback" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="velocity combo box" id="cbe10e5236447f15" memberName="velocityComboBox"
            virtualName="" explicitFocusOrder="0" pos="336 168 72 24" editable="0"
            layout="33" items="Off&#10;Light&#10;Heavy" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <LABEL name="attenuation label" id="c78694a1d0c5264c" memberName="attenuationLabel3"
         virtualName="" explicitFocusOrder="0" pos="272 168 64 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Velocity" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="velocity combo box" id="f5c4883d9feaa700" memberName="velocityComboBox2"
            virtualName="" explicitFocusOrder="0" pos="336 512 72 24" editable="0"
            layout="33" items="Off&#10;Light&#10;Heavy" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <LABEL name="attenuation label" id="d9297cdef25630de" memberName="attenuationLabel4"
         virtualName="" explicitFocusOrder="0" pos="272 512 64 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Velocity" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <IMAGEBUTTON name="alternating sine image button" id="2a054359a782e92d" memberName="alternatingsineImageButton"
               virtualName="" explicitFocusOrder="0" pos="288 40 34 30" tooltip="alternating sine"
               buttonText="Alternating Sine" connectedEdges="0" needsCallback="1"
               radioGroupId="1" keepProportions="1" resourceNormal="alternating_sine_png"
               opacityNormal="0.5" colourNormal="0" resourceOver="" opacityOver="0.5"
               colourOver="0" resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="camel sine image button" id="d6f66822f7f64480" memberName="camelsineImageButton"
               virtualName="" explicitFocusOrder="0" pos="248 40 34 30" tooltip="camel sine"
               buttonText="Camel Sine" connectedEdges="0" needsCallback="1"
               radioGroupId="1" keepProportions="1" resourceNormal="camel_sine_png"
               opacityNormal="0.5" colourNormal="0" resourceOver="" opacityOver="0.5"
               colourOver="0" resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="square image button" id="85e53fb506289115" memberName="squareImageButton"
               virtualName="" explicitFocusOrder="0" pos="328 40 34 30" tooltip="square"
               buttonText="Square" connectedEdges="0" needsCallback="1" radioGroupId="1"
               keepProportions="1" resourceNormal="square_png" opacityNormal="0.5"
               colourNormal="0" resourceOver="" opacityOver="0.5" colourOver="0"
               resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="logsaw image button" id="fca4c858138cdd7b" memberName="logsawImageButton"
               virtualName="" explicitFocusOrder="0" pos="368 40 34 30" tooltip="logarithmic sawtooth"
               buttonText="Logarithmic Sawtooth" connectedEdges="0" needsCallback="1"
               radioGroupId="1" keepProportions="1" resourceNormal="logarithmic_saw_png"
               opacityNormal="0.5" colourNormal="0" resourceOver="" opacityOver="0.5"
               colourOver="0" resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="alternating sine image button" id="32c5f60cc145d464" memberName="alternatingsineImageButton2"
               virtualName="" explicitFocusOrder="0" pos="290 385 34 30" tooltip="alternating sine"
               buttonText="Alternating Sine" connectedEdges="0" needsCallback="1"
               radioGroupId="2" keepProportions="1" resourceNormal="alternating_sine_png"
               opacityNormal="0.5" colourNormal="0" resourceOver="" opacityOver="0.5"
               colourOver="0" resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="camel sine image button" id="215395763c6a03f2" memberName="camelsineImageButton2"
               virtualName="" explicitFocusOrder="0" pos="250 385 34 30" tooltip="camel sine"
               buttonText="Camel Sine" connectedEdges="0" needsCallback="1"
               radioGroupId="2" keepProportions="1" resourceNormal="camel_sine_png"
               opacityNormal="0.5" colourNormal="0" resourceOver="" opacityOver="0.5"
               colourOver="0" resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="square image button" id="d85202a2e5f8b158" memberName="squareImageButton2"
               virtualName="" explicitFocusOrder="0" pos="330 385 34 30" tooltip="square"
               buttonText="Square" connectedEdges="0" needsCallback="1" radioGroupId="2"
               keepProportions="1" resourceNormal="square_png" opacityNormal="0.5"
               colourNormal="0" resourceOver="" opacityOver="0.5" colourOver="0"
               resourceDown="" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="logsaw image button" id="d713984cff8b67b5" memberName="logsawImageButton2"
               virtualName="" explicitFocusOrder="0" pos="370 385 34 30" tooltip="logarithmic sawtooth"
               buttonText="Logarithmic Sawtooth" connectedEdges="0" needsCallback="1"
               radioGroupId="2" keepProportions="1" resourceNormal="logarithmic_saw_png"
               opacityNormal="0.5" colourNormal="0" resourceOver="" opacityOver="0.5"
               colourOver="0" resourceDown="" opacityDown="1" colourDown="0"/>
  <COMBOBOX name="algorithm combo box" id="fffe0faaf234ed7" memberName="algorithmComboBox"
            virtualName="" explicitFocusOrder="0" pos="128 504 112 24" editable="0"
            layout="33" items="FM&#10;Additive" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="frequency label" id="e60c13739cf857ba" memberName="frequencyLabel8"
         virtualName="" explicitFocusOrder="0" pos="32 504 80 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Algorithm" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="db label" id="1f10b7e3cf477c89" memberName="dbLabel4" virtualName=""
         explicitFocusOrder="0" pos="336 440 72 16" textCol="ff007f00"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="dB/8ve&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <COMBOBOX name="keyscale combo box" id="9b766b7b6a67cbf4" memberName="keyscaleAttenuationComboBox2"
            virtualName="" explicitFocusOrder="0" pos="264 432 72 24" editable="0"
            layout="33" items="-0.0&#10;-3.0&#10;-1.5&#10;-6.0" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="keyscale combo box" id="7d8e1de0e1579999" memberName="keyscaleAttenuationComboBox"
            virtualName="" explicitFocusOrder="0" pos="264 88 72 24" editable="0"
            layout="33" items="-0.0&#10;-3.0&#10;-1.5&#10;-6.0" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: full_sine_png, 203, "../img/full_sine.png"
static const unsigned char resource_PluginGui_full_sine_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,146,73,68,65,84,88,133,237,151,81,14,64,
48,16,68,183,226,94,110,225,18,110,230,146,252,116,35,153,166,97,219,21,131,125,63,66,144,241,76,75,147,136,108,66,192,240,116,0,101,60,61,99,133,253,249,158,32,47,48,162,38,208,64,237,120,39,52,70,146,
224,168,185,250,196,206,102,104,140,68,16,228,232,72,235,59,119,234,10,141,145,8,130,148,51,235,212,120,39,235,117,75,222,230,110,209,24,41,103,86,43,78,163,141,198,72,4,65,250,59,162,116,126,181,105,
140,68,16,196,175,35,74,227,191,238,135,141,40,198,245,208,15,140,24,161,49,178,3,63,99,23,114,126,178,233,88,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::full_sine_png = (const char*) resource_PluginGui_full_sine_png;
const int PluginGui::full_sine_pngSize = 203;

// JUCER_RESOURCE: half_sine_png, 179, "../img/half_sine.png"
static const unsigned char resource_PluginGui_half_sine_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,122,73,68,65,84,88,133,237,148,65,10,128,
32,20,5,191,209,189,186,69,135,236,22,157,172,22,33,193,72,20,102,248,130,55,155,40,50,198,73,77,17,177,133,0,67,111,129,204,120,251,198,130,251,249,27,145,31,20,201,37,88,224,234,249,75,100,138,164,224,
174,121,58,227,198,101,100,138,88,132,156,107,164,246,159,55,90,43,50,69,44,66,202,147,117,170,252,82,237,184,245,184,200,20,41,79,214,78,200,20,177,8,177,8,177,8,177,8,177,8,177,8,217,1,254,115,12,122,
78,109,41,249,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::half_sine_png = (const char*) resource_PluginGui_half_sine_png;
const int PluginGui::half_sine_pngSize = 179;

// JUCER_RESOURCE: abs_sine_png, 181, "../img/abs_sine.png"
static const unsigned char resource_PluginGui_abs_sine_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,124,73,68,65,84,88,133,237,148,81,10,128,
32,16,5,215,232,94,221,162,67,118,201,250,81,130,17,209,182,192,13,222,252,21,62,153,125,150,201,204,78,11,192,50,91,160,176,118,87,28,120,222,7,119,126,152,251,65,35,101,34,78,210,122,255,50,23,166,145,
100,252,107,122,19,183,214,121,115,153,48,141,72,132,220,223,200,232,25,147,143,114,97,26,145,8,169,111,214,205,185,147,55,151,9,211,72,125,179,78,34,76,35,18,33,18,33,18,33,18,33,18,33,18,33,23,197,62,
17,185,230,123,254,103,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::abs_sine_png = (const char*) resource_PluginGui_abs_sine_png;
const int PluginGui::abs_sine_pngSize = 181;

// JUCER_RESOURCE: quarter_sine_png, 181, "../img/quarter_sine.png"
static const unsigned char resource_PluginGui_quarter_sine_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,124,73,68,65,84,88,133,237,150,81,10,
128,32,16,68,215,232,94,221,162,67,118,139,78,150,31,41,209,196,162,174,31,205,199,60,8,177,28,120,77,33,38,51,187,140,128,229,111,129,74,91,228,40,215,40,131,57,154,70,86,247,73,164,133,137,28,113,35,
245,141,118,152,183,136,230,10,52,141,72,4,121,254,17,252,198,189,68,115,0,77,35,18,65,190,251,200,230,172,244,238,207,230,206,123,160,105,36,153,206,35,111,36,130,72,4,145,8,34,17,68,34,136,68,144,12,
123,138,13,78,65,207,81,74,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::quarter_sine_png = (const char*) resource_PluginGui_quarter_sine_png;
const int PluginGui::quarter_sine_pngSize = 181;

// JUCER_RESOURCE: camel_sine_png, 174, "../img/camel_sine.png"
static const unsigned char resource_PluginGui_camel_sine_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,117,73,68,65,84,88,133,237,148,209,9,192,
32,12,68,99,233,94,221,162,67,118,139,78,86,63,218,80,56,41,129,40,245,62,238,129,136,6,225,229,132,20,51,187,140,128,101,182,128,243,45,114,60,43,91,31,38,242,51,107,115,227,93,238,201,115,18,154,68,
36,130,20,243,57,18,253,117,111,61,128,38,17,137,32,18,65,218,201,186,5,47,122,235,200,121,111,52,137,188,115,100,50,52,137,72,4,145,8,34,17,68,34,136,68,16,137,32,21,146,46,14,97,109,79,27,36,0,0,0,0,
73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::camel_sine_png = (const char*) resource_PluginGui_camel_sine_png;
const int PluginGui::camel_sine_pngSize = 174;

// JUCER_RESOURCE: alternating_sine_png, 197, "../img/alternating_sine.png"
static const unsigned char resource_PluginGui_alternating_sine_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,140,73,68,65,84,88,133,99,100,96,
96,248,207,48,8,0,211,64,59,0,6,112,59,100,21,20,15,184,67,232,12,88,48,68,96,161,16,134,131,79,35,48,104,66,100,212,33,232,128,145,1,86,142,16,74,11,52,78,43,131,38,68,70,29,130,14,70,29,130,14,48,75,
86,123,2,58,112,201,103,67,233,169,36,186,224,32,132,26,52,33,130,40,71,8,1,26,151,51,131,38,68,70,29,130,14,70,29,130,14,136,207,53,48,64,163,22,220,160,9,145,81,135,160,3,210,211,8,12,80,185,197,54,
12,66,132,202,96,208,132,8,0,67,200,18,200,95,246,147,104,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::alternating_sine_png = (const char*) resource_PluginGui_alternating_sine_png;
const int PluginGui::alternating_sine_pngSize = 197;

// JUCER_RESOURCE: square_png, 179, "../img/square.png"
static const unsigned char resource_PluginGui_square_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,122,73,68,65,84,88,133,237,150,177,17,128,48,
12,3,29,142,189,216,130,37,216,44,75,66,99,83,40,85,34,238,80,161,111,146,198,190,143,10,59,45,34,238,16,96,251,91,160,216,223,91,39,59,157,92,185,96,34,197,236,203,216,36,19,153,68,44,130,88,4,177,8,
98,17,100,156,172,199,98,167,217,186,43,207,156,228,50,137,180,96,255,35,181,107,86,119,148,90,34,22,65,44,130,88,4,177,8,50,238,154,85,200,223,188,76,34,252,174,249,8,153,68,30,246,154,9,40,60,195,35,
102,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::square_png = (const char*) resource_PluginGui_square_png;
const int PluginGui::square_pngSize = 179;

// JUCER_RESOURCE: logarithmic_saw_png, 206, "../img/logarithmic_saw.png"
static const unsigned char resource_PluginGui_logarithmic_saw_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,149,73,68,65,84,88,133,237,150,81,
10,128,32,16,68,215,232,94,221,194,75,116,158,46,225,37,235,103,37,24,19,139,218,118,64,31,136,172,32,12,15,87,13,34,178,11,1,147,119,128,204,25,36,233,112,15,226,204,8,130,148,65,156,206,10,177,17,39,
104,130,204,197,74,212,57,65,109,12,177,145,12,154,193,245,143,33,54,178,64,189,65,125,247,142,193,125,200,170,179,26,166,49,18,196,234,63,210,58,91,208,149,52,70,234,93,243,150,134,1,164,3,35,72,237,
94,82,104,140,140,32,200,255,65,162,92,118,78,199,70,42,208,4,177,123,107,30,66,99,228,0,184,114,16,107,149,79,109,141,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::logarithmic_saw_png = (const char*) resource_PluginGui_logarithmic_saw_png;
const int PluginGui::logarithmic_saw_pngSize = 206;


//[EndFile] You can add extra defines here...
//[/EndFile]
