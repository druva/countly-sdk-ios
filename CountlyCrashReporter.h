// CountlyCrashReporter.h
//
// This code is provided under the MIT License.
//
// Please visit www.count.ly for more information.

#import <Foundation/Foundation.h>

@interface CountlyCrashReporter : NSObject
#if (TARGET_OS_IOS || TARGET_OS_TV || TARGET_OS_OSX)
@property (nonatomic) BOOL isEnabledOnInitialConfig;
@property (nonatomic) NSDictionary<NSString *, NSString *>* crashSegmentation;
@property (nonatomic) NSUInteger crashLogLimit;

+ (instancetype)sharedInstance;
- (void)startCrashReporting;
- (void)stopCrashReporting;
- (void)recordException:(NSException *)exception withStackTrace:(NSArray *)stackTrace isFatal:(BOOL)isFatal;
- (void)log:(NSString *)log;
#endif
@end
