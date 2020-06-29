

#include "FileButtons.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
FileButtons::FileButtons ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]


    //[UserPreSize]
    //[/UserPreSize]

    addAndMakeVisible(fileButtonsArr.add(new TextButton("Save")));
    addAndMakeVisible(fileButtonsArr.add(new TextButton("Load")));
    addAndMakeVisible(fileButtonsArr.add(new TextButton("Import")));
    addAndMakeVisible(fileButtonsArr.add(new TextButton("Export")));


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

FileButtons::~FileButtons()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void FileButtons::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]


    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void FileButtons::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]
FlexBox fb;
    fb.flexWrap = FlexBox::Wrap::wrap;
    fb.justifyContent = FlexBox::JustifyContent::center;
    fb.alignContent = FlexBox::AlignContent::center;

    for (auto* b : fileButtonsArr)
        fb.items.add(FlexItem(*b).withMinWidth(60.0f).withMinHeight(40.0f));

    fb.performLayout(getLocalBounds().toFloat());
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

<JUCER_COMPONENT documentType="Component" className="FileButtons" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
