//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BCOV_RACStream : NSObject
{
    NSString *_name;
}

+ (id)return:(id)arg1;
+ (id)empty;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)setNameWithFormat:(id)arg1;
- (id)zipWith:(id)arg1;
- (id)concat:(id)arg1;
- (id)bind:(CDUnknownBlockType)arg1;
- (id)init;

@end

