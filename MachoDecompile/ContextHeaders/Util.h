// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef UTIL_H
#define UTIL_H


#import <Foundation/Foundation.h>


@interface Util : NSObject



+(CGFloat)elapsedNanosForMachAbsoluteTimeStart:(NSUInteger)arg0 machAbsoluteTimeEnd:(NSUInteger)arg1 ;
+(CGFloat)elapsedNanosSinceMachAbsolute:(NSUInteger)arg0 ;
+(CGFloat)elapsedMillisForMachAbsoluteTimeStart:(NSUInteger)arg0 machAbsoluteTimeEnd:(NSUInteger)arg1 ;
+(CGFloat)elapsedMillisSinceMachAbsolute:(NSUInteger)arg0 ;
+(CGFloat)elapsedNanosSinceMachAbsolute:(NSUInteger)arg0 nowTarget:(*NSUInteger)arg1 ;
+(CGFloat)elapsedMillisSinceMachAbsolute:(NSUInteger)arg0 nowTarget:(*NSUInteger)arg1 ;
+(CGFloat)elapsedMillisForBlock:(id)arg0 ;
+(CGFloat)elapsedMillisForBlock:(id)arg0 enableTiming:(unk)arg1 ;
+(id)buildVersion;
+(id)languageTagForString:(id)arg0 ;
+(char)linewiseFromFile:(id)arg0 dataReadingOptions:(NSUInteger)arg1 withIterator:(id)arg2 ;


@end


#endif