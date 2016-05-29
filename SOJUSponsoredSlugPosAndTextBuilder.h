//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SOJUStrRect;

@interface SOJUSponsoredSlugPosAndTextBuilder : NSObject
{
    SOJUStrRect *_viewRect;
    NSString *_alignment;
    NSString *_position;
    NSString *_hmargin;
    NSString *_vmargin;
    NSString *_text;
    NSString *_sponsoredText;
    NSString *_sponsoredChannelText;
    NSNumber *_timeBeforeFadeout;
    NSString *_longformText;
    NSNumber *_longformTimeBeforeFadeout;
    NSNumber *_pulseViewStartingOpacity;
    NSNumber *_pulsesCount;
    NSNumber *_pulseDurationMillis;
    NSNumber *_pulseBreakDurationMillis;
    NSNumber *_pulseViewBackgroundOpacity;
    NSNumber *_slugRemainsAfterPulsing;
}

+ (id)withJUSponsoredSlugPosAndText:(id)arg1;
- (void).cxx_destruct;
- (id)setSlugRemainsAfterPulsing:(id)arg1;
- (id)setPulseViewBackgroundOpacity:(id)arg1;
- (id)setPulseBreakDurationMillis:(id)arg1;
- (id)setPulseDurationMillis:(id)arg1;
- (id)setPulsesCount:(id)arg1;
- (id)setPulseViewStartingOpacity:(id)arg1;
- (id)setLongformTimeBeforeFadeout:(id)arg1;
- (id)setLongformText:(id)arg1;
- (id)setTimeBeforeFadeout:(id)arg1;
- (id)setSponsoredChannelText:(id)arg1;
- (id)setSponsoredText:(id)arg1;
- (id)setText:(id)arg1;
- (id)setVmargin:(id)arg1;
- (id)setHmargin:(id)arg1;
- (id)setPosition:(id)arg1;
- (id)setAlignment:(id)arg1;
- (id)setViewRect:(id)arg1;
- (id)build;

@end

