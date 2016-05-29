//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class KeyboardPressedPopup, NSString, UIColor, UILabel, UIView;

@interface GHButton : UIControl
{
    UIColor *textColor;
    UIColor *textColorPressed;
    UIColor *ringColor;
    NSString *title;
    UILabel *textLabel;
    double textFontSize;
    _Bool useBoldText;
    _Bool showShadow;
    _Bool _useRadialGradient;
    _Bool _drawsChrome;
    struct CGGradient *_faceGradient;
    struct CGGradient *_faceGradientPressed;
    struct CGGradient *_faceGradientSelected;
    UIColor *textShadowColor;
    unsigned long long _scheme;
    UIColor *_textColorSelected;
    NSString *_artworkPath;
    NSString *_selectedArtworkPath;
    NSString *_pressedArtworkPath;
    UIView *_artworkView;
    KeyboardPressedPopup *_pressedView;
}

+ (void)makeSureLoaded;
@property(retain, nonatomic) KeyboardPressedPopup *pressedView; // @synthesize pressedView=_pressedView;
@property(nonatomic) __weak UIView *artworkView; // @synthesize artworkView=_artworkView;
@property(retain, nonatomic) NSString *pressedArtworkPath; // @synthesize pressedArtworkPath=_pressedArtworkPath;
@property(retain, nonatomic) NSString *selectedArtworkPath; // @synthesize selectedArtworkPath=_selectedArtworkPath;
@property(retain, nonatomic) NSString *artworkPath; // @synthesize artworkPath=_artworkPath;
@property(nonatomic) _Bool drawsChrome; // @synthesize drawsChrome=_drawsChrome;
@property(retain, nonatomic) UIColor *textColorSelected; // @synthesize textColorSelected=_textColorSelected;
@property(nonatomic) unsigned long long scheme; // @synthesize scheme=_scheme;
@property(nonatomic) _Bool useRadialGradient; // @synthesize useRadialGradient=_useRadialGradient;
@property(retain, nonatomic) UIColor *textShadowColor; // @synthesize textShadowColor;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel;
@property(retain, nonatomic) UIColor *ringColor; // @synthesize ringColor;
@property(retain, nonatomic) UIColor *textColorPressed; // @synthesize textColorPressed;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
@property(nonatomic) struct CGGradient *faceGradientSelected; // @synthesize faceGradientSelected=_faceGradientSelected;
@property(nonatomic) struct CGGradient *faceGradientPressed; // @synthesize faceGradientPressed=_faceGradientPressed;
@property(nonatomic) struct CGGradient *faceGradient; // @synthesize faceGradient=_faceGradient;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawArtworkAtPath:(id)arg1 intoContext:(struct CGContext *)arg2;
- (void)drawArtWithRenderer:(id)arg1 intoContext:(struct CGContext *)arg2;
- (void)drawBackgroundIntoContext:(struct CGContext *)arg1;
@property(retain, nonatomic) NSString *title;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setNeedsDisplay;
- (void)syncTextColor;
- (void)setupForScheme:(unsigned long long)arg1;
@property(nonatomic) long long schemeNumber;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

