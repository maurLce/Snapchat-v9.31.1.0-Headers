//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCManagedDeviceCapacityAnalyzerListener.h"

@class NSString;

@interface SCManagedDeviceCapacityAnalyzerListenerAnnouncer : NSObject <SCManagedDeviceCapacityAnalyzerListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCManagedDeviceCapacityAnalyzerListener>, std::__1::allocator<__weak id<SCManagedDeviceCapacityAnalyzerListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)managedDeviceCapacityAnalyzer:(id)arg1 didChangeAdjustingFocus:(_Bool)arg2;
- (void)managedDeviceCapacityAnalyzer:(id)arg1 didChangeAdjustingExposure:(_Bool)arg2;
- (void)managedDeviceCapacityAnalyzer:(id)arg1 didChangeLowLightCondition:(_Bool)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

