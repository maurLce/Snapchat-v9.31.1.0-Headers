//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCSelectRecipientsConfiguration : NSObject
{
    _Bool _friendsIncluded;
    _Bool _needsLoveIncluded;
    _Bool _recentsIncluded;
    _Bool _myStoryIncluded;
    _Bool _otherStoriesIncluded;
    _Bool _galleryIncluded;
    _Bool _quickAddIncluded;
    _Bool _contactsIncluded;
}

@property(readonly, nonatomic) _Bool contactsIncluded; // @synthesize contactsIncluded=_contactsIncluded;
@property(readonly, nonatomic) _Bool quickAddIncluded; // @synthesize quickAddIncluded=_quickAddIncluded;
@property(readonly, nonatomic) _Bool galleryIncluded; // @synthesize galleryIncluded=_galleryIncluded;
@property(readonly, nonatomic) _Bool otherStoriesIncluded; // @synthesize otherStoriesIncluded=_otherStoriesIncluded;
@property(readonly, nonatomic) _Bool myStoryIncluded; // @synthesize myStoryIncluded=_myStoryIncluded;
@property(readonly, nonatomic) _Bool recentsIncluded; // @synthesize recentsIncluded=_recentsIncluded;
@property(readonly, nonatomic) _Bool needsLoveIncluded; // @synthesize needsLoveIncluded=_needsLoveIncluded;
@property(readonly, nonatomic) _Bool friendsIncluded; // @synthesize friendsIncluded=_friendsIncluded;
- (_Bool)storiesIncluded;
- (id)initWithFriendsIncluded:(_Bool)arg1 needsLoveIncluded:(_Bool)arg2 recentsIncluded:(_Bool)arg3 myStoryIncluded:(_Bool)arg4 otherStoriesIncluded:(_Bool)arg5 galleryIncluded:(_Bool)arg6 quickAddIncluded:(_Bool)arg7 contactsIncluded:(_Bool)arg8;
- (id)initWithFriendsIncluded:(_Bool)arg1 needsLoveIncluded:(_Bool)arg2 recentsIncluded:(_Bool)arg3 myStoryIncluded:(_Bool)arg4 otherStoriesIncluded:(_Bool)arg5 galleryIncluded:(_Bool)arg6 quickAddIncluded:(_Bool)arg7;

@end

