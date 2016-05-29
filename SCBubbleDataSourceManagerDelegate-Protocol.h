//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, SCBubbleDataSource;

@protocol SCBubbleDataSourceManagerDelegate <NSObject>
- (void)didBeginExpiringBubbleWithDataSource:(SCBubbleDataSource *)arg1;
- (void)didUpdateBubbleWithDataSource:(SCBubbleDataSource *)arg1 indexPath:(NSIndexPath *)arg2;
- (void)didAddMessageToBubbleWithDataSource:(SCBubbleDataSource *)arg1;
- (void)didCreateNewBubbleWithDataSource:(SCBubbleDataSource *)arg1;
@end

