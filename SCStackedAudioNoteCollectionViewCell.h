//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCStackedNoteCollectionViewCell.h"

@class SCAudioNoteView, SCChatAudioNoteMediaMessage, SCLoadingIndicatorView;

@interface SCStackedAudioNoteCollectionViewCell : SCStackedNoteCollectionViewCell
{
    id <SCStackedCollectionViewCellActionDelegate> _delegate;
    SCAudioNoteView *_audioNoteView;
    SCLoadingIndicatorView *_activityIndicatorView;
    SCChatAudioNoteMediaMessage *_message;
}

+ (id)cellReuseIdentifier;
- (void).cxx_destruct;
- (void)_updateAudioNoteView;
- (void)showSpinner:(_Bool)arg1;
- (void)didShowPendingDisplay;
- (void)didShowCompleteDisplay;
- (void)setAudioNoteViewCellIsReadyForDisplay:(_Bool)arg1;
- (void)setIsSender:(_Bool)arg1;
- (void)setMessage:(id)arg1;
- (_Bool)representsMessage:(id)arg1;
- (void)setAudioNoteViewCellActionDelegate:(id)arg1;
- (void)prepareForReuse;
- (void)clearContents;
- (id)activityIndicatorView;
- (void)_initAudioNoteView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

