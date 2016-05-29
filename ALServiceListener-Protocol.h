//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ALConnectionLostEvent, ALDeviceListChangedEvent, ALMediaConnTypeChangedEvent, ALMediaInterruptEvent, ALMediaIssueEvent, ALMediaStatsEvent, ALMediaStreamFailureEvent, ALMessageEvent, ALMicActivityEvent, ALSessionReconnectedEvent, ALSpeechActivityEvent, ALUserStateChangedEvent, ALVideoFrameSizeChangedEvent;

@protocol ALServiceListener

@optional
- (void)onSpeechActivity:(ALSpeechActivityEvent *)arg1;
- (void)onMediaStreamFailure:(ALMediaStreamFailureEvent *)arg1;
- (void)onMicActivity:(ALMicActivityEvent *)arg1;
- (void)onDeviceListChanged:(ALDeviceListChangedEvent *)arg1;
- (void)onMediaInterrupt:(ALMediaInterruptEvent *)arg1;
- (void)onMediaIssue:(ALMediaIssueEvent *)arg1;
- (void)onMediaConnTypeChanged:(ALMediaConnTypeChangedEvent *)arg1;
- (void)onMessage:(ALMessageEvent *)arg1;
- (void)onMediaStats:(ALMediaStatsEvent *)arg1;
- (void)onMediaStreamEvent:(ALUserStateChangedEvent *)arg1;
- (void)onUserEvent:(ALUserStateChangedEvent *)arg1;
- (void)onSessionReconnected:(ALSessionReconnectedEvent *)arg1;
- (void)onConnectionLost:(ALConnectionLostEvent *)arg1;
- (void)onVideoFrameSizeChanged:(ALVideoFrameSizeChangedEvent *)arg1;
@end

