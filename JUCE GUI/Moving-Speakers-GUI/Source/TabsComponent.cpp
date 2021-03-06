/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.7

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
#include "SettingsComponent.h"
//[/Headers]

#include "TabsComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
TabsComponent::TabsComponent (rdd::MidiController* controller)
    : _midiController(controller)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    tabbedComponent.reset (new TabbedComponent (TabbedButtonBar::TabsAtTop));
    addAndMakeVisible (tabbedComponent.get());
    tabbedComponent->setTabBarDepth (30);
    tabbedComponent->addTab (TRANS("Manual Control"), Colours::lightgrey, 0, false);
    tabbedComponent->addTab (TRANS("Waypoint Editor"), Colours::lightgrey, 0, false);
    tabbedComponent->addTab (TRANS("Settings"), Colours::lightgrey, new Viewport(), true);
    tabbedComponent->setCurrentTabIndex (0);


    //[UserPreSize]

	Colour tabColor = getLookAndFeel().findColour(ResizableWindow::backgroundColourId);

	tabbedComponent->setTabBackgroundColour(0, tabColor);
	tabbedComponent->setTabBackgroundColour(1, tabColor);
	tabbedComponent->setTabBackgroundColour(2, tabColor);

    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..

	dynamic_cast<Viewport*>(tabbedComponent->getTabContentComponent(2))->setViewedComponent(new SettingsComponent(_midiController));

    //[/Constructor]
}

TabsComponent::~TabsComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    tabbedComponent = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void TabsComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void TabsComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    tabbedComponent->setBounds (0, 0, proportionOfWidth (1.0000f), proportionOfHeight (1.0000f));
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="TabsComponent" componentName=""
                 parentClasses="public Component" constructorParams="rdd::MidiController* controller"
                 variableInitialisers="_midiController(controller)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330" fixedSize="0"
                 initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <TABBEDCOMPONENT name="new tabbed component" id="96829c8fe1730fce" memberName="tabbedComponent"
                   virtualName="" explicitFocusOrder="0" pos="0 0 100% 100%" orientation="top"
                   tabBarDepth="30" initialTab="0">
    <TAB name="Manual Control" colour="ffd3d3d3" useJucerComp="0" contentClassName=""
         constructorParams="" jucerComponentFile=""/>
    <TAB name="Waypoint Editor" colour="ffd3d3d3" useJucerComp="0" contentClassName=""
         constructorParams="" jucerComponentFile=""/>
    <TAB name="Settings" colour="ffd3d3d3" useJucerComp="0" contentClassName="Viewport"
         constructorParams="" jucerComponentFile=""/>
  </TABBEDCOMPONENT>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

