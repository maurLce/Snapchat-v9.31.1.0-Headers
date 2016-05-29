//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSURL, NSURLCredential;

@interface AFHTTPClient : NSObject <NSCoding, NSCopying>
{
    _Bool _allowsInvalidSSLCertificate;
    int _parameterEncoding;
    int _networkReachabilityStatus;
    int _defaultSSLPinningMode;
    NSURL *_baseURL;
    unsigned long long _stringEncoding;
    NSMutableArray *_registeredHTTPOperationClassNames;
    NSMutableDictionary *_defaultHeaders;
    NSURLCredential *_defaultCredential;
    NSOperationQueue *_operationQueue;
    struct __SCNetworkReachability *_networkReachability;
    CDUnknownBlockType _networkReachabilityStatusBlock;
}

+ (id)clientWithBaseURL:(id)arg1;
@property(nonatomic) _Bool allowsInvalidSSLCertificate; // @synthesize allowsInvalidSSLCertificate=_allowsInvalidSSLCertificate;
@property(nonatomic) int defaultSSLPinningMode; // @synthesize defaultSSLPinningMode=_defaultSSLPinningMode;
@property(copy, nonatomic) CDUnknownBlockType networkReachabilityStatusBlock; // @synthesize networkReachabilityStatusBlock=_networkReachabilityStatusBlock;
@property(nonatomic) int networkReachabilityStatus; // @synthesize networkReachabilityStatus=_networkReachabilityStatus;
@property(nonatomic) struct __SCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLCredential *defaultCredential; // @synthesize defaultCredential=_defaultCredential;
@property(retain, nonatomic) NSMutableDictionary *defaultHeaders; // @synthesize defaultHeaders=_defaultHeaders;
@property(retain, nonatomic) NSMutableArray *registeredHTTPOperationClassNames; // @synthesize registeredHTTPOperationClassNames=_registeredHTTPOperationClassNames;
@property(nonatomic) int parameterEncoding; // @synthesize parameterEncoding=_parameterEncoding;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)patchPath:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)deletePath:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)putPath:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)postPath:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getPath:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)enqueueBatchOfHTTPRequestOperations:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)enqueueBatchOfHTTPRequestOperationsWithRequests:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cancelAllHTTPOperationsWithMethod:(id)arg1 path:(id)arg2;
- (void)enqueueHTTPRequestOperation:(id)arg1;
- (id)HTTPRequestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)requestWithMultipartFormRequest:(id)arg1 writingStreamContentsToFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)multipartFormRequestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4;
- (id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3;
- (void)clearAuthorizationHeader;
- (void)setAuthorizationHeaderWithToken:(id)arg1;
- (void)setAuthorizationHeaderWithUsername:(id)arg1 password:(id)arg2;
- (void)setDefaultHeader:(id)arg1 value:(id)arg2;
- (id)defaultValueForHeader:(id)arg1;
- (void)unregisterHTTPOperationClass:(Class)arg1;
- (_Bool)registerHTTPOperationClass:(Class)arg1;
- (void)setReachabilityStatusChangeBlock:(CDUnknownBlockType)arg1;
- (void)stopMonitoringNetworkReachability;
- (void)startMonitoringNetworkReachability;
- (id)description;
- (void)dealloc;
- (id)initWithBaseURL:(id)arg1;
- (id)init;

@end

