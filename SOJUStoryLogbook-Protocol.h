//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUPartialStoryLogbook.h"

@class NSArray, SOJUStory, SOJUStoryExtra;

@protocol SOJUStoryLogbook <NSObject, NSCoding, NSCopying, SOJUPartialStoryLogbook>
@property(readonly, copy, nonatomic) NSArray *storyNotes;
@property(readonly, copy, nonatomic) SOJUStoryExtra *storyExtras;
@property(readonly, copy, nonatomic) SOJUStory *story;
@end

