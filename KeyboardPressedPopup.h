//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GHButton, NSString, UILabel;

@interface KeyboardPressedPopup : UIView
{
    GHButton *_parent;
    NSString *_artworkPath;
    UILabel *_textLabel;
}

@property(nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSString *artworkPath; // @synthesize artworkPath=_artworkPath;
@property(nonatomic) GHButton *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawArtworkAtPath:(id)arg1 intoContext:(struct CGContext *)arg2;
- (void)drawBackgroundIntoContext:(struct CGContext *)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

