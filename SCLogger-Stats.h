//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLogger.h"

@interface SCLogger (Stats)
+ (id)perfMetricsAsString;
+ (id)perfMetrics;
+ (unsigned long long)currentThreadCount;
+ (double)cpuUsage;
+ (unsigned long long)getFileSizesMBInDirectory:(id)arg1;
+ (id)diskUsageParams;
+ (unsigned long long)diskspaceFreeMB;
+ (unsigned long long)diskspaceUsedMB;
+ (double)mallocedMemoryUsedMB;
+ (double)memoryInactiveUsedMB;
+ (double)memoryActiveUsedMB;
+ (double)memoryWireUsedMB;
+ (double)memoryTotalUsedMB;
+ (double)memoryFreeMB;
+ (double)memoryVirtualMB;
+ (double)memoryUsedMB;
@end

