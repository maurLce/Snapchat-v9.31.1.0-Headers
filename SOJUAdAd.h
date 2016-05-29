//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdAd.h"

@class NSString;

@interface SOJUAdAd : NSObject <SOJUAdAd>
{
    NSString *_orderId;
    NSString *_orderName;
    NSString *_adId;
    NSString *_adName;
    NSString *_lineItemId;
    NSString *_lineItemName;
    NSString *_brandId;
    NSString *_placementId;
    NSString *_iosAppId;
    NSString *_andAppId;
    NSString *_adType;
}

@property(readonly, copy, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(readonly, copy, nonatomic) NSString *andAppId; // @synthesize andAppId=_andAppId;
@property(readonly, copy, nonatomic) NSString *iosAppId; // @synthesize iosAppId=_iosAppId;
@property(readonly, copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(readonly, copy, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
@property(readonly, copy, nonatomic) NSString *lineItemName; // @synthesize lineItemName=_lineItemName;
@property(readonly, copy, nonatomic) NSString *lineItemId; // @synthesize lineItemId=_lineItemId;
@property(readonly, copy, nonatomic) NSString *adName; // @synthesize adName=_adName;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(readonly, copy, nonatomic) NSString *orderName; // @synthesize orderName=_orderName;
@property(readonly, copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOrderId:(id)arg1 orderName:(id)arg2 adId:(id)arg3 adName:(id)arg4 lineItemId:(id)arg5 lineItemName:(id)arg6 brandId:(id)arg7 placementId:(id)arg8 iosAppId:(id)arg9 andAppId:(id)arg10 adType:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

