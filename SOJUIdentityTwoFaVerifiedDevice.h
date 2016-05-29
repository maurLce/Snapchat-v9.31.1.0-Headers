//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUIdentityTwoFaVerifiedDevice.h"

@class NSNumber, NSString;

@interface SOJUIdentityTwoFaVerifiedDevice : NSObject <SOJUIdentityTwoFaVerifiedDevice>
{
    NSString *_idValue;
    NSString *_name;
    NSNumber *_lastLogin;
}

@property(readonly, copy, nonatomic) NSNumber *lastLogin; // @synthesize lastLogin=_lastLogin;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdValue:(id)arg1 name:(id)arg2 lastLogin:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

