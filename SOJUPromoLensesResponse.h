//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUPromoLensesResponse.h"

@class NSArray, NSNumber, NSString;

@interface SOJUPromoLensesResponse : NSObject <SOJUPromoLensesResponse>
{
    NSArray *_storeLenses;
    NSNumber *_displayCount;
    NSString *_lensListSignature;
}

@property(readonly, copy, nonatomic) NSString *lensListSignature; // @synthesize lensListSignature=_lensListSignature;
@property(readonly, copy, nonatomic) NSNumber *displayCount; // @synthesize displayCount=_displayCount;
@property(readonly, copy, nonatomic) NSArray *storeLenses; // @synthesize storeLenses=_storeLenses;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoreLenses:(id)arg1 displayCount:(id)arg2 lensListSignature:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

