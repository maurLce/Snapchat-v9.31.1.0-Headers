//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCViewControllerTransitionAnimatorDelegate.h"

@class NSString, SCDiscoverEdition, SCDiscoverEditionViewController;

@protocol SCDiscoverEditionViewControllerDelegate <NSObject, SCViewControllerTransitionAnimatorDelegate>
- (void)editionViewController:(SCDiscoverEditionViewController *)arg1 didFinishViewingEdition:(SCDiscoverEdition *)arg2 withExitType:(NSString *)arg3;
- (void)editionViewController:(SCDiscoverEditionViewController *)arg1 didFinishViewingEdition:(SCDiscoverEdition *)arg2 withFinalBounds:(struct CGRect)arg3 editionDismissRegion:(unsigned long long)arg4 exitType:(NSString *)arg5;
@end

