//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface SOJUStickerPackBuilder : NSObject
{
    NSString *_packId;
    NSString *_iconUrl;
    NSString *_url;
    NSNumber *_version;
    NSNumber *_active;
    NSArray *_target;
}

+ (id)withJUStickerPack:(id)arg1;
- (void).cxx_destruct;
- (id)setTarget:(id)arg1;
- (id)setActive:(id)arg1;
- (id)setVersion:(id)arg1;
- (id)setUrl:(id)arg1;
- (id)setIconUrl:(id)arg1;
- (id)setPackId:(id)arg1;
- (id)build;

@end

