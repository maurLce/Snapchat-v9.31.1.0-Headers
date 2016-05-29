//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUMedia, SOJUSticker;

@protocol SOJUMessageBody <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *obfuscation;
@property(readonly, copy, nonatomic) NSString *storyTitle;
@property(readonly, copy, nonatomic) NSArray *mediaCardAttributes;
@property(readonly, copy, nonatomic) NSArray *attributes;
@property(readonly, copy, nonatomic) NSString *text;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) SOJUSticker *sticker;
@property(readonly, copy, nonatomic) NSArray *medias;
@property(readonly, copy, nonatomic) SOJUMedia *media;
@end

