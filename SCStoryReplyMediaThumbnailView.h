//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseMediaThumbnailView.h"

@class SCChatTextLabel;

@interface SCStoryReplyMediaThumbnailView : SCBaseMediaThumbnailView
{
    SCChatTextLabel *_chatTextLabel;
}

@property(retain, nonatomic) SCChatTextLabel *chatTextLabel; // @synthesize chatTextLabel=_chatTextLabel;
- (void).cxx_destruct;
- (id)storyReplyMessage;
- (void)prepareVideoIfNecessary;
- (void)setMediaFromMessage:(id)arg1;
- (void)layoutActivityIndicator;
- (void)initChatTextLabel;
- (id)initWithParentVC:(id)arg1 delegate:(id)arg2 isBubbleChat:(_Bool)arg3;
- (id)storyReplyMessageViewModel;

@end

