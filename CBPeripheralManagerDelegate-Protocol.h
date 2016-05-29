//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBATTRequest, CBCentral, CBCharacteristic, CBPeripheralManager, CBService, NSArray, NSDictionary, NSError;

@protocol CBPeripheralManagerDelegate <NSObject>
- (void)peripheralManagerDidUpdateState:(CBPeripheralManager *)arg1;

@optional
- (void)peripheralManagerIsReadyToUpdateSubscribers:(CBPeripheralManager *)arg1;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didReceiveWriteRequests:(NSArray *)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didReceiveReadRequest:(CBATTRequest *)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg1 central:(CBCentral *)arg2 didUnsubscribeFromCharacteristic:(CBCharacteristic *)arg3;
- (void)peripheralManager:(CBPeripheralManager *)arg1 central:(CBCentral *)arg2 didSubscribeToCharacteristic:(CBCharacteristic *)arg3;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didAddService:(CBService *)arg2 error:(NSError *)arg3;
- (void)peripheralManagerDidStartAdvertising:(CBPeripheralManager *)arg1 error:(NSError *)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg1 willRestoreState:(NSDictionary *)arg2;
@end

