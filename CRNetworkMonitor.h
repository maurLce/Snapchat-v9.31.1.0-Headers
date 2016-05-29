//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRReachability, CritterImpl, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CRNetworkMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _onWifi;
    double _currentLatitude;
    double _currentLongitude;
    _Bool _swizzlingComplete;
    CritterImpl *_critterDelegate;
    NSMutableArray *_blacklistFilters;
    NSMutableArray *_otherFilters;
    NSMutableDictionary *_connections;
    NSString *_baseURL;
    NSString *_endpoint;
    NSString *_ignoreEndpoint;
    CRReachability *_wifiReachability;
    NSString *_delegateFileName;
    NSString *_appUUID;
    NSArray *_detectedClasses;
}

@property(retain) NSArray *detectedClasses; // @synthesize detectedClasses=_detectedClasses;
@property(retain) NSString *appUUID; // @synthesize appUUID=_appUUID;
@property(retain) NSString *delegateFileName; // @synthesize delegateFileName=_delegateFileName;
@property(retain) CRReachability *wifiReachability; // @synthesize wifiReachability=_wifiReachability;
@property(retain) NSString *ignoreEndpoint; // @synthesize ignoreEndpoint=_ignoreEndpoint;
@property(copy) NSString *endpoint; // @synthesize endpoint=_endpoint;
@property(copy) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property(retain) NSMutableDictionary *connections; // @synthesize connections=_connections;
@property(retain) NSMutableArray *otherFilters; // @synthesize otherFilters=_otherFilters;
@property(retain) NSMutableArray *blacklistFilters; // @synthesize blacklistFilters=_blacklistFilters;
@property(nonatomic) CritterImpl *critterDelegate; // @synthesize critterDelegate=_critterDelegate;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)startCalledForConnection:(id)arg1;
- (void)swizzleDidFailWithErrorForClass:(Class)arg1;
- (void)swizzleDidFinishLoadingForClass:(Class)arg1;
- (void)swizzleDidReceiveDataForClass:(Class)arg1;
- (void)swizzleDidReceiveResponseForClass:(Class)arg1;
- (void)swizzleDidSendBodyDataForClass:(Class)arg1;
- (void)swizzleDelegateClass:(Class)arg1;
- (void)swizzleNSURLConnectionStart;
- (void)storeDelegateCache:(id)arg1;
- (id)findDelegates;
- (id)loadDelegatesFromCache;
- (void)instrumentNSURLConnection;
- (void)logConnection:(id)arg1 finishedWithError:(id)arg2;
- (id)requestStateForConnection:(id)arg1 allowCreate:(_Bool)arg2;
- (id)requestStateForConnection:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (_Bool)enableReachabilityUpdates;
- (void)updateLocation:(id)arg1;
- (void)addFilter:(id)arg1;
- (void)startMonitoring;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 andBaseURL:(id)arg2 andEndpoint:(id)arg3 andFilters:(id)arg4 andDetectedClasses:(id)arg5;

@end

