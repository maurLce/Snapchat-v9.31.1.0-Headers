//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSTimer;

@interface GADScheduler : NSObject
{
    long long _taskID;
    NSMutableDictionary *_blocks;
    double _interval;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)executeBlocks;
- (void)unscheduleTaskWithID:(long long)arg1;
- (long long)taskIDScheduledOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)description;
- (id)initWithInterval:(double)arg1;

@end

