//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMessageChatTableViewCell.h"

#import "TTTAttributedLabelDelegate.h"

@class NSString, SCChatTextLabel, SCUpdateAppMediaCardViewModel;

@interface SCUnknownChatTableViewCell : SCMessageChatTableViewCell <TTTAttributedLabelDelegate>
{
    SCChatTextLabel *_chatLabel;
    SCUpdateAppMediaCardViewModel *_cardViewModel;
}

- (void).cxx_destruct;
- (void)renderMetadata;
- (void)renderRoundCorners;
- (void)initMediaCardView;
- (void)renderUpdateMediaCard;
- (void)renderPayload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3;
- (id)unknownViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

