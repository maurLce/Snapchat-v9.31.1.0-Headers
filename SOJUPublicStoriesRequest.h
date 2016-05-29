//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUPublicStoriesRequest.h"

@class NSNumber, NSString;

@interface SOJUPublicStoriesRequest : NSObject <SOJUPublicStoriesRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_sharedId;
    NSNumber *_screenWidthIn;
    NSNumber *_screenHeightIn;
    NSNumber *_screenWidthPx;
    NSNumber *_screenHeightPx;
}

@property(readonly, copy, nonatomic) NSNumber *screenHeightPx; // @synthesize screenHeightPx=_screenHeightPx;
@property(readonly, copy, nonatomic) NSNumber *screenWidthPx; // @synthesize screenWidthPx=_screenWidthPx;
@property(readonly, copy, nonatomic) NSNumber *screenHeightIn; // @synthesize screenHeightIn=_screenHeightIn;
@property(readonly, copy, nonatomic) NSNumber *screenWidthIn; // @synthesize screenWidthIn=_screenWidthIn;
@property(readonly, copy, nonatomic) NSString *sharedId; // @synthesize sharedId=_sharedId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 sharedId:(id)arg4 screenWidthIn:(id)arg5 screenHeightIn:(id)arg6 screenWidthPx:(id)arg7 screenHeightPx:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

