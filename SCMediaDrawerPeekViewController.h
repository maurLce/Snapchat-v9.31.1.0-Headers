//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SCChatMediaDrawerBaseMedia, UIImageView;

@interface SCMediaDrawerPeekViewController : UIViewController
{
    id <SCChatDrawerSender> _sender;
    UIImageView *_imageView;
    SCChatMediaDrawerBaseMedia *_media;
}

@property(retain, nonatomic) SCChatMediaDrawerBaseMedia *media; // @synthesize media=_media;
- (void).cxx_destruct;
- (id)previewActionItems;
- (void)viewDidLoad;
- (id)initWithSender:(id)arg1;

@end

