//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotification, NSString, SCTextView, UIColor;

@protocol NewPasswordView <NSObject>
@property(retain, nonatomic) SCTextView *confirmPwTextView;
@property(retain, nonatomic) SCTextView *pwTextView;
- (void)inputKeyboardWillChangeFrame:(NSNotification *)arg1;
- (void)setContinueIndicatorAnimating:(_Bool)arg1;
- (void)setStrengthIndicatorAnimating:(_Bool)arg1;
- (void)setContinueEnabled:(_Bool)arg1;
- (void)setPasswordConfirmError:(NSString *)arg1;
- (void)setPasswordError:(NSString *)arg1;
- (void)setIndicatorWithMessage:(NSString *)arg1 color:(UIColor *)arg2;
@end

