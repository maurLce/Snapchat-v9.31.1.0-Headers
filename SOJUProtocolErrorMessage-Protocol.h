//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUMessage.h"

@class NSString;

@protocol SOJUProtocolErrorMessage <NSObject, NSCoding, NSCopying, SOJUMessage>
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSString *type;
@end

