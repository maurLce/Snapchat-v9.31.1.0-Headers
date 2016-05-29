//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADStatisticDictionaryDelegate.h"

@class GADAd, GADContentQueue, GADScheduler, GADSession, GADStatisticDictionary, NSArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface GADApplication : NSObject <GADStatisticDictionaryDelegate>
{
    GADAd *_backgroundingAd;
    id <NSObject> _appBecameActiveObserver;
    GADContentQueue *_contentQueue;
    GADScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSArray *_availableAdapterNames;
    unsigned long long _activeViewID;
    _Bool _appFinishedLaunching;
    GADSession *_currentSession;
    GADStatisticDictionary *_statistics;
    NSObject<OS_dispatch_queue> *_notificationSerialQueue;
    NSObject<OS_dispatch_queue> *_statisticsSerialQueue;
    unsigned long long _sequenceNumber;
    NSMutableSet *_adStatistics;
    NSMutableDictionary *_slotStatistics;
}

+ (id)sharedInstance;
+ (void)load;
@property(readonly, nonatomic) NSMutableDictionary *slotStatistics; // @synthesize slotStatistics=_slotStatistics;
@property(readonly, nonatomic) NSMutableSet *adStatistics; // @synthesize adStatistics=_adStatistics;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) _Bool appFinishedLaunching; // @synthesize appFinishedLaunching=_appFinishedLaunching;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statisticsSerialQueue; // @synthesize statisticsSerialQueue=_statisticsSerialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationSerialQueue; // @synthesize notificationSerialQueue=_notificationSerialQueue;
@property(readonly, nonatomic) GADStatisticDictionary *statistics; // @synthesize statistics=_statistics;
@property(readonly, nonatomic) GADSession *currentSession; // @synthesize currentSession=_currentSession;
- (void).cxx_destruct;
- (unsigned long long)nextActiveViewID;
- (void)GADLinkCategories;
- (void)didUpdateStatisticDictionary:(id)arg1;
- (id)notificationQueue;
- (id)pendingAdStatistics;
- (id)iTunesMetadata;
- (id)iTunesMetadataPath;
- (_Bool)isAppActive;
- (void)runEarlyActivities;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

