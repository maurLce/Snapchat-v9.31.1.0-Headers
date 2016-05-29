//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSString;

@protocol SCStickerState <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *trackingTrajectory;
@property(readonly, nonatomic) _Bool isTracking;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) struct CGPoint center;
@property(readonly, nonatomic) struct CGSize relativeSize;
@property(readonly, copy, nonatomic) NSString *emoji;
@property(readonly, nonatomic) unsigned long long type;
@end

