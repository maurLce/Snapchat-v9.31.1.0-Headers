//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface SCRequestTrackingInfo : NSObject <NSCoding>
{
    NSString *_trackingId;
    unsigned long long _expirationInDays;
    NSString *_requestId;
    NSString *_type;
    NSString *_mediaType;
}

@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) unsigned long long expirationInDays; // @synthesize expirationInDays=_expirationInDays;
@property(copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
- (void).cxx_destruct;
- (_Bool)isEqualToRequestTrackingInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackingId:(id)arg1 type:(id)arg2 mediaType:(id)arg3 expirationInDays:(unsigned long long)arg4;

@end

