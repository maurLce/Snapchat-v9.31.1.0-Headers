//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCUserProperties.h"

@class SCUserToolTipStatus;

@interface SCDiscoverUserProperties : SCUserProperties
{
    _Bool _legacyHasSeenDiscoverNewUserOverlay;
    SCUserToolTipStatus *_toolTipStatus;
}

@property(nonatomic) _Bool legacyHasSeenDiscoverNewUserOverlay; // @synthesize legacyHasSeenDiscoverNewUserOverlay=_legacyHasSeenDiscoverNewUserOverlay;
@property(retain, nonatomic) SCUserToolTipStatus *toolTipStatus; // @synthesize toolTipStatus=_toolTipStatus;
- (void).cxx_destruct;
- (void)setSeenNewUserOverlay;
- (_Bool)hasSeenNewUserOverlay;
- (id)initWithUsername:(id)arg1 userToolTipStatus:(id)arg2 legacyHasSeenDiscoverNewUserOverlay:(_Bool)arg3;

@end

