//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCFilterableProtocol.h"
#import "SCMediaOwnerProtocol.h"
#import "SCPublicContentMiniProfileDataEntry.h"
#import "SCStoriesViewDataModel.h"
#import "SCTileDataSource.h"

@class NSArray, NSDate, NSString, NSURL, SCSimilarSnaps, SCStoryAdStreamInfo, SCTile, Story;

@interface FriendStories : NSObject <NSCoding, SCStoriesViewDataModel, SCMediaOwnerProtocol, SCFilterableProtocol, SCPublicContentMiniProfileDataEntry, SCTileDataSource>
{
    SCSimilarSnaps *_similarSnaps;
    NSString *_viewJITText;
    _Bool _local;
    _Bool _shared;
    _Bool _hasCustomDescriptionForLiveStory;
    _Bool _allowStoryExplorer;
    _Bool _showViewingJIT;
    _Bool _hasUserStartedViewingUnviewedStories;
    _Bool _hasUserStartedViewingStories;
    long long _unviewedSingleIconMediaState;
    NSURL *_unviewedSingleIconURL;
    long long _fullyViewedSingleIconMediaState;
    NSURL *_fullyViewedSingleIconURL;
    SCStoryAdStreamInfo *_adStreamInfo;
    long long _batchState;
    long long _unviewedBatchState;
    long long _thumbnailState;
    NSString *_sharedId;
    NSString *_mostRecentStoryId;
    NSDate *_mostRecentStoryTimestamp;
    FriendStories *_parentStory;
    NSString *_snapId;
    NSString *_rootSnapId;
    NSArray *_stories;
    NSString *_username;
    NSString *_kvoUsername;
    NSString *_displayName;
    Story *_currentStoryForViewingTypeAll;
    long long _loadContext;
    long long _unviewedLoadContext;
    SCTile *_tile;
    unsigned long long _explorerLevel;
    Story *_storyWithActiveThumbnail;
    long long _thumbnailsBatchState;
    long long _unviewedThumbnailsBatchState;
    unsigned long long _numberOfSnapsViewedAfterAd;
    unsigned long long _numberOfUnviewedSnapsViewedAfterAd;
    unsigned long long _numberOfSnapsViewedSinceLastAdOpportunity;
    long long _nextAdOpportunityPosition;
    NSString *_profileDescription;
    NSString *_deepLinkURL;
}

+ (long long)uniqueCellDataIdForUsername:(id)arg1 section:(long long)arg2;
+ (long long)uniqueCellDataIdForUsername:(id)arg1;
+ (unsigned long long)numberOfSharedStoriesToBatchAutoload;
+ (unsigned long long)numberOfFriendStoriesToBatchAutoload;
+ (unsigned long long)numberOfLoadedSnapsNeededAfterViewing;
+ (unsigned long long)numberOfSnapsToLoadWhileViewingStory;
+ (unsigned long long)numberOfNextLevelSnapsToLoad;
+ (id)fastCodingKeys;
+ (id)storiesFromDictionary:(id)arg1;
+ (id)friendStoriesFromDictionary:(id)arg1;
@property(copy, nonatomic) NSString *deepLinkURL; // @synthesize deepLinkURL=_deepLinkURL;
@property(copy, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
@property(nonatomic) long long nextAdOpportunityPosition; // @synthesize nextAdOpportunityPosition=_nextAdOpportunityPosition;
@property(nonatomic) unsigned long long numberOfSnapsViewedSinceLastAdOpportunity; // @synthesize numberOfSnapsViewedSinceLastAdOpportunity=_numberOfSnapsViewedSinceLastAdOpportunity;
@property(nonatomic) unsigned long long numberOfUnviewedSnapsViewedAfterAd; // @synthesize numberOfUnviewedSnapsViewedAfterAd=_numberOfUnviewedSnapsViewedAfterAd;
@property(nonatomic) unsigned long long numberOfSnapsViewedAfterAd; // @synthesize numberOfSnapsViewedAfterAd=_numberOfSnapsViewedAfterAd;
@property(nonatomic) _Bool hasUserStartedViewingStories; // @synthesize hasUserStartedViewingStories=_hasUserStartedViewingStories;
@property(nonatomic) _Bool hasUserStartedViewingUnviewedStories; // @synthesize hasUserStartedViewingUnviewedStories=_hasUserStartedViewingUnviewedStories;
@property(nonatomic) _Bool showViewingJIT; // @synthesize showViewingJIT=_showViewingJIT;
@property(nonatomic) long long unviewedThumbnailsBatchState; // @synthesize unviewedThumbnailsBatchState=_unviewedThumbnailsBatchState;
@property(nonatomic) long long thumbnailsBatchState; // @synthesize thumbnailsBatchState=_thumbnailsBatchState;
@property(retain, nonatomic) Story *storyWithActiveThumbnail; // @synthesize storyWithActiveThumbnail=_storyWithActiveThumbnail;
@property(nonatomic) unsigned long long explorerLevel; // @synthesize explorerLevel=_explorerLevel;
@property(retain, nonatomic) SCTile *tile; // @synthesize tile=_tile;
@property(nonatomic) long long unviewedLoadContext; // @synthesize unviewedLoadContext=_unviewedLoadContext;
@property(nonatomic) long long loadContext; // @synthesize loadContext=_loadContext;
@property(retain, nonatomic) Story *currentStoryForViewingTypeAll; // @synthesize currentStoryForViewingTypeAll=_currentStoryForViewingTypeAll;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *kvoUsername; // @synthesize kvoUsername=_kvoUsername;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSArray *stories; // @synthesize stories=_stories;
@property(copy, nonatomic) NSString *rootSnapId; // @synthesize rootSnapId=_rootSnapId;
@property(copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(nonatomic) __weak FriendStories *parentStory; // @synthesize parentStory=_parentStory;
@property(retain, nonatomic) NSDate *mostRecentStoryTimestamp; // @synthesize mostRecentStoryTimestamp=_mostRecentStoryTimestamp;
@property(retain, nonatomic) NSString *mostRecentStoryId; // @synthesize mostRecentStoryId=_mostRecentStoryId;
@property(nonatomic) _Bool allowStoryExplorer; // @synthesize allowStoryExplorer=_allowStoryExplorer;
@property(nonatomic) _Bool hasCustomDescriptionForLiveStory; // @synthesize hasCustomDescriptionForLiveStory=_hasCustomDescriptionForLiveStory;
@property(nonatomic, getter=isShared) _Bool shared; // @synthesize shared=_shared;
@property(copy, nonatomic) NSString *sharedId; // @synthesize sharedId=_sharedId;
@property(nonatomic, getter=isLocal) _Bool local; // @synthesize local=_local;
@property(nonatomic) long long thumbnailState; // @synthesize thumbnailState=_thumbnailState;
@property(nonatomic) long long unviewedBatchState; // @synthesize unviewedBatchState=_unviewedBatchState;
@property(nonatomic) long long batchState; // @synthesize batchState=_batchState;
@property(retain, nonatomic) SCStoryAdStreamInfo *adStreamInfo; // @synthesize adStreamInfo=_adStreamInfo;
@property(retain, nonatomic) NSURL *fullyViewedSingleIconURL; // @synthesize fullyViewedSingleIconURL=_fullyViewedSingleIconURL;
@property(nonatomic) long long fullyViewedSingleIconMediaState; // @synthesize fullyViewedSingleIconMediaState=_fullyViewedSingleIconMediaState;
@property(retain, nonatomic) NSURL *unviewedSingleIconURL; // @synthesize unviewedSingleIconURL=_unviewedSingleIconURL;
@property(nonatomic) long long unviewedSingleIconMediaState; // @synthesize unviewedSingleIconMediaState=_unviewedSingleIconMediaState;
- (void).cxx_destruct;
- (unsigned long long)viewLocationPositionForLiveStories;
- (void)clearSimilarSnapsForSnapId:(id)arg1;
- (void)clearSimilarSnaps;
- (void)similarSnapsForSnapWithId:(id)arg1 level:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)mediaFileNames;
- (id)cacheMediaIds;
- (void)setIconMediaState:(long long)arg1 iconType:(unsigned long long)arg2;
- (_Bool)unviewedIconMediaIsLoaded;
- (_Bool)singleIconMediaIsLoaded;
- (void)fetchMediaIfNecessaryForIconType:(unsigned long long)arg1 userInitiated:(_Bool)arg2;
- (void)fetchSingleIconMediaIfNecessaryUserInitiated:(_Bool)arg1;
- (void)fetchSingleIconMediaIfNecessary;
- (void)iconWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cacheKeyForIconType:(unsigned long long)arg1;
- (long long)uniqueCellDataIdWithSection:(long long)arg1;
- (long long)uniqueCellDataId;
- (unsigned long long)numberOfLoadedSnapsNeededBeforeViewingForViewingType:(long long)arg1;
- (unsigned long long)numberOfSnapsToLoadInStoryBeforeViewingForViewingType:(long long)arg1;
- (unsigned long long)numberOfLoadedStoryMediaNeededForUnviewedLoadedState;
- (unsigned long long)numberOfLoadedStoryMediaNeededForLoadedState;
- (id)fullyViewedStateKVOKeyPath;
- (_Bool)isFullyViewed;
- (id)iconLoadStateKVOKeyPath;
- (void)publicContentMiniProfileImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)publicContentMiniProfileButtonText;
- (id)publicContentMiniProfileDeeplinkURL;
- (void)_setJITText;
- (id)publicContentMiniProfileDescription;
- (id)publicContentMiniProfileTitle;
- (id)friendStoriesCollection;
- (_Bool)matchesByDisplayName:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)resetFriendsStoryThumbnailsState;
- (void)resetFriendsStoryState;
- (id)oldestStoryToView;
- (void)removeStoriesWithIds:(id)arg1;
- (void)removeStoriesWithClientIds:(id)arg1;
- (id)unviewedStories;
- (_Bool)hasSingleIcon;
- (_Bool)containsSharedStory;
- (_Bool)onlyContainsUnviewedStories;
- (_Bool)hasUnviewedStories;
- (_Bool)hasStories;
- (_Bool)readyToPlayForViewingType:(long long)arg1;
- (void)fetchThumbnailMedia:(id)arg1;
- (void)fetchMedia:(id)arg1 userInitiated:(_Bool)arg2;
- (void)verifyMediaState:(long long)arg1 forMedia:(id)arg2 type:(id)arg3 storyId:(id)arg4;
- (void)fetchThumbnailMedia;
- (id)storyWithThumbnailToDisplay;
- (unsigned long long)numberOfSnapsRemainingForViewingType:(long long)arg1;
- (long long)indexOfViewingStory;
- (long long)indexOfFirstUnviewedStory;
- (id)nextVideoStoryForViewingType:(long long)arg1;
- (id)nextStoryForViewingType:(long long)arg1;
- (id)storyForViewingType:(long long)arg1;
- (void)fetchMediaForBatch:(unsigned long long)arg1 viewingType:(long long)arg2 startAtIndex:(long long)arg3 loadContext:(long long)arg4 userInitated:(_Bool)arg5 fetchNextLevelSnaps:(_Bool)arg6 onLaunch:(_Bool)arg7;
- (void)fetchMediaForBatch:(unsigned long long)arg1 viewingType:(long long)arg2 loadContext:(long long)arg3 userInitiated:(_Bool)arg4 fetchNextLevelSnaps:(_Bool)arg5 onLaunch:(_Bool)arg6;
- (void)fetchMediaForBatch:(unsigned long long)arg1 viewingType:(long long)arg2 loadContext:(long long)arg3 userInitiated:(_Bool)arg4 onLaunch:(_Bool)arg5;
- (void)resetMostRecentStoryInfo;
- (void)updateWithViewedStoryIds:(id)arg1;
- (void)updateWithStories:(id)arg1 isDelta:(_Bool)arg2;
- (void)updateWithFriendStories:(id)arg1 isDelta:(_Bool)arg2;
- (void)handleKeyChange:(id)arg1 toStory:(id)arg2;
- (void)handleChangetoStories:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)totalTimeLeftForViewingType:(long long)arg1;
- (double)totalTimeForViewingType:(long long)arg1;
- (void)removeIndividualStoriesObservers:(id)arg1;
- (void)removeStoriesObservers;
- (void)addIndividualStoriesObservers:(id)arg1;
- (void)addStoriesObservers;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (_Bool)preferFastCoding;
- (void)didDecodeObject;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)resetDiskLoadingState;
- (id)initWithCoder:(id)arg1;
- (_Bool)isNormalFriendStories;
- (id)initWithParentStory:(id)arg1 snapId:(id)arg2 similarSnaps:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

