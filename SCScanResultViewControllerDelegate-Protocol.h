//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCScanCardTableViewCell, SCScanResultViewController;

@protocol SCScanResultViewControllerDelegate <NSObject>
- (void)scanResultViewControllerDidDismiss:(SCScanResultViewController *)arg1 dismissType:(unsigned long long)arg2;

@optional
- (SCScanCardTableViewCell *)scanResultViewController:(SCScanResultViewController *)arg1 cardToReplaceScanCard:(SCScanCardTableViewCell *)arg2;
- (_Bool)scanResultViewController:(SCScanResultViewController *)arg1 shouldShowCard:(SCScanCardTableViewCell *)arg2;
@end

