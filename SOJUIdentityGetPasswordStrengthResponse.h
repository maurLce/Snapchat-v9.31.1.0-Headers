//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUIdentityGetPasswordStrengthResponse.h"

@class NSNumber, NSString;

@interface SOJUIdentityGetPasswordStrengthResponse : NSObject <SOJUIdentityGetPasswordStrengthResponse>
{
    NSString *_passwordStrength;
    NSString *_message;
    NSNumber *_couldSave;
}

@property(readonly, copy, nonatomic) NSNumber *couldSave; // @synthesize couldSave=_couldSave;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *passwordStrength; // @synthesize passwordStrength=_passwordStrength;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPasswordStrength:(id)arg1 message:(id)arg2 couldSave:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

