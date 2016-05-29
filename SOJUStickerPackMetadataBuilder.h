//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface SOJUStickerPackMetadataBuilder : NSObject
{
    NSString *_packId;
    NSString *_packType;
    NSNumber *_version;
    NSArray *_target;
    NSNumber *_active;
    NSNumber *_hasBanner;
    NSArray *_stickers;
}

+ (id)withJUStickerPackMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)setStickers:(id)arg1;
- (id)setHasBanner:(id)arg1;
- (id)setActive:(id)arg1;
- (id)setTarget:(id)arg1;
- (id)setVersion:(id)arg1;
- (id)setPackType:(id)arg1;
- (id)setPackId:(id)arg1;
- (id)build;

@end

