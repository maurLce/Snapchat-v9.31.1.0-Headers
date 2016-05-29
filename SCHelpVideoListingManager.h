//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, SCCache;

@interface SCHelpVideoListingManager : NSObject
{
    SCCache *_cache;
    NSDictionary *_videos;
    NSArray *_categories;
    long long *_numVideos;
}

+ (id)shared;
@property(nonatomic) long long *numVideos; // @synthesize numVideos=_numVideos;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSDictionary *videos; // @synthesize videos=_videos;
- (void).cxx_destruct;
- (void)initFirstFrameMediaForVideos;
- (void)maybeFetchHelpVideoListingFromLaunch:(id)arg1;
- (void)fetchHelpVideoListingFromServerUserInitiated:(_Bool)arg1 cacheKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchHelpVideoListingFromServerUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchHelpVideoListingFromCacheUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchHelpVideoListingUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchThumbnailMediaForVideos;
- (id)videosForCategory:(id)arg1;
- (void)updateWithJSONDictionary:(id)arg1;
- (void)clearListing;
- (id)cache;
- (void)_removeObservers;
- (void)_addObservers;
- (void)dealloc;
- (id)init;

@end

