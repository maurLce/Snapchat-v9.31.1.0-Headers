//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MediaDataSource.h"
#import "MediaDelegate.h"
#import "MediaImageProcessingDelegate.h"
#import "MediaUploadDelegate.h"
#import "NSCoding.h"

@class CLLocation, Media, NSArray, NSData, NSDate, NSMutableArray, NSMutableDictionary, NSString, SCSnapCommonLoggingParameters, SnapVideoFilter;

@interface EphemeralMedia : NSObject <MediaDataSource, MediaDelegate, MediaUploadDelegate, MediaImageProcessingDelegate, NSCoding>
{
    _Bool _cameraFrontFacing;
    _Bool _shouldIncludeLocationData;
    Media *_media;
    NSString *__id;
    NSString *_captionText;
    NSString *_clientId;
    EphemeralMedia *_doublePostParent;
    long long _ephemeralMediaState;
    NSDate *_firstPostDate;
    NSString *_geoFilterId;
    NSString *_encryptedGeoData;
    NSArray *_allGeoFilterIds;
    NSString *_storyFilterId;
    NSString *_storyLensId;
    long long _geoFilterImpressions;
    CLLocation *_location;
    unsigned long long _numberOfTimesReloaded;
    Media *_thumbnailMedia;
    double _time;
    double _timeLeft;
    double _timeStartedViewing;
    long long _type;
    SnapVideoFilter *_videoFilter;
    double _videoTimeSoFar;
    NSDate *_viewedTimestamp;
    long long _orientation;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    NSData *_rawThumbnailData;
    NSMutableDictionary *_secretShareLoggingParams;
    NSMutableDictionary *_shareLoggingParams;
    NSMutableDictionary *_eventLoggingParams;
    NSMutableArray *_targets;
    NSMutableArray *_viewingTimestamps;
}

+ (id)fastCodingKeys;
@property(retain, nonatomic) NSMutableArray *viewingTimestamps; // @synthesize viewingTimestamps=_viewingTimestamps;
@property(retain, nonatomic) NSMutableArray *targets; // @synthesize targets=_targets;
@property(retain, nonatomic) NSMutableDictionary *eventLoggingParams; // @synthesize eventLoggingParams=_eventLoggingParams;
@property(retain, nonatomic) NSMutableDictionary *shareLoggingParams; // @synthesize shareLoggingParams=_shareLoggingParams;
@property(retain, nonatomic) NSMutableDictionary *secretShareLoggingParams; // @synthesize secretShareLoggingParams=_secretShareLoggingParams;
@property(nonatomic) _Bool shouldIncludeLocationData; // @synthesize shouldIncludeLocationData=_shouldIncludeLocationData;
@property(copy, nonatomic) NSData *rawThumbnailData; // @synthesize rawThumbnailData=_rawThumbnailData;
@property(copy, nonatomic) SCSnapCommonLoggingParameters *commonLoggingParameters; // @synthesize commonLoggingParameters=_commonLoggingParameters;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool cameraFrontFacing; // @synthesize cameraFrontFacing=_cameraFrontFacing;
@property(retain, nonatomic) NSDate *viewedTimestamp; // @synthesize viewedTimestamp=_viewedTimestamp;
@property(nonatomic) double videoTimeSoFar; // @synthesize videoTimeSoFar=_videoTimeSoFar;
@property(retain, nonatomic) SnapVideoFilter *videoFilter; // @synthesize videoFilter=_videoFilter;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double timeStartedViewing; // @synthesize timeStartedViewing=_timeStartedViewing;
@property(nonatomic) double timeLeft; // @synthesize timeLeft=_timeLeft;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) Media *thumbnailMedia; // @synthesize thumbnailMedia=_thumbnailMedia;
@property(nonatomic) unsigned long long numberOfTimesReloaded; // @synthesize numberOfTimesReloaded=_numberOfTimesReloaded;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) long long geoFilterImpressions; // @synthesize geoFilterImpressions=_geoFilterImpressions;
@property(retain, nonatomic) NSString *storyLensId; // @synthesize storyLensId=_storyLensId;
@property(retain, nonatomic) NSString *storyFilterId; // @synthesize storyFilterId=_storyFilterId;
@property(retain, nonatomic) NSArray *allGeoFilterIds; // @synthesize allGeoFilterIds=_allGeoFilterIds;
@property(retain, nonatomic) NSString *encryptedGeoData; // @synthesize encryptedGeoData=_encryptedGeoData;
@property(retain, nonatomic) NSString *geoFilterId; // @synthesize geoFilterId=_geoFilterId;
@property(retain, nonatomic) NSDate *firstPostDate; // @synthesize firstPostDate=_firstPostDate;
@property(nonatomic) long long ephemeralMediaState; // @synthesize ephemeralMediaState=_ephemeralMediaState;
@property(retain, nonatomic) EphemeralMedia *doublePostParent; // @synthesize doublePostParent=_doublePostParent;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;
@property(retain, nonatomic) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;
- (void)markViewingTimestamp;
- (id)logId;
- (void)reprocessVideo;
- (_Bool)timeToSendHasExpired;
- (CDUnknownBlockType)uploadFailureBlock;
- (CDUnknownBlockType)uploadSuccessBlock;
- (id)uploadParametersWithData:(_Bool)arg1;
- (void)setUploading;
- (void)doublePost;
- (void)addTarget:(id)arg1;
- (void)imageProcessingDidSucceedForMedia:(id)arg1;
- (void)uploadMedia;
- (id)username;
- (void)mediaUploadDidFailForMedia:(id)arg1;
- (void)mediaUploadDidSucceedForMedia:(id)arg1;
- (long long)uploadMediaTypeForMedia:(id)arg1;
- (id)uploadMediaIdForMedia:(id)arg1;
- (_Bool)isImage;
- (_Bool)isVideoWithSound;
- (_Bool)isVideoWithNoSound;
- (_Bool)isVideo;
- (id)requestContexts;
- (_Bool)needsAuthToFetch;
- (_Bool)encrypt;
- (_Bool)persist;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)mediaIdForMedia:(id)arg1;
- (id)endpointParamsForMedia:(id)arg1;
- (id)endpointForMedia:(id)arg1;
- (void)targetSetVideoFilter:(id)arg1;
- (void)targetSetMedia:(id)arg1;
- (void)resetMedia;
@property(retain, nonatomic) Media *media; // @synthesize media=_media;
- (void)copyDataFromEphemeralMedia:(id)arg1;
- (void)setupThumbnailMedia;
- (void)didDecodeObject;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (_Bool)preferFastCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loggingParametersForEvent:(id)arg1;
- (void)setLoggingParameters:(id)arg1 forEvent:(id)arg2;
- (void)logEvent:(id)arg1;
- (void)addEventLoggingParameters:(id)arg1;
- (id)eventLoggingParameters;
- (id)secretShareLoggingParameters;
- (void)addSecretShareLoggingParameters:(id)arg1;
- (id)shareLoggingParameters;
- (void)addShareLoggingParameters:(id)arg1;
- (id)typeParams;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithClientId;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

